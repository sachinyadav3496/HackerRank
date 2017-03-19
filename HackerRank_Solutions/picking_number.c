#include<stdio.h>
void sort(int *,int);
 int main()
 { int n,i,j,c,k,z,l;
     scanf("%d",&n);
   int *a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
     sort(a,n);
    for(i=0;i<n;i++)
    { c=1;k=1;l=1;
      for(j=0;j<n;j++)
         { if(i==j)
              continue;
else if((a[i]-a[j])==1)
              c++;
             else if((a[i]-a[j])==-1)
                k++; 
              else if((a[i]-a[j])==0) 
                     l++;
                 else 
                    continue;
                       }  
              if(c>=k)
                 z=c+l;
              
                 else z=k+l;
                } 
  printf("%d",z);
 return 0;
 }
 
void sort(int *a,int n)
  { int i,j,key;
       for(j=1;j<n;j++)
          { key=a[j];
             i=j-1;
           while(i>=0&&a[i]>key)
              { a[i+1]=a[i];
                i=i-1;
                    } 
                a[i+1]=key;
                   } } 
