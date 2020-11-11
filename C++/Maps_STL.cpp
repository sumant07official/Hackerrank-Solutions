#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    
    int Q,type;
    cin >>Q;
    
    map<string,int> m;
    string x;
    
    for (int i=0; i<Q; i++){
                
        cin >> type >> x;
        int y;
        if (type==1){
            cin>>y;
            m[x]+=y;
            }
        else if (type==2){
            m.erase(x);
            }
        else if (type==3){
            cout << m[x] << endl;
        }
    }
    
    
    return 0;
}



