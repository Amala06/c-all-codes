#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
    
    
int main(){

// vector <int> v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// for (int i = 0; i < v.size(); i++)
// {
//     v.push_back(v[i]);
// }
// cout<<v.size()<<" "<<v.capacity();
    

 
    
    int arr[6]={2,4,3,1,7,11};

    int add;
    for (int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }
     for (int i = 0; i < 6; i++)
    {
       for (int j = 1; j < 6; j++)
       {
           add=arr[i]+arr[j];
           if(add==10){
               cout<<arr[i]<<" "<<arr[j];
           }
       }
       
    }

    
return 0;
}