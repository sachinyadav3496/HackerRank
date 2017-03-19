#include<stdio.h>
 int main()
 { int a,b,s,t,m,n,i,c1=0,c2=0,d;
     scanf("%d%d",&s,&t);
     scanf("%d%d",&a,&b);
     scanf("%d%d",&m,&n);
     int *d1=(int*)malloc(m*sizeof(int));
      int *d2=(int *)malloc(n*sizeof(int));
    for(i=0;i<m;i++)
     {    d=0;
           scanf("%d",&d1[i]);
             d=a+d1[i];
             if(d>=s && d<=t)
                 c1++;
        } 
 for(i=0;i<n;i++)
    { d=0;
       scanf("%d",&d2[i]);
       d=b+d2[i];
        if(d<=t && d>=s)
          c2++;
      }
printf("%d",c1);
printf("\n%d",c2);
 return 0;
   } 
