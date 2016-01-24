#include<iostream>
#include<stdlib.h>
#include<time.h>
#include"SelectionSort.h"
#include"QuickSort.h"
#include"InsertionSort.h"
#include"MergeSort.h"
using namespace std;

int main(){
    srand (time(NULL));

    int a[100], n;
    cin>>n;
    for(int i=0;i<n;i++)
        a[i] = rand() % 10000;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<< "1. Selection Sort\n2. Insertion Sort\n3. Merge Sort\n4. QuickSort\n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1: SelectionSort(a,n);
            break;
        case 2: InsertionSort(a,n);
            break;
        case 3: MergeSort(a,0,n-1);
            break;
        case 4: QuickSort(a,0,n-1);
            break;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
