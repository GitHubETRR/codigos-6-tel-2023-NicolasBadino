#include <stdio.h>

int *puntero;

int Valor(int val, int val2)
{
  val = val2;
  return 0;
}

int Referencia(int* val, int* val2)
{
  val = val2;
  puntero = val;
  return 0;
}

int main(void)
{
  int val;
  int val2;
  
  printf("Hola porfavor ingrese su valor 1: ");
  scanf("%d",&val);
  printf("Hola porfavor ingrese su valor 2: ");
  scanf("%d",&val2);
  
  Valor(val,val2);
  printf("Su resultado es por valor: %d\n",val);
  
  Referencia(&val,&val2);
  printf("Su resultado es por referencia: %d\n",*puntero);

  return 0;
}