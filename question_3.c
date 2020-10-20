#include <stdio.h>

int main(void) {
  int x=0,i,n,c=0;
  int a[]={1, 1, 2, 2, 2, 2, 3};
  n=sizeof(a)/sizeof(a[0]);
  for(i=0;i<n;i++)
  {
    if(x==a[i])
    c++;
  }
  if(c==0)
  printf("-1");
  else
  printf("%d",c);
}
