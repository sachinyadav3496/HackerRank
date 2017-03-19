#include<stdio.h>
int main()
 {  long int a[5],s[5],i,j,k=0;
     for(i=0;i<5;i++)
          scanf("%lld",&a[i]);
           for(i=0;i<5;i++)
           { s[k]=0;
              for(j=0;j<5;j++)
                   { if(i==j)
                       continue;
                      else
                            s[k]=s[k]+a[j];
                          } 
                             k++;
                 }
                       for(i=1;i<5;i++)
                      { k=s[i];
                           j=i-1;
                             while(k<s[j]&&j>=0)
                                { s[j+1]=s[j];
                                       j=j-1;
                                     } 
                              s[j+1]=k;
    } 
             printf("%lld %lld",s[0],s[4]);
           return 0;
          }
