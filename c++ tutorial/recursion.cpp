#include<iostream>
using namespace std;

int fun(int a){
    if (a<=0)
    {
       return -1;
    }
    else
    {
        cout<<a<<" ";
        return fun(a-1);
    }
    
}

int main(){
int a=9;
fun(a) ;

    return 0;
}