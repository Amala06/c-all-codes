#include<iostream>
using namespace std;

void insertion(int a[],int n){
    int key;
    int j=0;
    for (int  i = 1; i <n; i++)
    {
     key=a[i];
     j=i-1;

     while (j>=0 && a[j]>key)
     {
         a[j+1]=a[j];
         j=j-1;
     }
     
   a[j+1]=key;
    }
 
    
}    
    
int main(){
int size,key;
cin>>size;
int arr[size];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}

cout<<"before sorting : "<<"\n";
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}

insertion(arr,size);
cout<<"after sorting : "<<"\n";
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}


    
return 0;
}