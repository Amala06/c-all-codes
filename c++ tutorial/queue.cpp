#include<iostream>
using namespace std;
struct queue{
int f;
int r;
int size;
int *arr;

};

struct queue* enqueue(struct queue*q,int val){

q->r++;
q->arr[q->r]=val;
return q;


}

void display(struct queue*q){

    while(q->f!=q->size-1){
        cout<<q->arr[q->f]<<" ";
        q->f++;
    }
    
}

    

int main(){

struct queue* q=(struct queue*)malloc(sizeof(struct queue));
q->f=-1;
q->r=-1;
q->arr=(int *)malloc(q->size*sizeof(int));
q->size=5;
enqueue(q,7);
enqueue(q,5);
enqueue(q,6);
enqueue(q,9);
// enqueue(q,10);
display(q);

return 0;
}
