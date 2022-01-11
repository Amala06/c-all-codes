#include<iostream>
using namespace std;
struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if (ptr->top==-1)
    {
       return -1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr){
    if (ptr->top==ptr->size-1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr,int val){
    if(isFull(ptr)){
    cout<<"stack overflow cannot push "<<val<<" to the stack \n";
    }
    else
    {
      ptr->top++;
      ptr->arr[ptr->top]=val;
    }
} 

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        cout<<"stack underflow \n";
        return -1;
    }
    else
    {
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int peek(struct stack *ptr,int i){
    int index=ptr->top-i+1;
    if(index<0){
        return -1;
    }
    else
    {
       return ptr->arr[index];
     
    }
    
}

int stackbottom(struct stack *ptr){
    if(isEmpty(ptr)){
    return -1;
    }
    else
    {
        return ptr->arr[0];
    }
    
}

int stacktop(struct stack *ptr){
    if(isEmpty(ptr)){
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top];
    }
    
}


void display(struct stack *ptr){
    while (ptr->top!=-1)
    {
        cout<<ptr->arr[ptr->top]<<"\n";
        ptr->top--;
    }
    
}


int main(){
struct stack * sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=6;
sp->top=-1;
sp->arr=(int *)malloc(sp->size*sizeof(int));

push(sp,3);
push(sp,4);
push(sp,6);
push(sp,8);
push(sp,9);
push(sp,10);
for (int  i = 0;i<1 ; i++)
{
   cout<<"the stack bottom is "<<stackbottom(sp)<<"\n";
   cout<<"the stack top is "<<stacktop(sp)<<"\n";
}


display(sp);


    return 0;
}