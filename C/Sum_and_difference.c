#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ int A,B=0;
  float N,M=0;
	scanf("%d %d", &A, &B);
  scanf("%f %f", &N, &M);
  int a=A+B;
  int b=A-B;

  float n=N+M;
  float m=N-M;
  printf("%d %d \n",a,b);
  
  printf("%0.1f %0.1f",n,m);  
    return 0;
}
