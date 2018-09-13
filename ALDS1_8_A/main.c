#include <stdio.h>
#include <stdlib.h>

struct TreeNode;
typedef struct TreeNode * Tree;
typedef struct TreeNode * Position;
typedef int ElementType;

struct TreeNode
{
    ElementType ele;
    Tree left;
    Tree right;
};

void priTreeNode(Tree);
Tree insert(Tree, ElementType);
void inorder(Tree, void (*)(Tree));
void preorder(Tree, void (*)(Tree));

int main(void)
{
    int m, k;
    char op[7];

    Tree T;

    scanf("%d", &m);
    while (m--) {
        scanf("%s", op);
        if (op[0] == 'i') {
            scanf("%d", &k);
            T = insert(T, k);
        } else if (op[0] == 'p') {
            inorder(T, priTreeNode);
            putchar('\n');
            preorder(T, priTreeNode);
            putchar('\n');
        }
    }

    return 0;
}

void priTreeNode(Tree T)
{
    printf(" %d", T->ele);
}

Tree insert(Tree T, ElementType x)
{
    if (T == NULL) {
        T = (Tree) malloc(sizeof(struct TreeNode));
        T->ele = x;
        T->left = T->right = NULL;
    } else if (T->ele < x) {
        T->right = insert(T->right, x);
    } else if (T->ele > x) {
        T->left = insert(T->left, x);
    }
    return T;
}

void inorder(Tree T, void (* print)(Tree))
{
    if (T == NULL)
        return;
    inorder(T->left, print);
    print(T);
    inorder(T->right, print);
}

void preorder(Tree T, void (* print)(Tree))
{
    if (T == NULL)
        return;
    print(T);
    preorder(T->left, print);
    preorder(T->right, print);
}