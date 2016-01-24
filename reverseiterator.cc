#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<10;i++) v.push_back(i);
    vector<int>::reverse_iterator ri;
    for(ri=v.rbegin();ri!=v.rend();ri++) cout<<*ri<<endl;
}
