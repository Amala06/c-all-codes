#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void displayincorrectorder(struct node* head){
    struct node *p=head;
    while(p->next!=NULL){
        cout<<p->data<<"\n";
        p=p->next;
    }
    cout<<p->data<<"\n";

}

void displayinreversetorder(struct node* ptr){
    struct node *p= ptr;
  
    while(p->prev!=NULL){
        cout<<p->data<<"\n";
        p=p->prev;
    }
      cout<<p->data<<"\n";

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

head->data=5;
head->prev=NULL;
head->next=sec;

sec->data=6;
sec->prev=head;
sec->next=third;

third->data=7;
third->prev=sec;
third->next=fourth;

fourth->data=8;
fourth->prev=third;
fourth->next=NULL;
cout<<"In correct order"<<"\n";
displayincorrectorder(head);
cout<<"In reverse order"<<"\n";
displayinreversetorder(fourth);
    return 0;
}
