#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
hash_table_t* hash_table_create(int size)
{
    // Creates a new HashTable.
    hash_table_t* table = malloc(sizeof(hash_table_t));
    table->size = size;
    table->array = calloc(table->size, sizeof(hash_node_t*));

    for (int i = 0; i < table->size; i++)
        table->array[i] = NULL;

    return table;
}
/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}