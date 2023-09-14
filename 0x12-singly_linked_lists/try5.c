#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
} node;
struct node *head = NULL;
struct node *revhead = NULL;
addnodes(node **head, int data){
	node *newnode = malloc(sizeof(node));
	if(!newnode)
		exit(98);
	newnode->data = data;
	newnode->next = *head;
	*head = newnode;
}
printnode(node *head){
	node *current = head;

	while (current)
	{
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf("done\n");
}
addnodes_end(node **head,int data){
	node *newnode = malloc(sizeof(node));
	node *current = *head;
	if(!newnode)
		exit(98);
	newnode->data = data;
	newnode->next = NULL;
	while(current->next){
		current = current->next;
	}
	current->next = newnode;
	

}
reverse(node **head){
	node *current = *head;
	node *next = NULL;
	node *prev = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}
delnode(node **head,int data){
	node *current = *head;
	node *prev = NULL;

	while (current->data != data)
	{
		prev = current;
		current = current->next;
	}
	prev->next = current->next;
	 
}
replacenode(node **head,int last, int new){
	node *current = *head;
	while (current->data != last)
	{
		current = current->next;
	}
	current->data = new;
}
int main(){
	addnodes(&head,80);
	addnodes(&head,20);
	addnodes(&head,70);
	addnodes_end(&head,90);
	printnode(head);
	reverse(&head);
	printnode(head);
	delnode(&head,70);
	printnode(head);
	replacenode(&head,80,50);
	printnode(head);
}
