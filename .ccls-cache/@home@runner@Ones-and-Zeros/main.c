#include <stdio.h>
#include <math.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count){
  int b=0,j=count-1;
  size_t i;
  for(i=0;i<count;i++){
    b+=(bits[i])*pow(2,j);
    j--;
  }
  return b;
}


int main(void) {
  unsigned bits[] = { 1,1,1,1}, a;
  a=binary_array_to_numbers(bits, sizeof(bits)/sizeof(bits[0]));
  printf("%d",a);
  return 0;
}