#include <iostream>
using namespace std;

struct node {
    int data;
    struct node * next;

};
void display(struct node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"\n";
        ptr=ptr->next;
    }
}
struct node * deleteinbegin(struct node*head){
struct node*p=head;
head=head->next;
free(p);
return head;
}

struct node *deleteatindex(struct node*head,int index){
struct node*p=head;
struct node*q=head->next;

for (int i = 0; i < index-1; i++)
{
    p=p->next;
    q=q->next;
}

p->next=q->next;
free(q);

    return head;
}


struct node * deleteatlast(struct node*head){
    struct node*p=head;
    struct node*q=head->next;

 while(q->next != NULL){
     p=p->next;
     q=q->next;
 }

 p->next=NULL;
 free(q);
 return head;
    
}

struct node* deleteatvalue(struct node*head,int value){
    struct node* p=head;
    struct node* q=head->next;
    

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

head->data=9;
head->next=sec;

sec->data=10;
sec->next=third;

third->data=11;
third->next=fourth;

fourth->data=12;
fourth->next=NULL;

// head=deleteatindex(head,2);
// head=deleteinbegin(head);

head=deleteatlast(head);
display(head);

return 0;

}