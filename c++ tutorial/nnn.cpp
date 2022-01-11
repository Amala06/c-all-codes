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

int addf(struct node *last){
    struct node *p=last;
    int temp=0;
    int i=2;
    while(p->prev!=NULL && i>=0){
        // int k=pow(10,i);
        temp=p->data*pow(10,i);
        i--;
        cout<<temp;
  
    }
      return temp;
}






int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
 struct node *sec=(struct node*)malloc(sizeof(struct node));
struct node *third=(struct node*)malloc(sizeof(struct node));
    
    // head->data=2;
    head->next=sec;
    head->prev=NULL;

    // sec->data=4;
    sec->next=third;
     sec->prev=head;

    // third->data=3;
    third->next=NULL;
    third->prev=sec;

struct node *head2=(struct node*)malloc(sizeof(struct node));
struct node *sec2=(struct node*)malloc(sizeof(struct node));
struct node *third3=(struct node*)malloc(sizeof(struct node));

    // head2->data=2;
    head2->next=sec2;
    head2->prev=NULL;

    // sec2->data=4;
    sec2->next=third3;
    sec2->prev=head2;


    // third3->data=3;
    third3->next=NULL;
    third3->prev=sec2;





cout<<"enter data of LL1"<<"\n";
input(head);
cout<<"enter data of LL2"<<"\n";
input(head2);

addf(third);

do
{
    /* code */
} while (/* condition */);


    return 0;
}
