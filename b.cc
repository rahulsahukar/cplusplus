#include<iostream>
using namespace std;
class A{
    A(){}
    public:
    static A *a;
    static A* getSingleton(){
        if(a==NULL)
            a = new A();
        return a;
    }
};
A* A::a = NULL;
int main(){
    A *a = A::getSingleton();
}
