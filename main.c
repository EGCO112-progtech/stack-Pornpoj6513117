#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

int main(int argc, char **argv){
  
  int i,N,j,error=0;
  Stack s;
  s.top=NULL;
  s.size=0;
  for(i=1;i<argc;i++){
    for(j=0;j<strlen(argv[i]);j++){
      switch(argv[i][j]){
        case'{':
        case'[':  push(&s,(argv[i][j]));
                  break;
        case '}': if(pop(&s)!='{')  error=1; break;
        case ']': if(pop(&s)!='[')  error=1; break;
        }  
      if(error==1) break;
      }
    if(s.size>0){
      printf("arfv %d: Incorrect too many open parenhesis\n",i);
      pop_all(&s);
      }
    else if(error==0) printf("argv %d: Correct\n",i);
    else printf("argv %d: Mismatch\n",i);
    }
  

  

  
    
  }









//NodePtr top=NULL;
  
  //for(i=1;i<argc;i++){
   // push(&s,atoi(argv[i]));
  

  //pop_all(&s);



 /*
 Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
        Use stack to help with the parentheses


     }


  }
*/



  
