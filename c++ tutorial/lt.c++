#include<iostream>
#include<vector>
using namespace std;

    
    
int main(){
    char arr[3];
    for (int i = 0; i < 2; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    // char *p=&arr[0];
    int st=0;
    while (st<3)
    {
        if(arr[st]=='I'){
            sum+=1;
        }
        else if (arr[st]=='X')
        {
            sum+=10;
        }
        st++;
        
    }
    cout<<sum;
        
return 0;
}