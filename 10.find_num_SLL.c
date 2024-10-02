#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int key;
    struct Node* next;
};

void push(struct Node** head_ref, int new_key)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->key = new_key;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

bool search(struct Node* head, int x)
{
    struct Node* current = head; 
    while (current != NULL)
    {
        if (current->key == x)
            return true;
        current = current->next;
    }
    return false;
}

int main()
{
    struct Node* head = NULL;
    int n, new_key, x;

    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &new_key);
        push(&head, new_key);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &x);

search(head, x)? printf("Yes, %d is in the linked list.\n", x) : printf("No, %d is not in the linked list.\n", x);
    return 0;
}