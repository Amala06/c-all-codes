#include<iostream>
using namespace std;
 void bubblesort(int a[],int size){
     for (int i = 0; i <size; i++)
     {
         for (int j = 0; j < size-i-1; j++)
         {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
         }
         
     }
     
 }   
    
int main(){
int size;
cin>>size;
int arr[size];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}

cout<<"before sortimg : \n";
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<"\n";
bubblesort(arr,size);


cout<<"after sortimg : \n";
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}


    
return 0;
}