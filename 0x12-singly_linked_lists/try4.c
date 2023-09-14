#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;
node *head = NULL;
printn(node *head){
	node *current = head;

	while (current)
	{
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("done\n");
}
addn(node **head, int data){
	node *newnode = malloc(sizeof(node));
	if(!newnode)
		exit(98);
	if(!head)
		*head = newnode;
	newnode->data = data;
	newnode->next =	*head;
	*head = newnode;
}
add_end(node **head, int data){
	node *newnode = malloc(sizeof(node));
	node *current = *head;
	if (!newnode)
		exit(98);
	newnode->data = data;
	newnode->next = NULL;
	while (current->next)
	{
		current = current->next;
	}
	
	current->next = newnode;
}
del_from_1_to_1(node **head,int from,int too){
	node *current = *head;
	node *prev = NULL;
	node *next = NULL;
	while (current->data != too)
	{
		
		current = current->next;
		prev = current;
	}

	current = *head;
	printf("%d\n",prev->data);
	while (current)
	{
		if(current->data == from )
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
			if (current->data == too)
			{
				break;
			}	
		}
		current = current->next; 
	}	
}
struct node* reverseBetween(struct node* head, int s, int e){
    if (!head || s >= e)    return head;
    struct node* dummy = malloc(sizeof(struct node));
    dummy->next = head;
    struct node* b = dummy;
    int pos = 1;

    while (pos++ < s)
        b = b->next;

    struct node* p = b->next;
    while(s < e){
        struct node* w = p->next;
        p->next = w->next;
        w->next = b->next;
        w->next = b->next;
        b->next = w;
        s++;
    }
    return dummy->next;
}

int main(){

	
	addn(&head,40);
	addn(&head,10);
	addn(&head,20);
	addn(&head,90);
	addn(&head,60);
	addn(&head,70);
	addn(&head,30);
	add_end(&head,15);

	printn(head);
	reverseBetween(head, 2, 5);
	printn(head);
	return 0;
}