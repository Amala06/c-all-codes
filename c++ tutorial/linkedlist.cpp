
#include<iostream>
using namespace std;
struct node*f=NULL;
struct node*r=NULL;
struct node{
    int data;
    struct node*next;
    //  struct node*f;
};  

void enqueue(int data){
    struct node*n=(struct node*)malloc(sizeof(struct node));
   
if(n==NULL){
    cout<<"queue overflow";
}

else
{   n->data=data;
    n->next=NULL;
    if(f==NULL){
        f=r=n;
    }

else
{
    r->next=n;
    r=n;
}
}

}

void display(struct node*f){
    // struct node*p=(struct node*)malloc(sizeof(struct node));
    struct node*p=f;
    while (p!=NULL)
    {
    cout<<"the element enqueued/availble in the list is : "<<p->data<<"\n";
   p= p->next;
    }
    free(p);
}

int dequeue(){
    int temp=-1;
    if(f==NULL){
        cout<<"queue emoty";
        
    }
    else{
       temp=f->data;
       f=f->next;
    }
    cout<<"teh element dequeue is temp : "<<temp<<"\n";
    return temp;
}
int main(){
// struct node*f=(struct node*)malloc(sizeof(struct node));
// struct node*r=(struct node*)malloc(sizeof(struct node));
dequeue();
enqueue(4);
enqueue(5);  
enqueue(6);
enqueue(7);
enqueue(8);
display(f);

dequeue();
dequeue();


display(f);
return 0;
}