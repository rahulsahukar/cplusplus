#include<iostream>
#include<string.h>
using namespace std;
class A{
    int len;
    char *str;
    public:
    A(){
        str = new char[100];
        strcpy(str,"");
        len = strlen(str);
    }
    A(char* a):len(strlen(str)),str(a){
    }
    void display(){
        cout<<str<< ", "<<len<<endl;
    }
};
int main(){
    char v[100];
    strcpy(v,"rahul");
    A a(v);
    a.display();
}
