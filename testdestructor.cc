#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class A
{
    char *a;
    public: 
    A()
    {
        a = new char[100];
        strcpy(a,"rahul");
    }
    void display()
    {
        cout<<((a==NULL)?"NULL":a)<<endl;
    }
    ~A()
    {
        delete[] a;
        try
        {
            throw "asdsad";
        }
        catch(const char* str)
        {
             cout<<"Destructor: Caught Exception"<<endl;
        }
    }
};

int main()
{
    A aobj;
    aobj.display();
}
