#include<iostream>
using namespace std;

int main()
{

int a=10;
int *p=&a;
cout<<"This is the adress of a"<<" "<<p<<" " <<"and address of p is "<<&p<<endl;
cout<<"This is the adress of a"<<" "<<&a<<endl;

cout<<"this is the value of a"<<" "<<a<<endl;
cout<<"this is the value of a by p "<<" "<<*p<<endl;



    return 0;
}
