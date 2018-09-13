#include <stdio.h>
#include <stdlib.h>

struct TreeNode;
typedef struct TreeNode * Tree;
typedef struct TreeNode * Position;
typedef int ElementType;

struct TreeNode
{
    ElementType ele;
    Tree parent;
    Tree left;
    Tree right;
};

void priTreeNode(Tree);
Tree insert(Tree, ElementType);
Tree find(Tree, ElementType);
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
        } else if (op[0] == 'f') {
            scanf("%d", &k);
            puts(find(T, k) ? "yes" : "no");
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
        T->left = T->right = T->parent = NULL;
    } else if (T->ele < x) {
        T->right = insert(T->right, x);
        T->right->parent = T;
    } else if (T->ele > x) {
        T->left = insert(T->left, x);
        T->left->parent = T;
    }
    return T;
}

Tree find(Tree T, ElementType x)
{
    if (T == NULL)
        return NULL;
    else if (T->ele < x)
        return find(T->right, x);
    else if (T->ele > x)
        return find(T->left, x);
    else
        return T;
}

Tree delete(Tree T, ElementType x)
{
    Position ptrToTree = find(T, x);
    if (!ptrToTree) return;
    if (!ptrToTree->left && !ptrToTree->right)
        if (ptrToTree->parent)
            if (ptrToTree->parent->left == ptrToTree)
                ptrToTree->parent->left = NULL;
            else
                ptrToTree->parent->right = NULL;
        else
            T = NULL;
    else if (ptrToTree->left && ptrToTree->right)
        
    else
        if (ptrToTree->left)

        else

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