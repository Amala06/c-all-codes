#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
   
}*top=NULL;

int isEmpty(struct node *top){
    if (top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }    
}

int isFull(struct node *top){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    if (p==NULL)
    {
        return -1;
    }
    else
    {
        return 0;
    }
    
}


struct node* push(int data){
    if(isFull(top)){
        cout<<"stack overflow";
       return 0;
    }
    else
    {
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=top;
        top=ptr;
        return top;
        }
    
}

void display(struct node* top){
    // struct node *temp=(struct node*)malloc(sizeof(struct node));
    // temp=top;
    while (top!=NULL)
    {
        cout<<top->data<<" ";
        top=top->next;
    }
    cout<<"\n";
}

int pop(struct node*ptr){
    if (isEmpty(ptr))
    {
       cout<<"stack unerflow ";
      return 0;
    }
 else{   
    int data;
    data=ptr->data;
    ptr= ptr->next;
     while (ptr!=NULL)
    {  cout<<ptr->data<<" \n";
    ptr=ptr->next;
    }

  

   return data;
 }

}

int  peek(int pos){

struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr=top;
for(int i=0;(i<pos-1 && ptr != NULL);i++){
ptr=ptr->next;
}
if(ptr!=NULL){
    return ptr->data;
}
else
{
    return -1;
}

}








int main(){

push(9);
push(10);
push(6);
display(top);
int head=pop(top);
cout<<"the head is "<<head<<"\n";
// display(top);
int lol=peek(2);
cout<<lol;

    return 0;
}