#include<iostream>
using namespace std;
static int a=10;
static void fun();
int main(){
    fun();
}
int x = 100;
static void fun(){
    cout<<x<<a<<endl;
}
