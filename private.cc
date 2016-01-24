#include<iostream>
using namespace std;
class A{
    int a;
    char b[1000];
    public:
};
class B: public A{
    public:
        B(){}
};

int main(){
    A a;
    B b;
    cout<<b.a<<endl;
    cout<<"A = " <<sizeof(A)<<", B = "<<sizeof(B)<<endl;
}
