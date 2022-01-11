
#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
     
        return -1;
    }

    else
    {
        return 0;    }
    
}

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return -1;
    }
    else{
        return 0;
    }
}



void push(struct stack *ptr,int value){
    if(isFull(ptr)){
        cout<<"stackoverflow"<<" "<<"cannot push "<<value<<"\n";
    }
    else
    {
       ptr->top++;
ptr->arr[ptr->top]=value;
 
    }
}


    
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        cout<<"stack underflow";
        return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        cout<<val;
        return val;
    }
}

void display(struct stack *ptr){
   while (ptr->top!=-1)
   {
       cout<<ptr->arr[ptr->top]<<"\n";
       ptr->top--;
   }
}

int peek(struct stack *ptr,int i){
    int index=ptr->top-i+1;
    if (index<0)
    {
       return -1;
    }

    else
    {
       
    return ptr->arr[index];
      
    }
    
    
}







int main(){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    
  sp->arr=(int *)malloc(sp->size*sizeof(int));
    

push(sp,6);
push(sp,7);
push(sp,8);
        
push(sp,10);
// push(sp,11);



// cout<<"peek\n";

for (int j= 1; j <=sp->top+1; j++)
{
   
    cout<<"the value at index " <<j<<" is "<<peek(sp,j)<<"\n";
}

display(sp);

    return 0;
}