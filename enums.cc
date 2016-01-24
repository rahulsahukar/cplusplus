#include<iostream>
using namespace std;
int main(){
    enum k{a=1,b=2,c=4};
    k x = k(15000);
    cout<<x<<endl;
}
