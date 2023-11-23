#include <stdio.h>

float val = 12.25;
float*P1;
unsigned char *p =(unsigned char*)&val;
int main(void)
{
  printf("0x%x\n",p[0]);
  printf("0x%x\n",p[1]);
  printf("0x%x\n",p[2]);
  printf("0x%x\n",p[3]);
  return 0;
}