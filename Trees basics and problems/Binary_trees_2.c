//implementation of binary search tree

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *create_node(int data){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node *insert(struct node *root,int data){
    if(root == NULL){
        return create_node(data);
    } else if (data < root->data){
        root->left = insert(root->left,data);
    } else if (data > root->data){
        root->right = insert(root->right,data);
    }
    return root;
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void main(){
    struct node *root = NULL;
    root = insert(root,59);
    insert(root,45);
    insert(root,89);
    insert(root,23);
    insert(root,32);
    insert(root,45);
    insert(root,78);
    insert(root,67);

    printf("The inorder traversal is : ");
    inorder(root);
}