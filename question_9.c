/*Given a decimal number as input, we need to write a program to convert the given decimal number into equivalent octal number. i.e convert the number with base value 10 to base 
value 8. The base value of a number system determines the number of digits used to represent a numeric value. For example, the binary number system uses two digits 0 and 1, 
octal number system uses 8 digits from 0-7 and decimal number system uses 10 digits 0-9 to represent any numeric value.*/

#include <stdio.h>
int main(void) {
  int arr[20],i=0,a,r,n,t;
  scanf("%d",&a);
  t=a;
  while(t!=0)
  {
    r=t%8;
    arr[i]=r;
    i=i+1;
    t=t/8;
  }
for(int j=i-1;j>=0;j--)
{
  printf("%d",arr[j]);
}
}
