#include <stdio.h>

union
{
  float num;
  unsigned char valores[4]; 
}val;

int main(void)
{ 
  val.num=12.25;
  printf("0x%x\n",val.valores[0]);
  printf("0x%x\n",val.valores[1]);
  printf("0x%x\n",val.valores[2]);
  printf("0x%x\n",val.valores[3]);
  return 0;
}