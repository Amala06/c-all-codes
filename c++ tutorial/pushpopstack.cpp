#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
if(ptr->top==-1){
//    cout<<"1";
   return 1;
}
else
{
    // cout<<"0" ;
    return 0;
}
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
    //    cout<<"1";
       return 1;
    }
    else
    {
    //    cout<<"0";
       return 0;
    }
    
}

void push(struct stack *ptr,int value){
if(isFull(ptr)){
    cout<<"cannot push" <<" "<<value<<"stack overflow"<<"\n";
}
else
{
 ptr->top++;
    ptr->arr[ptr->top]=value;
}


    
}

int pop(struct stack *ptr){
if (isEmpty(ptr))
{
   cout<<"stack underflow";
   return -1;
}

else
{
   int val= ptr->arr[ptr->top];
  ptr->top= ptr->top--;
cout<<val;
   return val;
//    return ptr;

}


}



void display(struct stack *ptr){
   
for (int  i = 0; i < ptr->size; i++)
{
   cout<<ptr->arr[i]<<" \n";
   ptr->top++;
}

}

void dis(struct stack *ptr){
   while (ptr->top!=-1)
   {cout<<ptr->arr[ptr->top]<<" ";
   ptr->top--;
   }
   
}

// int peek(struct stack *ptr,int pos){
//    int value;
//   while (ptr->top!=pos-1)
//   {
//    int value=ptr->arr[ptr->top];
//     ptr->top--;
//   }
//   return value;
   
// }




int main(){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));

isEmpty(sp);
isFull(sp);
push(sp,80);
push(sp,81);
push(sp,67);
push(sp,78);
push(sp,68);



display(sp);
cout<<"\n";


// sp=pop(sp);
cout<<"without pop"<<"\n";
display(sp);
cout<<"with pop \n";
pop(sp);
display(sp);
isEmpty(sp);
isFull(sp);
dis(sp);




    return 0;
}