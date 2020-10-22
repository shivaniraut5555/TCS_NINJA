#include <stdio.h>
#include<string.h>
void binary_to_deci(int);
int powe(int,int);
void deci_to_octal(int a)
{
  int arr[20],rev[20],i=0,r,n,t;
  t=a;
  while(t!=0)
  {
    r=t%8;
    arr[i]=r;
    i=i+1;
    t=t/8;
  }
  printf("Enter the number in octal form is:");
for(int j=i-1;j>=0;j--)
{
  printf("%d",arr[j]);
}
}
int powe(int base,int exp)
{
  if(exp==0)
  return 1;
  else
   return (2*powe(base,exp-1));
}
void deci_to_hexa(int a)
{
  int q,r,i=0,j,n,temp,chck;
  char hex[10];
  q=a;
  while(q!=0)
  {
    temp = a/16;
    chck = temp*16;
    r= a - chck;
    if(r<10)
    r=r+48;
    else
    r=55+r;
    hex[i]=r;
    i=i+1;
    q=q/16;
  }
  printf("\nThe number in hexadecimal form is:");
  puts(hex);
}
void binary_to_deci(int a)
{
  int sum=0,r,d,c=0;
  while(a!=0)
  {
    r=a%2;
    a=a/10;
    sum=sum+(r*powe(2,c));
    c=c+1;
  }
  printf("The number in decimal is:%d\n",sum);
  deci_to_octal(sum);
  deci_to_hexa(sum);
}

int main(void) 
{
  int a;
  printf("Enter the binary number:");
  scanf("%d",&a);
  binary_to_deci(a);
 
}
