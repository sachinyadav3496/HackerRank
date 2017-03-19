#include<stdio.h>
int main()
 { int i,n,p,c1=0,c2=0;
   scanf("%d",&n);
   scanf("%d",&p);
    c1=p/2;
   if(n%2==0)
      c2=(n-(p-1))/2;
   else 
       c2=((n-1)-(p-1))/2;
   if(c1<=c2)
   printf("%d",c1);
     else
 printf("%d",c2);
   return 0;   
   } 
    
