#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node_t;

Node_t *createNode(int dataValue)
{
    Node_t *node = (Node_t *)malloc(sizeof(Node_t));

    if (node == NULL)
    {
        perror("Error allocating memory for creating Node");
        return NULL;
    }

    node->data = dataValue;
    node->next = NULL;
    return node;
}

void insertAtBeginning(Node_t **headRef, int dataValue)
{
    Node_t *newNode = createNode(dataValue);
    if (newNode == NULL)
    {
        perror("Failed to insert at beginning of the node");
        return;
    }

    if (headRef != NULL)
    {
        newNode->next = *headRef;
    }

    *headRef = newNode;
}

void printList(Node_t *head)
{
    printf("List: ");
    if (head == NULL)
    {
        printf("Empty");
    }
    Node_t *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void freeList(Node_t **headRef)
{
    printf("Freeing List\n");
    Node_t *current = *headRef;
    while (current != NULL)
    {
        printf("Freeing List %d\n", current->data);
        Node_t *temp = current;
        current = current->next;
        free(temp);
        temp = NULL;
    }
    printf("Finish\n");
    *headRef = NULL;
}

int main()
{
    Node_t *head = NULL;

    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);

    printList(head);

    freeList(&head);
    printList(head);

    return 0;
}
