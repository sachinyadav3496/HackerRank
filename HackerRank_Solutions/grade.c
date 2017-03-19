#include<stdio.h>
 int main()
 { int i,n,a[60];
    scanf("%d",&n);
    for(i=0;i<n;i++)
     { scanf("%d",&a[i]);
       if(a[i]>=38)
  {  if((a[i]%5)>=3)
            a[i]=a[i]+5-(a[i]%5);
     } 
          }
               for(i=0;i<n;i++)
                printf("\n%d",a[i]);
  return 0;
   } 
