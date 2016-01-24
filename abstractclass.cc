#include<iostream>
using namespace std;

class A{
    public:
    virtual ~A() = 0;
};
A::~A(){}
class B: public A{
    public:
    ~B(){}
};
int main(){
    B a;
}
