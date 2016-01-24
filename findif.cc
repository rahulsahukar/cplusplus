#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool evenOdd(int x){
    if(x%2==0)
        return true;
    return false;
}
int main(){
    vector<int> v;
    for(int i=0;i<10;i++)
    v.push_back(i);
    vector<int>::iterator i = find_if(v.begin(), v.end(), evenOdd);
    cout<<*i<<endl;
    int x = count(v.begin(), v.end(), evenOdd);
}
