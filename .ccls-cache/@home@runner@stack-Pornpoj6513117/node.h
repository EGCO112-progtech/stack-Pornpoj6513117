#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#ifndef linkedlist_h
#define linkedlist_h
struct node {
  int data;
  struct node *nextPtr;
};

typedef struct node Node;
typedef struct node *NodePtr;

/*void push(NodePtr *top, int x){

NodePtr new_node=(NodePtr)malloc(sizeof(Node));

  if(new_node){ //push
  new_node->data=x;
  new_node-> nextPtr=*top;
  *top=new_node;
    }
  }
    int pop(NodePtr* top){ //pop
  NodePtr t =*top;
      if(t){
  int value= t->data; //(*top)->data
  *top=t->nextPtr;  //(*top)->nextPtr
  free(t);
  return value;
      }
    printf("Empty Stack");
    return 0;
      }*/

#endif
