#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	new->key = strdup(key);
	new->value = strdup(value);

	int index = key_index(key,ht->size);

	new->next = ht->array[index];
	ht->array[index] = new;
}
char *hash_table_get(const hash_table_t *ht, const char *key){
	int index = key_index(key,ht->size);

	hash_node_t *current = ht->array[index];

	while(current){
		if(strcmp(current->key ,key) == 0)
		{
			return current->value;
		}

		current = current->next;
	}
	return NULL;

}
void hash_table_print(const hash_table_t *ht){
	hash_node_t *current ;
	printf("{");
	for(int i = 0; i < ht->size;i++){
		current = ht->array[i];
		while(current){
			printf("'%s':'%s',",current->key,current->value);
			current = current->next;
		}
	}
	printf("}");
}
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}