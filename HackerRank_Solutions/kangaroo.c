#include<stdio.h>
 int main()
 { int x1,x2,v1,v2,f=0;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
       if(v1<v2)
         f=0;
      else 
       { while(x1<x2)
            { x1+=v1;
              x2+=v2;
                } 
          if(x1==x2)
            f=1;
                   } 
       if(f==0)
         printf("NO");
      else if(f==1)
           printf("YES");
              return 0;
   } 
