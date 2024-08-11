// implementing circular linked list using tail pointer only

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *tail = NULL;
struct node *temp = NULL;


void create(){
    int size;
    printf("\nEnter the number of nodes you want to create : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(tail == NULL){
        tail = newnode;
        tail->next = newnode;
        } else {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
        }
    }
}

int getlen(){
    int count = 1;
    temp = tail->next;
    while(temp->next!=tail->next){
        temp = temp->next;
        count ++;
    }
    printf("\nThe total number of nodes in list are : %d",count);
    return count;
}

void insert_beg(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next = tail->next;
    tail->next = newnode;
    printf("\nTail %d is now linked with %d",tail->data,tail->next->data);
}

void insert_end(){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d",&newnode->data);
    newnode->next = tail->next;
    tail->next = newnode;
    tail = newnode;
    printf("\n%d is tail now & is linked with %d",newnode->data,tail->next->data);
}

void insert_spec(){
    int pos,count = getlen(),i =1;
    temp = tail->next;
    printf("\nEnter the position you want to insert the data : ");
    scanf("%d",&pos);
    if(pos>count){
        printf("\nINVALID POSITION");
    } else if(pos == 1){
        insert_beg();
    } else if (pos == count){
        insert_end();
    } else {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void del_beg(){
    temp = tail->next;
    tail->next = temp->next;
    printf("\nThe data which got removed is : %d",temp->data);
    printf("\nTail %d is now linked with %d",tail->data,tail->next->data);
    free(temp);
}

void del_end(){
    struct node *prev;
    temp = tail->next;
    while(temp->next!=tail->next){
        prev = temp;
        temp = temp->next;
    }
    prev->next = tail->next;
    tail = prev;
    printf("\nThe data which got removed is : %d",temp->data);
    printf("\nTail %d is now linked with %d",tail->data,tail->next->data);
    free(temp);
}

void del_spec(){
    int pos,count = getlen(),i = 1;
    struct node *prev;
    temp = tail->next;
    printf("\nEnter the position you want to remove data : ");
    scanf("%d",&pos);
    if(pos>count){
        printf("\nINVALID POSITION");
    } else if(pos==1){
        del_beg();
    } else if(pos == count){
        del_end();
    } else if (tail->next = tail){
        printf("\nThe data which got removed is : %d",temp->data);
        tail = NULL;
        free(temp);
    } else {
        while(i<pos){
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next = temp->next;
        printf("\nThe data which got removed is : %d",temp->data);
        free(temp);

    }
}

void traverse(){
    temp = tail->next;
    if(tail == NULL){
        printf("\nThe List is Empty");
    } else {
        printf("\nThe circular linked list is : ");
        while(temp->next!=tail->next){
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
    }
}

void main(){
    int x;
    do{
        printf("\nEnter the choice :\n 1.Create list\n 2.Display List\n 3.Perform insertion\n 4.Perform Deletion\n 5.Find Length of the list\n 6.Exit : ");
        scanf("%d",&x);
        switch(x){
            case 1: create();
            break;

            case 2: traverse();
            break;

            case 3: insert_spec();
            break;

            case 4: del_spec();
            break;

            case 5: getlen();
            break;

            case 6: exit(0);
            break;

            default: printf("***INVALID CHOICE***");
        }
    } while(x!=0);
}