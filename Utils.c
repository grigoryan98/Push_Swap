#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
}stack;


void push(stack** head, stack** pushed)
{
    (*pushed)->next = *head;
    *head = *pushed;
}



void pop(stack** head, stack** poped)
{
    stack* new = *head;
    *poped = new;
    *head = (*head)->next;
    new->next = NULL;
}

void sasb(stack** swaped, char c)
{
    stack* first = NULL;
    stack* second = NULL;
    pop(swaped,&first);
    pop(swaped,&second);
    push(swaped,&first);
    push(swaped,&second);
    if(c == 'a')
        printf("sa");
    else printf("sb");
}

void ss(stack** a, stack** b)
{
    stack* firsta = NULL;
    stack* seconda = NULL;
    pop(a,&firsta);
    pop(a,&seconda);
    push(a,&firsta);
    push(a,&seconda);

    stack* firstb = NULL;
    stack* secondb = NULL;
    pop(b,&firsta);
    pop(b,&seconda);
    push(b,&firsta);
    push(b,&seconda);

    printf("ss");
}

void papb(stack** a, stack** b, char c)
{
    stack* poped = NULL;
    if(c == a)
    {
        pop(a,&poped);
        push(b,&poped);
        printf("pa");
    }
    else
    {
        pop(b,&poped);
        push(a,&poped);
        printf("pb");
    }
}

    
void sasb(stack** swaped, char c)
{
    stack* first = NULL;
    stack* second = NULL;
    pop(swaped,&first);
    pop(swaped,&second);
    push(swaped,&first);
    push(swaped,&second);
    if(c == 'a')
        printf("sa");
    else printf("sb");

}

void printList(stack* head)
{
    while(head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
    printf("\n");
}

void addNode(stack** head,int num)
{
    stack* new = (stack*)malloc(sizeof(stack*));
    new->data = num;
    new->next = *head;
    *head = new;
    
}


int main(void)
{
    stack* head = NULL;
    stack* poped = NULL;
    stack* pushed = NULL;
    int i = 0;
    while(i < 10)
    { 
         addNode(&head,i);
        // printf("%d",head->data);
        i++;
    }
    printList(head);
    sa(&head);
    printf("\n");
    printList(head);
    // test(&head,&sb);
    // printList(head);
    // printf("%d\n",head->next->next->next->next->next->data);
    // sa(&head);
    // printList(head);
}