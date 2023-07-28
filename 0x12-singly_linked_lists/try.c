
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;
Node *head = NULL;

void add_node(Node **head, int value) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (!newNode) {
    exit(98);
  }
  newNode->data = value;
  newNode->next = *head;
  *head = newNode;
}

void add_node_at(Node **head, int value, int point) {
  Node *current;
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (!newNode) {
    exit(98);
  }

  newNode->data = value;
  newNode->next = NULL;

  current = *head;
  while (current->data != point) {
    current = current->next;
  }
  newNode->next = current->next;
  current->next = newNode;
}

void print_node(const Node *h) {
  const Node *current = h;
  while (current) {
    printf("%d -> ", current->data);
    current = current->next;
  }
  printf("Done\n");
}
void remove_node(struct Node **head, int value) {

  Node *subcurrent = NULL;
  Node *current = *head;
  int x = current->data;
  if (x == value) {
    printf("Error can't remove the head value(%d) \n", value);
    exit(98);
  }
  while (current) {
    if (current->data == value) {
      subcurrent->next = current->next;
      break;
    }

    subcurrent = current;
    current = current->next;
  }
}
void rep_node(Node **head, int exvalue, int value) {
  Node *current = *head;

  while (current) {
    if (current->data == exvalue)
      current->data = value;
    current = current->next;
  }
}

int main(void) {
  
  
  int x,y;
  int choix;
  while(1){
    printf("1_create node\n2_add-node-at\n3_print_node\n4_remove\n5_replace\n6_quit\n...............");
    scanf("%d",&choix);
    x = 0; y = 0;
      switch(choix)
    {
      case 1 :
        printf("enter the number you wanna add\n");
        scanf("%d",&x);
        add_node(&head, x);
      break;
      case 2:
          printf("enter the number you wanna add\n");
        scanf("%d",&x);
        printf("enter the number you wanna add after\n");
        scanf("%d",&y);
          add_node_at(&head,x,y);
      break;
      case 3 :
        print_node(head);
      break;
      case 4 :
        printf("enter the number you wanna remove\n");
        scanf("%d",&x);
        remove_node(&head, x);
      break;
      case 5 :
        printf("enter the number you wanna replace \n");
        scanf("%d",&x);
        printf("enter the number you wanna replace with\n");
        scanf("%d",&y);
        rep_node(&head, x, y);
      break;
      case 6 :
        return 0;
      default:
        printf("choose just from 1 to 5\n");
    }
  }
  
}
