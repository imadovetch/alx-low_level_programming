#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;
node *head = NULL;
node *revhead = NULL;



addnode(node **head,int data){
	node *newnode = malloc(sizeof(struct node));
	if(!newnode)
	{	perror("malloc faillat");exit(EXIT_FAILURE);}

	if(!head)
		*head = newnode;
	newnode->data = data;
	newnode->next = *head;
	*head = newnode;
}
reversenode(node **head){
	node *current = *head;
	node *prev = NULL;
	node *next = NULL;

	while ((current))
	{

	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
	}
	*head = prev;
}
reverse_second_node(node **head, node **revhead){
	node *current = *head;
	node *newnode = NULL;
	node *prev = NULL;
	while (current)
	{
		if (!newnode) {
            return;
        }
		newnode = malloc(sizeof(node));
		newnode->data = current->data;
		newnode->next = prev;
		prev = current; 
		current = current->next;
	}
	*revhead = newnode;
}
int printnode(const node *head){
	node *current = head;
	int count = 0;
	while (current)
	{
		printf("%d -> ",current->data);
		current = current->next;
		count++;
	}
	printf("done\n");
	return count;
}
addnode_end(node **head, int data){
	struct node *newnode = malloc(sizeof(struct node));
	if(!newnode)
		exit(98);
	newnode->data = data;
	newnode->next = NULL;
	if (*head == NULL) {
        *head = newnode;
        return;
    }
	struct node *current = *head; 
	while (current->next)
	{
		current = current->next;
	}
		current->next = newnode;
}
addnode_at(node **head, int data, int prev){
	node *current = *head;
	node *newnode = malloc(sizeof(node));
	newnode->data = data;
	newnode->next = NULL;
	if(!newnode)
	exit(98);
	while (current->data != prev)
	{
		current = current->next;
	}
	newnode->next = current->next;
	current->next = newnode;

}

delnode(node **head, int data){
	node *current = *head;
	node *prev = NULL;
	while(current->data != data)
	{
		prev = current;
		current = current->next;
	}
	prev->next = current->next;
}
int main (){

	addnode(&head,50);
	addnode(&head,20);
	addnode(&head,60);
	printnode(head);
	addnode_end(&head,10);
	printnode(head);
	delnode(&head,10);
	printnode(head);
	addnode_at(&head,30,20);
	addnode_at(&head,100,30);
	printnode(head);
	delnode(&head,20);
	printnode(head);
	//reverse_second_node(&head,&revhead);
	/*reversenode(&head);
	 printnode(head);
	reversenode2(&head);
	int n = printnode(head);
	printf("%d\n",n);*/
	return 0;
}