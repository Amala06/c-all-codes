#include<iostream>
using namespace std;

void selectionsort(int a[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;

        }
        
    }
    
}   
    
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<" the unsorted array : \n";
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

selectionsort(arr,n);
cout<<" the sorted array : \n";
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
    
return 0;
}