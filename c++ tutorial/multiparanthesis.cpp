#include<iostream>
using namespace std;

struct stack {
    int size;
    int top;
    char *arr;
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

void push(struct stack *ptr,char val){
    if(isFull(ptr)){
        cout<<"stack overflow";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;

    }
    
}

int pop(struct stack *ptr){
    if (isEmpty(ptr))
    {
return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    
    
}

int match(char a,char b){
    if (a=='{' && b=='}'){
        return 1;
    }
     if (a=='[' && b==']'){
        return 1;
    }
     if (a=='(' && b==')'){
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}



int multiparanthesis(char* exp){
struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
sp->top=-1;
sp->size=100;
sp->arr=(char*)malloc(sp->size*sizeof(char));
char poped_ch;

for (int i = 0; exp[i]!='\0'; i++)
{
 if (exp[i]=='{'||exp[i]=='['||exp[i]=='(')
 {
    push(sp,exp[i]);
 }

 else if(exp[i]=='}'||exp[i]==']'||exp[i]==')'){
     if (isEmpty(sp))
     {
         return -1;
     }
     else
     {
       poped_ch= pop(sp);
       if (!match(poped_ch,exp[i]))
       {
          return 0;
       }
       
     }
     
     
 }
 
 
 
}
if(isEmpty(sp)){
     return 1;
 }

 else
 {
     return 0;
 }

  
}

    
    
int main(){
char * exp="{5+8*(9+0)}";
if (multiparanthesis(exp))
{
    cout<<"its balanced";
}
else
{
    cout<<"its not  balanced"; 
}



    
return 0;
}