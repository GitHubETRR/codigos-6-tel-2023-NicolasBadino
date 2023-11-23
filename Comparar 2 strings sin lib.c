#include <stdio.h>

int compare_strings(char str1[], char str2[])
{
  int i = 0;

  while (str1[i] == str2[i])
  {
   if (str1[i] == '\0')
      break;
   i++;
  }

    if (str1[i] == '\0' && str2[i] == '\0')
      return 0;
    else
      return 1;
}

int main()
{
  char str1[100], str2[100];
  
  printf("ingrese primer string:  ");
  scanf("%s", str1);
  
  printf("ingrese segundo string:  ");
  scanf("%s", str2);
  
  if (compare_strings(str1, str2) == 0)
    printf("estos strings son iguales\n");
  else
    printf("estos strings son diferentes.\n");

  return 0;
}