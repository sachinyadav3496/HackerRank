#include<stdio.h>
int main()
 { int i,j,n,c=0;
      scanf("%d",&n);
     int *a=(int *)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
             scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
      { for(j=i+1;j<n;j++)
            { if((a[i]==a[j])&&(a[i]!=0||a[j]!=0))
                   { c++; 
                      a[i]=0;
                      a[j]=0;
                          }
                   else continue;
      } }
 printf("%d",c);
 return 0;
 } 
               
