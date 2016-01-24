#include<iostream>
#include<exception>
using namespace std;
void fun(){
    cout<<"sdfsfsdfsfdsf"<<endl;
}
void call1() throw(int){
    throw "asdsad";
}
int main(){
set_terminate(fun);
    try{
    	call1();
    }
    catch(int x){
        cout<<x<<endl;
    }
}
