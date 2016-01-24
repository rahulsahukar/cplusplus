#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){
    vector<int> v(10);
    for(int i=0;i<10;i++)
        v.push_back(i);
    vector<int>::const_iterator i;
    ostream_iterator<int> ostr(cout, "|");
    copy(v.begin(),v.end(),ostr);

    istream_iterator<int> ii(v);
    int x = *ii++;
    int y = *ii++;
    cout<<x*y<<endl;

}
