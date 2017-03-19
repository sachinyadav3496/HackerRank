#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main()
 { int *h,i,height,h1,h2=0;
    char *s=(char *)malloc(sizeof(char)*512000);
    h=(int *)malloc(26*sizeof(int));
       for(i=0;i<26;i++)
        scanf("%d",&h[i]);
     scanf("%s",s);
       for(i=0;i<strlen(s);i++)
            {  
                    switch (s[i])
                    { case 'a':
                          h1=h[0];
                           break;
                       case 'b':
                           h1=h[1];
                              break;
                      case 'c':
                            h1=h[2];
                               break;
                      case 'd': 
                          h1=h[3];
                           break;
                       case 'e': 
                             h1=h[4];
                            break;
                          case 'f':
                               h1=h[5];
                       break;
case 'g':
h1=h[6];
break;
case 'h':
 h1=h[7];
break;
case 'i':
 h1=h[8];
break;
case 'j':
h1=h[9];
break;
case 'k':
h1=h[10];
break;
case 'l':
h1=h[11];
break;
case 'm':
h1=h[12];
break;
case 'n':
h1=h[13];
break;
case 'o':
h1=h[14];
break;
case 'p':
h1=h[15];
break;
case 'q':
h1=h[16];
break;
case 'r':
h1=h[17];
break;
case 's':
h1=h[18];
break;
case 't':
 h1=h[19];
 break;
 case 'u':
 h1=h[20];
break;
case 'v':
h1=h[21];
break;
case 'w':
h1=h[22];
break;
case 'x':
h1=h[23];
break;
case 'y':
h1=h[24];
break;
case 'z':
h1=h[25];
break;
} 
         if(h1>h2)
           { height=h1;
               h2=h1;
              } 
     else 
      { height=h2;
         } 

         } 

printf("%d",(height*3)); 
  return 0;
    } 
