#include <stdio.h>
#include <stdlib.h>

struct TreeNode;
typedef struct TreeNode * RootedTree;
typedef int ElementType;

struct TreeNode
{
    ElementType ele;
    RootedTree parent;
    RootedTree firstChild;
    RootedTree nextSibling;
};

RootedTree insert(RootedTree, ElementType);
RootedTree find(RootedTree, ElementType);
void priRootedTree(RootedTree);

int main(void)
{
    int i, n, id, k, c;
    RootedTree T;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &id, &k);
        if (T == NULL)
            T = insert(T, id);
        if (k) {
            RootedTree P = find(T, id);
            while (k--) {
                scanf("%d", &c);
                insert(P, c);
            }
        }
    }

    // for (i = 0; i < n; i++)
        priRootedTree(find(T, 0));

    return 0;
}

RootedTree insert(RootedTree T, ElementType x)
{
    RootedTree prev;
    RootedTree tmp = (RootedTree) malloc(sizeof(struct TreeNode));
    tmp->ele = x;
    tmp->firstChild = NULL;
    if (T == NULL) {
        T = tmp;
        T->parent = T->nextSibling = NULL;
    } else {
        if (T->firstChild) {
            prev = T->firstChild;
            while (prev->nextSibling)
                prev = prev->nextSibling;
            prev->nextSibling = tmp;
        } else {
            T->firstChild = tmp;
        }
        tmp->parent = T;
    }
    return T;
}

RootedTree find(RootedTree T, ElementType x)
{
    RootedTree tmp;

    if (T == NULL) {
        return NULL;
    } else if (T->ele == x) {
        return T;
    } else {
        tmp = find(T->nextSibling, x);
        if (tmp)
            return tmp;
        else
            return find(T->firstChild, x);
    }
}

void priRootedTree(RootedTree T)
{
    RootedTree tmp;
    int depth = 0;

    // tmp = T;
    // while (tmp->parent) {
    //     depth++;
    //     tmp = tmp->parent;
    // }
    printf("node %d: parent = %d, depth = %d, %s, [", T->ele, T->parent ? T->parent->ele : -1, depth, T->parent ? (T->firstChild ? "internal node" : "leaf") : "root");
    
    tmp = T->firstChild;
    if (tmp) {
        printf("%d", tmp->ele);
        tmp = tmp->nextSibling;
        while (tmp) {
            printf(", %d", tmp->ele);
            tmp = tmp->nextSibling;
        }
    }
    printf("]\n");
}