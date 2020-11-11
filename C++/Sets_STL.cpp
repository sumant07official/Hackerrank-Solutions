#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    
    int Q;
    cin >>Q;
    
    set<int> s;
    for (int i=0;i<Q;i++){
        int x,y;
        cin >> x >> y;
        if (x==1){
            s.insert(y);
            }
        else if (x==2){
            s.erase(y);
            }
        else if (x==3){
            cout << (s.find(y) == s.end() ? "No" : "Yes") << endl;
        }
    }
    
    
    return 0;
}



