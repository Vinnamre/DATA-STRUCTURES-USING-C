#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail = NULL;
struct node *temp = NULL;

void create(){
    int size;
    printf("\nHow many nodes you want to enter : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if(head==NULL){
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
}

void traverse(){
    temp = head;
    printf("\nThe Doubly Linked List is : ");
    while(temp!=0){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

int getlen(){
    temp = head;
    int count = 0;
    while(temp!=0){
        temp=temp->next;
        count++;
    }
    printf("\nThe total number of nodes in list are : %d",count);
    return count;
}

void insert_beg(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    newnode->prev = NULL;
    head->prev = newnode;
    head = newnode;
}

void insert_end(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d",&newnode->data);
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
    newnode->next = NULL;
}

void insert_spec(){
    int pos,count = getlen(),i=1;
    printf("\nEnter the position you want to enter the data : ");
    scanf("%d",&pos);
    if(pos>count){
        printf("\nINVALID POSITION");
    } else if (pos==1){
        insert_beg();
    } else if (pos==count){
        insert_end();
    } else {
        temp = head;
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data : ");
        scanf("%d",&newnode->data);
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
}

void del_beg(){
    if(head==NULL){
        printf("\nThe list is empty");
    } else {
        temp = head;
        head = temp->next;
        head->prev = NULL;
        printf("\nThe data which got removed is : %d",temp->data);
        free(temp);
    }
}

void del_end(){
    if(head==NULL){
        printf("\nThe list is empty");
    } else {
        temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        printf("\nThe data which got removed is : %d",temp->data);
        free(temp);
    }
}

void del_spec(){
    int pos,count = getlen(),i = 1;
    printf("\nEnter the position you want to delete the data : ");
    scanf("%d",&pos);
    if(pos>count){
        printf("\nINVALID CHOICE");
    } else if(pos == 1){
        del_beg();
    } else if(pos==count){
        del_end();
    } else {
        temp = head;
        while(i<pos){
            temp = temp->next;
            i++;
        } 
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        printf("\nThe data which got removed is : %d",temp->data);
        free(temp);
    }
}

void main(){
    int x;
    do{
        printf("\nEnter the choice :\n 1.Create Node\n 2.Display List\n 3.Find Length of List\n 4.Insert Data into List\n 5.Delete Data from List\n 6.Exit : ");
        scanf("%d",&x);
        switch(x){
            case 1: create();
            break;

            case 2: traverse();
            break;

            case 3: getlen();
            break;

            case 4: insert_spec();
            break;

            case 5: del_spec();
            break;

            case 6: exit(0);
            break;

            default: printf("\n***INVALID CHOICE***");
        }
    } while(x!=0);
}