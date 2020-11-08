#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>> a >> b;
    int len1,len2;
    len1=a.size();
    len2=b.size();
    cout<< len1 <<" "<< len2 << endl;
    cout<< a+b << endl;
    string c,d;
    c=b[0]+a.substr(1,len1);
    d=a[0]+b.substr(1,len2);
    cout<< c <<" " << d;
    return 0;
}