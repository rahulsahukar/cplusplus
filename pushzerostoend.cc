#include<iostream>
using namespace std;
void pushZeroesToEnd(int a[], int n){
    int indx = n-1;
    for( int i=indx;i>=0;i--){
        if(a[i]>0){
            int j=i-1;
            for(;j>=0;j--){
                if(a[j]>0) continue;
                else break;
            }
            if(j>=0){
                int temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    pushZeroesToEnd(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
