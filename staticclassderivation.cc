#include<iostream>
using namespace std;
class A{
    static A *a;
    protected:
    A(){
        x = 20;
    }
    public:
    int x;
    static A* getA(){
        if(!a){
            a = new A();
            cout<<"Creating new"<<endl;
        }
        else cout<<"returning old one"<<endl;
        return a;
    }
};
class B: public A{
    public:
    B(){
        cout<<"B's constructor"<<endl;
    }
};
A* A::a = NULL;
int main(){
    //B b;
    A *a = A::getA();
    A *a1 = A::getA();
    cout<<a->x<<endl;
}
