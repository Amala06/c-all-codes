#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
    //  struct node*f;
};  

void enqueue(struct node*r,struct node*f,int data){
    struct node*n=(struct node*)malloc(sizeof(struct node));
   
if(n==NULL){
    cout<<"queue overflow";
}

else
{ n->data=data;
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
    struct node*p=f;
    while (p!=NULL)
    {
    cout<<"the element enqueued is : "<<p->data<<"\n";
   p= p->next++;
    }
    
}
int main(){
struct node*f=(struct node*)malloc(sizeof(struct node));
struct node*r=(struct node*)malloc(sizeof(struct node));
f=NULL;
r=NULL;
enqueue(r,f,4);
enqueue(r,f,5);  
enqueue(r,f,6);
enqueue(r,f,7);
enqueue(r,f,8);
display(f);
return 0;
}