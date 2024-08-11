#include<Stdio.h>
#include<stdlib.h>

struct myArray{
    int max_size;
    int used_size;
    int *ptr;
};

void create(struct myArray * a, int t_size, int u_size){

    //(*a).total_size = t_size;
    //(*a).used_size = u_size;
    //(*a).ptr = (int *)malloc(t_size*sizeof(int));

    a->max_size = t_size;
    a->used_size = u_size;
    a->ptr = (int*)malloc(t_size*sizeof(int));
}

void show(struct myArray *a){
    for(int i =0; i<a->used_size;i++){
        printf("%d\n",(a->ptr)[i] );
    }
}

void setval(struct myArray *a){
    int n;
    for(int i=0; i< a->used_size ; i++){
        printf("Enter the element %d: ",i);
        scanf("%d\n",&n);
        (a->ptr)[i] = n;
    }
}

int main(){
    struct myArray marks;
    create(&marks, 50, 10);
    setval(&marks);
    show(&marks);
}