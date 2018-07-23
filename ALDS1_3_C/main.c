#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int ele;
    struct Node *prev, *next;
};

typedef struct Node * DLL;

DLL search(int);
void insert(int);
void deleteNode(DLL);
void delete(int);
void deleteFirst();
void deleteLast();
void initailize();
void priDLL();

DLL head;

int main(void)
{
    int n, x;
    char cmd[12];

    initailize();
    scanf("%d", &n);
    
    while (n--) {
        scanf("%s", cmd);
        if (strcmp(cmd, "insert") == 0) {
            scanf("%d", &x);
            insert(x);
        } else if (strcmp(cmd, "delete") == 0) {
            scanf("%d", &x);
            delete(x);
        } else if (strcmp(cmd, "deleteFirst") == 0) {
            deleteFirst();
        } else if (strcmp(cmd, "deleteLast") == 0) {
            deleteLast();
        }
    }
    priDLL();

    return 0;
}

void initailize()
{
    head = (DLL) malloc(sizeof(struct Node));
    head->prev = head->next = head;
}

void insert(int x)
{
    DLL l = (DLL) malloc(sizeof(struct Node));
    l->ele = x;
    l->next = head->next;
    head->next->prev = l;
    head->next = l;
    l->prev = head;
}

DLL search(int x)
{
    DLL tmp = head->next;
    while (tmp != head && tmp->ele != x)
        tmp = tmp->next;
    return tmp;
}

void deleteNode(DLL l)
{
    if (l == head) return;
    l->prev->next = l->next;
    l->next->prev = l->prev;
    free(l);
}

void delete(int x)
{
    deleteNode(search(x));
}

void deleteFirst()
{
    deleteNode(head->next);
}

void deleteLast()
{
    deleteNode(head->prev);
}

void priDLL()
{
    DLL tmp = head->next;
    if (tmp == head)
        return;
    printf("%d", tmp->ele);
    tmp = tmp->next;
    while (tmp != head) {
        printf(" %d", tmp->ele);
        tmp = tmp->next;
    }
    putchar('\n');
}