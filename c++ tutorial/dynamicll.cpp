#include<iostream>
using namespace std;
struct node{
  
    int data;
    struct node *next;
}; 


struct node *takeinput(struct node *head){
   int data;
   cout<<"enter the elements of linked list\n";
   cin>>data;
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;

 struct node*temp;
 
       if (head==NULL)
       {
          
        head=temp=newnode;
        return head;
        
       }
       else{
           temp->next=newnode;
           temp=newnode;
        return head;
       }
       
       
    }
  
    


void print(struct node*head){

    struct node*ptr=head;
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
    
int main(){
   struct node*head=(struct node*)malloc(sizeof(struct node));
   head=NULL;
int n;
cout<<"enter the value of n";
cin>>n;
for (int i=0;i<n;i++){
   head=takeinput(head);
}

print(head);

    
return 0;
}
