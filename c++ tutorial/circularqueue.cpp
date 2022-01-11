#include<iostream>
using namespace std;
struct queue{
    int r;
    int f;
    int size;
    int *arr;
}; 

int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isfull(struct queue *q){
    if (((q->r+1)%q->size)==q->f)
    {
        return 1;
    }
    else{
    
        return 0;
}
    return 0;
    
    
}

void enqueue(struct queue *q,int data){
    if (isfull(q))
    {
        /* code */cout<<"stack overflow";
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=data;
        cout<<"enqueue value is : "<<data<<"\n";
    }
    
    
}

int dequeue(struct queue *q){
    int temp=-1;
    if(isempty(q)){
        cout<<"queu is full";
        return 1;
    }
    else
    {
        q->f=(q->f+1)%q->size;
        temp=q->arr[q->f];
        cout<<"dequeue value is : "<<temp<<"\n";
        
    }
    return temp;
    
}

void display(struct queue *q){

}

    
int main(){
struct queue *q=(struct queue *)malloc(sizeof(struct queue));
q->f=0;
q->r=0;
q->size=4;
q->arr=(int*)malloc(q->size*sizeof(int));
enqueue(q,4);
enqueue(q,5);
enqueue(q,6);
// enqueue(q,4); 
dequeue(q);
dequeue(q);
enqueue(q,2);
enqueue(q,78);   
return 0;
}