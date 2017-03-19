#include<stdio.h>
#include<stdlib.h>
 int main()
   { int i,p,p1;
     scanf("%d",&p);
     long long int n=25,f=1,x;
     p1=25-p;
     for(i=25;i>=(25-p);i--)
         { n=n*(i-1);
         }
for(i=1;i<=p;i++)
  { f*=i;
  } 
  x=n/f;
		    printf("%lld",x);
   }
   
