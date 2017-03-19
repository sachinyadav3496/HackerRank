#include<stdio.h>
 int main()
 { int n,i; float f1=0.0,f2=0.0,f3=0.0;
float s=0;    scanf("%d",&n);
     int *a=(int *)malloc(n*sizeof(int));
     for(i=0;i<n;i++)
     {    scanf("%d",&a[i]);
                 if(a[i]>0)
                   f1++;
                   else if(a[i]<0)
                     f2++;
                       else 
                        f3++;
                      } 
  printf("%f\n",f1/n);
printf("%f\n",f2/n);
 printf("%f\n",f3/n);
   
return 0;
   }
