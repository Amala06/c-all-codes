#include<iostream>
using namespace std;

struct node{
int data;
struct node*next;
};

void display(struct node*head){
    struct node *ptr=head;
    do
    {
        cout<<ptr->data<<"\n";
       ptr=ptr->next;
    } while (ptr->next != head);
    
    cout<<ptr->data<<"\n";
}

struct node *insertatbegin(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next !=head){
        p=p->next;
    }
p->next=ptr;
ptr->next=head;
head=ptr;
return head;
}


int main(){
struct node *head ;
struct node *sec ;
struct node *third ;
struct node *fourth;

head=(struct node*)malloc(sizeof(struct node));
sec=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

head->data=7;
head->next=sec;

sec->data=8;
sec->next=third;

third->data=9;
third->next=fourth;

fourth->data=10;
fourth->next=head;


head=insertatbegin(head,80);
display(head);
    return 0;
}