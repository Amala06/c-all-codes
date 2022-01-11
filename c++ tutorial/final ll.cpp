
#include <iostream>
#include<math.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};


void input(struct node*head){
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr=head;
    while (ptr!=NULL)
    {
       cin>>ptr->data;
       ptr=ptr->next;
    }
}

class A {
   public:

    int addf(struct node *last){
    struct node *p=last;
    int temp=0,wemp=0;
    int i=2;
    do{
        // int k=pow(10,i);
        temp=temp+p->data*pow(10,i);
        
       
        i--;
        p=p->prev;
  
    }while(p->prev!=NULL && i>=0);
    
    temp=temp+p->data;
    cout<<temp<<"\n";
    return temp;
}

};


void push(struct node *head,int a){
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr=head;



for(int i=0;i<a;i++){
    
    if(i==a-1){
        cin>>ptr->data;
        ptr->next=NULL;
        break;
    }
    
    else{
    
    cin>>ptr->data;
    ptr=ptr->next;
}
}
}






int main(){
    
    int a,b;
    cin>>a;
struct node *head=(struct node*)malloc(sizeof(struct node));
struct node *sec=(struct node*)malloc(sizeof(struct node));
struct node *third=(struct node*)malloc(sizeof(struct node));
    
    head->next=sec;
    head->prev=NULL;

    sec->next=third;
     sec->prev=head;

    third->next=NULL;
    third->prev=sec;

struct node *head2  = (struct node*)malloc(sizeof(struct node));
struct node *sec2   = (struct node*)malloc(sizeof(struct node));
struct node *third3 = (struct node*)malloc(sizeof(struct node));

    head2->next=sec2;
    head2->prev=NULL;

    sec2->next=third3;
    sec2->prev=head2;

    third3->next=NULL;
    third3->prev=sec2;

// cout<<"enter data of LL1"<<"\n";
// input(head);
// cout<<"enter data of LL2"<<"\n";
// input(head2);

// A a;

// int ans=a.addf(third)+a.addf(third3);
// cout<<ans<<"\n";

push(head,a);

 return 0;
 
}
