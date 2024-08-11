//IMPLEMENTATION OF THE BINARY TREE USING RECURSION

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *create_node(){
    int x;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data (-1 for no node): ");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    } else {
        newnode->data = x;
        printf("Enter the data on the left side of %d : ",x);
        newnode->left = create_node();
        printf("Enter the data on the right side of %d : ",x);
        newnode->right = create_node();
        return newnode;
    }
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root){
    if(root!=0){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root){
    if(root!=0){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
} 

void main(){
    struct node *root = NULL;
    root = create_node();

    printf("The inorder taversal of the tree is : ");
    inorder(root);

    printf("The preorder traversal of the tree is : ");
    preorder(root);

    printf("the post oreder traversal of the tree is : ");
    postorder(root);



}