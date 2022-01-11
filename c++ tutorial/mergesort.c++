

#include <iostream>

using namespace std;
void merge(int arr[],int l,int mid ,int r){
    int i=l;
    int j=mid+1;
    int k=l;
    int size=r+1;
    int temp[size];
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;i++;
        }
        else
        {
             temp[k]=arr[j];
            k++;j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
            k++;i++;
    }
    while(j<=r){
        temp[k]=arr[j];
            k++;j++;
    }
    for(int s=l;s<size;s++){
        arr[s]=temp[s];
    }
    
}

void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main()
{
   int size;
   cin>>size;
   int arr[size];
   for(int i=0;i<size;i++){
       cin>>arr[i];
   }
   cout<<"array before sorting\n";
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   }
   cout<<"\n";
   mergesort(arr,0,(size-1));
   
     cout<<"array after sorting\n";
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   }
   
    return 0;
}
