#include <iostream>
using namespace std;
class A{
   
   int a=15;
    public:
    int fun(){
        return a;
    }
    void run(){
        cout<<"value of a is :"<<a;
    }
   };
class B :public A{
    int b=2;
    public:
    void fun1(){
        cout<<"value of B is :"<<b;
    }
};
int main()
{
    B b1;
    b1.fun();
    b1.run();
      b1.fun1();

    return 0;
}
