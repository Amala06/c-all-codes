#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
  
}* top=NULL;

int isEmpty(struct node* top){
    if (top==NULL)
    {
        return -1;
    }
    else
    {
        return 0;
    }
    
    
}

int isFull(struct node *ptr){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
return -1;
    }
    else
    {
        return 0;
    }
    
}

struct node *push(int x){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    // struct node*temp=ptr;
    if(isFull(top)){
        cout<<"stack overflow";
        return 0;
    }
    else
    {
        
        ptr->data=x;
        ptr->next=NULL;
    ptr->next=top;
        top=ptr;
        // cout<<"ja";
        return top;

    }
    
}

struct node* pop(){
    struct node* p=(node*)malloc(sizeof(struct node));
    p->data=top->data;
    
    cout<<p->data;
    top=top->next;
    return top;
}







void display(struct node* top){
    struct node* temp =top;

    while (temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;

    }
    
}


int main(){



push(8);

push(7);
push (6);


display(top);
pop();
display(top);
    return 0;
}
