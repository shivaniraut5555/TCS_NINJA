#include <stdio.h>
void fibo(int n)
{
  int i,fib[20],a=0,b=0,e=0,o=0;
  for(i=0;i<n;i++)
  {
    if(i==0 || i == 1)
    fib[i]=1;
    else
    {
      a=fib[i-2];
      b=fib[i-1];
      fib[i]=a+b;
    }
  }
 for(i=0;i<n;i++)
 {
 printf("%d  ",fib[i]);
 if(fib[i]%2==0)
 e++;
 else 
 o++;
 }
 printf("\n%d",e);
printf("\n%d\n",o);
}
int main(void) {
  int n;
  scanf("%d",&n);
  fibo(n);
}
