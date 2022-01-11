#include <iostream>
using namespace std;
struct stack{
int size;
int top;
int *arr;
};

int isEmpty(struct stack *ptr){
    if (ptr->top==-1)
    {
        
       return 1;
    }
    else
    {
        return 0;
    }   
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }

    else{
        return 0;
    }
}


int main(){


struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
   
    s->arr = (int *)malloc(s->size * sizeof(int));

for (int  i = 0; i < s->size; i++)
{
   cin>>s->arr[i];
   s->top++;
}




if(isEmpty(s)){
    cout<<"the stack is empty"<<"\n";
}
else{
    cout<<"the stack is not empty"<<"\n";
}

if(isFull(s)){
    cout<<"stack is full"<<"\n";
}
else{
    cout<<"stack is not full"<<"\n";
}

}


for (int i = 0; i < s->size; i++)
{
    cout<<s->arr[i]<<"\n";
}

    return 0;
}