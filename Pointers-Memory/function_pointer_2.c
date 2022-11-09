#include <stdio.h>

void printHello(){
  printf("Hello\n");
}

int main(){
  void (*p)();
  p = printHello;
  p();
}
