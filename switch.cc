#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch(n){
    case 1: cout<<"one"<<endl;break;
    case 2: cout<<"two"<<endl;break;
    case 3: cout<<"three"<<endl;break;
    case 4: cout<<"four"<<endl;break;
    case 'a': cout<<"letter a"<<endl;break;
    default: cout<<"something else"<<endl;break;
    }
}
