#include <stdio.h>
// to use abs() funtion
#include <cstdlib>
using namespace std;

void update(int *a,int *b) {
    // sum
    int a1=*a+*b;
    // absolute of difference
    int b1=abs(*a-*b);
    *a=a1;
    *b=b1;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
