#include <iostream>
#include <stdio.h>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int max1,max2,max3;
    if (a>b){
        max1=a;
    }
    else{
        max1=b;
    }
    if (c>d){
        max2=c;
    }
    else{
        max2=d;
    }
    if (max1>max2){
        max3=max1;
    }
    else{
        max3=max2;
    }
    
    return max3;
}




int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

