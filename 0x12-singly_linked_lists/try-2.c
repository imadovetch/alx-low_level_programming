#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *revhead = NULL;
void create_node_atend(struct node **head,int value){
	struct node *newnode = malloc(sizeof(struct node));
	if(!newnode)
		exit(98);
	newnode->data = value;
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
void print_node(struct node *head){
	struct node *current = head;

	while(current){
		printf("%d -> ",current->data);
		current = current->next; 
	}
	printf(" safi ra sallaw \n");
}
del_node(struct node **head , int value){
	struct node *current = *head;
	struct node *subcurrent = NULL;

	while (current->data != value)
	{
		subcurrent = current;
		current = current->next;

	}
	subcurrent->next = current->next; 
	 
}
void reverse_list(struct node** head) {
   struct node *lorani = NULL;
   struct node *current = *head ;
   struct node *next_node = NULL;

   while(current){
	next_node = current->next;
	current->next = lorani;
	lorani = current;
	current = next_node;
   }
   *head = lorani;
}
void sort(struct node **head){
	struct node *current = *head;
	struct node *prev = NULL;
	struct node *next_node = NULL;

	while(current)
	{
		if (current->data > prev->data)
		{
			next_node = current->next;
			prev->next = current;
			current = next_node;
		}
		prev = current;
		current = next_node; 	
	}
	
}
void rev_in_new_node(struct node** head, struct node** revhead) {
    struct node* current = *head;
    struct node* prev_newnode = NULL;
    struct node* new_list = NULL;


    while (current) {

        new_list = malloc(sizeof(struct node));
        if (!new_list) {
            return;
        }

        // Copy data from the original list to the new node
       new_list->data = current->data;
	   new_list->next = prev_newnode;
	   prev_newnode = current;
	   current = current->next;
	}
    *revhead = new_list;
}

int main(){
	create_node_atend(&head,12);
	create_node_atend(&head,20);
	create_node_atend(&head,30);
	create_node_atend(&head,40);
	create_node_atend(&head,50);
	
	print_node(head);
	rev_in_new_node(&head,&revhead);
	reverse_list(&head);
	
	printf("hadi nfsha mreversiya\n");
	print_node(head);
	printf("hada reverse f new list\n");
	print_node(revhead);

	//sort(&head);
	print_node(head);
	del_node(&head,30);
	print_node(head);
	
}
