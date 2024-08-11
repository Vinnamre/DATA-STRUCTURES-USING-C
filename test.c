//implementation of the binary tree using the recursion

#include<Stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node *left;
    struct node * right;
};

struct node *create(){
    int x;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data (-1 for the no node): ");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    } else {
        newnode->data = x;
        printf("enter the data on the left side of %d: ",x);
        newnode->left = create();
        printf("Enter the data on the right side of %d : ",x);
        newnode->right = create();
        return newnode;
    }

}

void inorder(struct node *root){
    if(root!=0){
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root){
    if(root!=0){
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root){
    if(root!=0){
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}

void 

void main(){
    struct node *root = NULL;
    root = create();
    create();

    printf("the inorder traversal of the tree is : ");
    inorder(root);

    printf("The preorder traversal of the tree is : ");
    preorder(root);

    printf("The postorder traversal of the tree is : ");
    postorder(root);
}
