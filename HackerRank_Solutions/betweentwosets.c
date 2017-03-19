#include<stdio.h>
void sort(int *a,int n);
int check(int *a,int n,int temp);
 int main()
  { int n,m,i,f=0,j,k=1,s=0,z=0,w,x=2;
     scanf("%d%d",&n,&m);
       int a[n],b[m],temp,c=0;
          for(i=0;i<n;i++)
           scanf("%d",&a[i]);
            for(i=0;i<m;i++)
              scanf("%d",&b[i]);
          sort(&a,n);
          sort(&b,m);
   temp=a[n-1];
         while(z!=1)
           { w=check(&a,n,temp);
              if(w==1)
                z=1;
                  else
                    { temp=temp*x;
                        x++;   
                       } 
   } 
    
                while((temp*k)<=b[0])
                   {    
                          { for(i=0;i<m;i++)
                               if(b[i]%(temp*k)==0)
                                 f=1; 
                                  else 
                                    s=1;       }
                                           if(f==1&&s==0)
                                                c++;
                                       f=0; s=0; 
                                                k++; 
                                                       }  
                                                          printf("%d",c);
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
               
int check(int *a,int n,int temp)
     {int i,f=0,s=0; 
             for(i=0;i<n;i++)
           { if(temp%a[i]==0)
                 f=1;
               else 
                    s=1;
                   }  
             if(f==1&&s==0)
                 return 1;
                else 
                     return 0;
                           } 
