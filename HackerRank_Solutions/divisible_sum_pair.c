#include<stdio.h>
 int main()
 { int n,k,p=0,i,j;
     scanf("%d%d",&n,&k);
    int *a=(int *)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
       scanf("%d",&a[i]);
         for(i=0;i<n-1;i++)
           { for(j=i+1;j<n;j++)
                 {     if((a[i]+a[j])%k==0)
                            p++;
                     else continue;
                 }  } 
    printf("%d",p);
    return 0;
   }  
