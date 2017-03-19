#include<stdio.h>
#include<string.h>
 int main()
 {  int i,n,c=1;
char *p=(char *)malloc(10240*sizeof(char));
    scanf("%s",p);
    n=strlen(p);
     for(i=0;i<n;i++)
         if(p[i]>=65&&p[i]<=90)
              c++;
    printf("%d",c);   
return 0;
 } 
