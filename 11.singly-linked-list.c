#include<stdio.h>
#include<stdlib.h>

// Define the structure for a node in the linked list
typedef struct node {
   int data;
   struct node* next;
}Node;

// Function to insert a new node at the end of the linked list
void insert(Node **head, int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    } else {
        Node *last_node = *head;
        while (last_node->next != NULL) {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }
}

// Function to print the elements of the linked list
void printList(Node *head) {
    while(head) {
        printf(" %d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    Node *head = NULL;

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int data;
        printf("Enter element %d: ", i+1);
        scanf("%d", &data);
        insert(&head, data);
    }

    printf("Linked list: ");
    printList(head);

    int num;
    printf("Enter a number to insert: ");
    scanf("%d", &num);
    insert(&head, num);

    printf("Linked list after insertion: ");
    printList(head);

    return 0;
}