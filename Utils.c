#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
}Stack;

void sa(Stack* head)
{
    while (head->next != NULL)
    {
        if (head->next->next->next = NULL)
        {
            
            Stack* temp = (Stack*)malloc(sizeof(Stack*));
            head->next = head->next->next->next;
            temp = head->next->next;
            head->next->next = NULL;
            head->next->next->next = head->next->next;
        }
        head = head->next;
    }
}

void printList(Stack* head)
{
    while(head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
}

void addNode(Stack* head,int num)
{
    Stack* new = (Stack*)malloc(sizeof(Stack*));
    new->data = num;
    new->next = head;
    printf("%d",new->data);
    head = new;
}

int main(void)
{
    
    Stack* head = NULL;
    int i = 0;
    while(i < 5)
    {
        
        addNode(head,i);
        i++;
    }

    printList(head);
}