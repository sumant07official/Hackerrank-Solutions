#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    int n,q;
    int element;
    int arr_s; 
    int raw,colomn;

    cin >> n >> q;
    
    int** array = new int* [n]; //using pointer to pointer object type

    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        int* b=new int [a];
        for(int j=0;j<a;j++) {
            int e;
            cin>>e;
            b[j]=e;
        }
        *(array+i)=b;
    }


    //output
    string s;
    for(int j=0; j<q;j++){
        cin >> raw >> colomn;
        s+= to_string(array[raw][colomn])+"\n";
    }
    cout<<s;
    return 0;
}