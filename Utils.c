#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
}Stack;

void sa(Stack** head)
{
    Stack** current = head;
    while ((*current)->next != NULL)
    {
        if ((*current)->next->next->next->next = NULL)
        {
            
            // Stack* temp = (Stack*)malloc(sizeof(Stack*));
            // temp = (*head)->next->next;

            printf("%d\n",(*current)->next->data );
            printf("%d\n",(*current)->next->next->data );
            // printf("%d\n",(*head)->next->next->next->data );
            // (*head)->next = (*head)->next->next->next;
            // (*head)->next->next->next->next = temp;
            // temp->next = NULL;



            // (*head)->next->next->next = NULL;
            // (*head)->next->next->next->next = (*head)->next->next;
            break;
        }
        (*current)= (*current)->next;
    }
}

void printList(Stack* head)
{
    while(head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
    printf("\n");
}

void addNode(Stack** head,int num)
{
    Stack* new = (Stack*)malloc(sizeof(Stack*));
    new->data = num;
    new->next = *head;
    *head = new;
    
}

int main(void)
{
    Stack* head = NULL;
    int i = 0;
    while(i < 10)
    { 
         addNode(&head,i);
        // printf("%d",head->data);
        i++;
    }
    printf("\n");
    printList(head);
    
    // printf("%d\n",head->next->next->next->next->next->data);
    sa(&head);
    printList(head);
}