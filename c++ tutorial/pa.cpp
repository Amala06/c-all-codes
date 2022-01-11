#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
int *p;
p=a;

for (int i = 0; i < n; i++)
{
   cin>>a[i];
}
cout<<"the elements of the array are:"<<endl;
for (int i = 0; i < n; i++)
{
   
cout<<*(p+i)<<endl;
   
}
  return 0;  
} 
