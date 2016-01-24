#include<iostream>
#include"A.h"
using namespace std;
A::A(){
    x = 10;
}
A::A(int a){
    x = a;
}
void A::display(){
    cout<<x<<endl;
}
