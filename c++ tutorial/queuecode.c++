#include<iostream>
using namespace std;
 struct queue{
     int f;
     int r;
     int size;
     int *arr;
 };

 int isempty(struct queue *q){
     if((q->r==-1)){
         return 1;
     }
     else
     {
         return 0;
     }
     
 }   
 int isfull(struct queue *q){
     if(q->r==q->size-1){
         return 1;
     }
     else
     {
         return 0;
     }
     
 }  

 void enqueue(struct queue *q,int data){
     if(isfull(q)){
         cout<<"stack overflow";
     }
     else
     {
         q->r++;
         q->arr[q->r]=data;
     }
     
 }

int dequeue(struct queue *q){
     int temp;
     if(isempty(q)){
         cout<<"stack underflow";
         return -1;
     }
   
   
     else
     {
        
         q->f++;
          temp=q->arr[q->f];
         cout<<temp<<"\n";
       
     
     
       return  temp;
     }
 }
 void display(struct queue*q){
     for (int i = 0; i < q->size; i++)
     {
         cout<<q->arr[i]<<" ";
     }
     cout<<"\n";
     
 }
 
//  void dis(struct queue*q){
//      struct queue*v=q;
     
//      while(q->v!=q->size-1){
//          cout<<q->arr[q->v]<<" ";
//          q->v++;
//      }
//      cout<<"\n";
//  }
    
int main(){
struct queue*q=(struct queue*)malloc(sizeof(struct queue));
q->f=-1;
q->r=-1;
q->size=5;
q->arr=(int*)malloc(q->size*sizeof(int));
enqueue(q,2);
enqueue(q,3);
enqueue(q,5);
enqueue(q,6);
enqueue(q,7);  
display(q);
dequeue(q);
dequeue(q);

display(q);
// dis(q);  
return 0;
}