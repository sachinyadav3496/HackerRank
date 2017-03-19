#include<stdio.h>
 int height(int i);
  int main()
   { int i,n;
      scanf("%d",&n);
      int t[n],h[n];
        for(i=0;i<n;i++)
          scanf("%d",&t[i]);
            for(i=0;i<n;i++)
                 h[i]=height(t[i]);
                  for(i=0;i<n;i++)
                    printf("%d\n",h[i]);
                      return 0;
                            } 
             int height(int i)
                { int k,h=1;
                       if(i==0)
                          return 1;
                         else 
                           { for(k=1;k<=i;k++)
                                 { if(k%2!=0)
                                     h*=2;
                                      else 
                                        h+=1;
                                         } }  
                                   return h;
                                      } 
          
