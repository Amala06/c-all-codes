#include<iostream>
using namespace std;
struct node {
    int data ;
    struct node*right;
    struct node*left;
};

struct node* createnode(int data){
  struct node*p=(struct node*)malloc(sizeof(struct node));
p->data=data;
p->left=NULL;
p->right=NULL;  
return p;
}
void display(struct node* p){
    struct node *ptr=p;
    while (p->left!=NULL &&p->right!=NULL)
    {
        cout<<p->data<<" ";
    }
    
}
    
int main(){

// struct node*p=(struct node*)malloc(sizeof(struct node));
// p->data=7;
// p->left=NULL;
// p->right=NULL;

// struct node*p1=(struct node*)malloc(sizeof(struct node));
// p1->data=9;
// p1->left=NULL;
// p1->right=NULL;

// struct node*p2=(struct node*)malloc(sizeof(struct node));
// p2->data=4;
// p2->left=NULL;
// p2->right=NULL;

struct node*p=createnode(3);
struct node *p1=createnode(9);
struct node *p2=createnode(10);
p->left=p1;
p->right=p2;
display(p);

    
return 0;
}