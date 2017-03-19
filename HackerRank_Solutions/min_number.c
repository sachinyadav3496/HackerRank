#include<string.h>
#include<stdlib.h>
#include<stdio.h>
 int main()
 { int i,n;char *c=(char *)malloc(500*sizeof(char));
   scanf("%d",&n);
    
   for(i=0;i<n;i++)
   { if(i==n-1)
        strcat(c,"int");
       else 
        strcat(c,"min(int,");
        }
  for(i=0;i<n-1;i++)
    strcat(c,")"); 

puts(c);
 return 0;
 } 
 
