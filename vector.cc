#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    for(int i=0;i<10;i++)
        a.push_back(i);
    for(int i=0;i<11;i++)
        cout<<a.at(i)<<"  ";
    cout<<endl;
}
   
