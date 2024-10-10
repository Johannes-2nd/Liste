#include<stdio.h>
#include<stdlib.h>

int main (){
  char hure[30];
  fgets(hure, sizeof(hure), stdin);
  puts(hure);
  return 0;
}
