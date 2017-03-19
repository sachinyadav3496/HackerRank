#include<stdio.h>
 int main()
 { int a[3],b[3],i,ai=0,bi=0;
     for(i=0;i<3;i++)
      scanf("%d",&a[i]);
    for(i=0;i<3;i++)
      scanf("%d",&b[i]);
 for(i=0;i<3;i++)
    if(a[i]>b[i])
       ai++;
    else if(b[i]>a[i])
       bi++;
   printf("%d %d",ai,bi);
  return 0;
}
  
    
