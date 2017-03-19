#include<stdio.h>
#include<stdlib.h>
 int main()
 { int i,n,k,ba=0,bc;
    scanf("%d%d",&n,&k); 
        int c[n];
for(i=0;i<n;i++)
             scanf("%d",&c[i]);
                   scanf("%d",&bc);
                   for(i=0;i<n;i++)
                     { if(i==k)
                         continue; 
                          else 
                             ba+=c[i];
                                  } 
   ba=ba/2;
     if(ba==bc)
        printf("\nBon Appetit");
           else 
             printf("%d",abs(ba-bc));
                                     return 0;
                                   } 
