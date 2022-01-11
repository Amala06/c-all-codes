#include <bits/stdc++.h>

using namespace std;



int main()
{
 long  int a;
 long int minimum=INT16_MAX;
 long int maximum=-1;
  cin>>a;
 long  int least=0,weast=0;
 long  int arr[a];
  for (int i=0; i<a; i++) {
  cin>>arr[i];
  }
  if(a>0){
    for (int i=0; i<a; i++) {
        if(arr[i]<minimum){
            least++;
            minimum=arr[i];
           
        }
    }
  }
  if(a>0){  
     for (int i=0; i<a; i++) {
        if(arr[i]>maximum){
            weast++;
            maximum=arr[i];
           
        }
    }
  }
 
    cout<<weast-1<<" "<<least-1;

    return 0;
}