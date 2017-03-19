#include<stdio.h>
#include<string.h>
  int main()
    {   char p[10],t[8];   scanf("%s",p);
            if(p[8]=='P'||p[8]=='p')
                  { if(p[0]=='1'&&p[1]=='2')
                           { strncpy(t,p,8);
                             t[8]='\0';       }
                            else if(p[1]=='8')
                                  { p[0]='2'; p[1]='0'; 
                                  strncpy(t,p,8); t[8]='\0'; 
                                     } 
                                 else if(p[1]=='9')
                                      { p[0]='2'; p[1]='1'; 
                                  strncpy(t,p,8); t[8]='\0'; 
                                    }        
                                     else 
                                       { p[0]+=1; p[1]+=2;
                                          strncpy(t,p,8); t[8]='\0';
                                             }
                                                      } 
                               			else  
                                                 {  if(p[0]=='1'&&p[1]=='2')
                                                           { p[0]='0'; p[1]='0';
                                                              strncpy(t,p,8); t[8]='\0'; }
                                                                else 
                                				   { strncpy(t,p,8); t[8]='\0'; }
										 }                              
                                                                         printf("%s",t);
   										return 0;
											 } 
