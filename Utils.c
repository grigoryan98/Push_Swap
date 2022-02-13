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

void popend(stack** head, stack** poped)
{
    stack* new = (stack*)malloc(sizeof(stack*));
    new = *head;
    while(new->next->next != NULL)
    {
        new = new->next;
    }
    *poped = new->next;
    new->next = NULL;
    // *poped = new;

    // *poped = (new)->next;
    // *


}

void pushend(stack** ab,stack** poped)
{
    stack* current = *ab;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = *poped;
    
}

void swap_ab(stack** swaped, char c)
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

void swap_both(stack** a, stack** b)
{
    stack* firsta = (stack*)malloc(sizeof(stack*));
    stack* seconda = (stack*)malloc(sizeof(stack*));
    pop(a,&firsta);
    pop(a,&seconda);
    push(a,&firsta);
    push(a,&seconda);

    stack* firstb = (stack*)malloc(sizeof(stack*));
    stack* secondb = (stack*)malloc(sizeof(stack*));
    pop(b,&firsta);
    pop(b,&seconda);
    push(b,&firsta);
    push(b,&seconda);

    printf("ss");
}

void push_ab(stack** src, stack** dst, char c)
{
    stack** poped = (stack**)malloc(sizeof(stack**));
    pop(src,poped);
    push(dst,poped);
    if(c = 'a')
        printf("pa\n");
    else printf("pb\n");
}

void rotate_ab(stack** ab, char c)
{
    
    stack** poped = (stack**)malloc(sizeof(stack**));
    pop(ab, poped);
    
    pushend(ab, poped);
    if(c == 'a')
        printf("ra\n");
    else
        printf("rb\n");    
}

void rotate_both(stack** a, stack** b)
{
    stack** popeda = (stack**)malloc(sizeof(stack**));
    pop(a, popeda);
    pushend(a, popeda);
    
    stack** popedb = (stack**)malloc(sizeof(stack**));
    pop(b, popedb);
    pushend(b, popedb);

    printf("rr");  
}

void reverse_rotate_ab(stack** a, char c)
{
    stack** poped = (stack**)malloc(sizeof(stack**));
    popend(a,poped);
    push(a,poped);
    if(c == 'a')
        printf("rra");
    else    
        printf("rrb");
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
    stack* a = NULL;
    stack* b = NULL;
    stack* poped = (stack*)malloc(sizeof(stack*));
    stack* pushed = NULL;
    int i = 0;
    while(i < 10)
    { 
         addNode(&a,i);
         addNode(&b,i);
        i++;
    }
    printList(a);
    printList(b);
    push_ab(&a,&b,'b');
    printList(a);
    printList(b);
}