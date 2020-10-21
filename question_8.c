#include <stdio.h>
int a[]={10,20,20,20,30,40,50,50,40,10,60};
void count(int uni[],int n,int m)
{
  int i,j,c=0;
  for(i=0;i<m;i++)
  {
    c=0;
    for(j=0;j<n;j++)
    {
      if(uni[i]==a[j])
      c++;
    }
    printf("%d %d\n",uni[i],c);
  }
}
void unique(int n)
{
  int r=1,k=0,m,i,j,uni[8]={0};
 for(i=0;i<n;i++)
 {
   j=0;
  for(j=0;j<i;j++)
  {
    if(a[i]==a[j])
    break;
  }
  if(i==j)
  {
      r=r+1;
  uni[k]=a[i];
  k++;
  
  }
 }
m=(sizeof(uni)/sizeof(uni[0]));
for(i=0;i<=m;i++)
{
  if(uni[i]==0)
  m=m-1;
}
count(uni,n,m);
}

int main(void) 
{
  int i,n;
   n=sizeof(a)/sizeof(a[0]);
     unique(n);
}

