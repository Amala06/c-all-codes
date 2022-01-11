
#include<iostream>
using namespace std;

int main()
{
    int a[8];
    int size,pos,temp;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter the value of the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    cout<<"enter the position to be delete "<<endl;
    cin>>pos;
    for (int  i = 0; i < size; i++)
    {
        temp=a[pos-1];
      
        
    }
  for (int i = pos-1 ; i < size-1; i++)
        {
            a[i]=a[i+1];



        }
        
    cout<<"the deleted value at pos"<<" "<<pos <<" "<<"is: "<<temp<<endl;
    for (int i = 0; i < size -1; i++)
    {
       cout<<a[i]<<" ";
    }
    

    
    
    
    
    return 0;
}
