#include<iostream>
using namespace std;

struct node{
    int data;
   struct node *next;
    
};

void display(struct node*ptr){
    while(ptr != NULL){
        cout<<ptr->data<<"\n";
        ptr=ptr->next;
    }


}

struct node *insertatbegin(struct node* head,int data){

    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    head=ptr;
  
    return ptr;
}

struct node *insertatbetween(struct node* head,int data ,int index){
struct node  *ptr=(struct node*)malloc(sizeof(struct node));
struct node *p=head;
int i=0;
while(i != index-1){
    p=p->next;
    i++;
}
ptr->next=p->next;
ptr->data=data;
p->next=ptr;

return ptr;


}


struct node *insertatend(struct node *head,int data){
struct node *ptr=(struct node*)malloc(sizeof(struct node));
struct node *p=head;
while(p->next !=NULL){ 
 p=p->next;
}
  ptr->next=p->next;
    ptr->data=data;
    p->next=ptr;

return head;
}


struct node *afterprev(struct node*head,struct node*prevnode,int data){

    struct node*ptr=(struct node*)malloc(sizeof(struct node));
   ptr->next= prevnode->next;
    prevnode->next=ptr;
    ptr->data=data;
    return head;
}



int main(){

struct node *head;
struct node *sec;
struct node *third;
struct node *fourth;

head=(struct node*)malloc(sizeof(struct node));
sec=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

head->data=7;
head->next=sec;

sec->data=6;
sec->next=third;

third->data=5;
third->next=fourth;

fourth->data=4;
fourth->next=NULL;
// display(head);
head=insertatbegin(head,3);

// insertatbetween(head,56,1);

// insertatend(head,78);
// afterprev(head,sec,67);

display(head);
return 0;

}