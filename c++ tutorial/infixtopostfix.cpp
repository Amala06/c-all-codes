#include<iostream>
#include <cstring>
// #include<bits/stdc++.h>
using namespace std;
struct stack{
int top;
int size;
char *arr;

};

int isFull(struct stack *ptr){
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    
    }
    
}

int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1){
        return 1;
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

char pop (struct stack *ptr){
    if(isEmpty(ptr)){
        cout<<"stack underflow";
        return 1;
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;

    }
    
}

int precedence(char ep){
    if(ep=='*'|| ep=='/'){
        return 3;
    }
    else if(ep=='+'||ep=='-'){
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isOperator(char ep){
    if (ep=='+'||ep=='-'||ep=='*'||ep=='/')
    {
        return 1;
    }
    else{ 
        return 0;
    }
}

char stacktop(struct stack *ptr){
    if(isEmpty(ptr)){
        return 1;
    }
    else
    {
        return ptr->arr[ptr->top];
    }
    
}

char * infixTOpostfix(string s){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=100;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    int i=0;
    int j=0;
    char *postfix=(char*)malloc((strlen(s)+1))*sizeof(char));
    while (s[i]!='\0')
    {
       if (!isOperator(s[i]))
    {
       postfix[j]=s[i];
       i++;
       j++;
    }
    else if (precendence(s[i])>stacktop(sp))
    {
       push(sp,s[i]);
       i++;
    }
    else
    {
       postfix(j)= pop(sp);
       j++;
    }
    
    

    }

    while (!isEmpty(sp))
    {
       postfix[j]=pop(sp);
       j++;
    }
    postfix[j]='\0';
    return postfix;
}


    
int main(){
string s="a+b/c*d";
  cout<<infixTOpostfix(s);  
return 0;
}