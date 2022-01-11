#include<iostream>
using namespace std;

int main()
{
  int num,pos,size;
  int a[8];
  cout<<"enter the size of the array"<<endl;
  cin>>size;
  
  cout<<"enter the value of the array"<<endl;
  for(int i=0;i<size;i++){
    cin>>a[i];
  }
  cout<<"enter the position you want to change the element of array"<<endl;
  cin>>pos;
  cout<<"enter the num of the array"<<endl;
  cin>>num;

  for(int i=size-1;i>=pos-1;i--){

   
    a[i+1]=a[i];
  }
  a[pos-1]=num;
         size++;

  

         // else we can also use the below method if order is not mattered or concerned
// for (int i = 0; i < size-1; i++)
// {
// a[size]=a[pos-1];
// }
// a[pos-1]=num;
// size++;




cout<<"the arrays are as follows:"<<endl;
for (int i = 0; i < size; i++)
{
  cout<<a[i]<<" ";
}






  return 0;  
} 

