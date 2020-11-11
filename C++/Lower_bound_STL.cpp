#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    //first vector N integers
    vector<int> v;
    int N,x;
    cin >> N;

    for(int i=0;i<N;i++){
        cin>>x;
        v.push_back(x);
    } 

    
    int Q, y;
    cin >> Q;

    for (int i=0; i<Q; i++){
       cin >> y;
       
       vector<int>::iterator low = lower_bound(v.begin(), v.end(), y);
       if (v[low - v.begin()] == y)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
    }
    
    
    
    return 0;
}
