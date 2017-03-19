#include<stdio.h>
int main()
 { int  i,n; long long int s=0;
   scanf("%d",&n);
    long long int *a=(long long int *)malloc(n*sizeof(long long int));
  for(i=0;i<n;i++)
   { scanf("%lu",&a[i]);
       s=s+a[i];
      } 
printf("%lu",s);
 return 0;
 } 

