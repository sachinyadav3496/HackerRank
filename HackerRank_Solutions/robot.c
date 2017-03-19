#include<stdio.h>
 int main()
 { int x,t,n,i,f=0;
    scanf("%d%d",&n,&t);
      int c[t],key=n;
    for(i=0;i<t;i++)
scanf("%d",&c[i]);
     x=n;
     for(i=0;i<t;i++)
         { if(i<t-1)
            { key-=c[i];
                 if(key<5)
                   { f+=(x-key);
                       key=n;
                          } 
                        }
                  } 
    printf("%d",f);
  return 0;
         }
