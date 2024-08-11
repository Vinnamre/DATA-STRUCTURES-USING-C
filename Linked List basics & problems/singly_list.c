//Implementation and operation on linked list 

#include<stdio.h>
#include<stdlib.h>

// structure of node 
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *temp = NULL;

// creation of the node
void create_node(){
    int size;
    printf("\nHow many nodes you want to enter : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head==NULL){
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

// Displaying the linked list
void traverse(){
    temp = head;
    printf("\nThe linked list is : ");
    while(temp!=0){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}


// To get get length of the linked list
int getlen(){
    temp = head;
    int count = 0;
    while(temp!=0){
        temp =temp->next;
        count++;
    }
    printf("\nThe total length of the linked list is : %d",count);
    return count;
}

// For insertion from beginning
void insertion_beg(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
}

// For insertion from End
void insertion_end(){
   struct node *newnode = (struct node*)malloc(sizeof(struct node));
   printf("\nEnter the data : ");
   scanf("%d",&newnode->data);
   newnode->next = NULL;
   temp = head;
   while(temp->next!=0){
    temp = temp->next;
   }
   temp->next = newnode;
}

// For insertion from Specific position
void insertion_spec(){
    int pos, count=getlen(), i = 1;
    printf("\nEnter the position you want to insert the data : ");
    scanf("%d",&pos);

    if(pos>count){
        printf("\nINVAILD POSITION");
    } else if(pos==1){
        insertion_beg();
    } else if(pos==count){
        insertion_end();
    } else {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

// For deletion from beginning
void del_beg(){
    if(head==NULL){
        printf("\nThe LIst is Empty");
    } else {
        temp = head;
        head = temp->next;
        printf("\nThe element which got removed is : %d",temp->data);
        free(temp);
    }
}

// For deletion from End
void del_end(){
   if(head==NULL){
    printf("\nThe list is Empty");
   } else {
        temp = head;
        struct node *prev_node;
        while(temp->next!=0){
            prev_node = temp;
            temp = temp->next;
        }
        prev_node->next = NULL;
        printf("\nThe data which got removed is : %d",temp->data);
        free(temp);
   }
}


// For deletion from specific position
void del_spec(){
    int pos,count=getlen(),i=1;
    printf("\nEnter the position you want to delete data : ");
    scanf("%d",&pos);
    if(head==NULL){
        printf("\nthe list is empty");
    } else if(pos==1){
        del_beg();
    } else if(pos==count){
        del_end();
    } else {
        temp = head;
        struct node *prev_node;
        while(i<pos){
            prev_node = temp;
            temp = temp->next;
            i++;
        }
        prev_node->next = temp->next;
        printf("\nThe data which got removed is : %d",temp->data);
        free(temp);

    }
}

// Main function
void main(){
    int x;
    do{
        printf("\nEnter the choice :\n 1.Create Node\n 2.Display List\n 3.Find Length of List\n 4.Insert Data into List\n 5.Delete Data from List\n 6.Exit : ");
        scanf("%d",&x);
        switch(x){
            case 1: create_node();
            break;

            case 2: traverse();
            break;

            case 3: getlen();
            break;

            case 4: insertion_spec();
            break;

            case 5: del_spec();
            break;

            case 6: exit(0);
            break;

            default: printf("\n***INVALID CHOICE***");
        }
    } while(x!=0);
}