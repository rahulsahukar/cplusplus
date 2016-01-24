#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,char> m;
    m[1]='a';
    m[2]='b';
    m[1]='c';
    m.insert(pair<int,char>(3,'d'));
    for(map<int,char>::iterator it=m.begin();it!=m.end();it++)
    {
       cout<<it->first<<"  "<<it->second<<endl;
    }
    map<int,char>::iterator it=m.find(5);
    if(it==m.end())
        cout<<it->second<<endl;
}
