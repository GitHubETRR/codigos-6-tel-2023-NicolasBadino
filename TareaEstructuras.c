#include <stdio.h>
#include <string.h>

#define CANT 3

void Swap(int i);

struct Datos{
  char Nombre [15];
  char Apellido [15];
  unsigned int Edad; 
  unsigned int Born;
  unsigned int Tel;
}Alumnos[4];

int main(void) 
{
  char Nombre[15];
  char Apellido[15];
  int Edad, Born, Tel;
  int i=0, j=0;
  
  for(int i = 0; i<CANT ;i++)
  {
    printf("Por favor ingrese su nombre\n");
    scanf("%s", Nombre);
    
    printf("ingrese su apellido\n");
    scanf("%s", Apellido);
    
    printf("ingrese su edad\n");
    scanf("%d",&Edad);
    
    printf("Ingrese su año de nacimiento\n");
    scanf("%d",&Born);
    
    printf("Por ultimo ingrese su telefono\n");
    scanf("%d",&Tel);
    
    Alumnos[i].Edad=Edad;
    strcpy(Alumnos[i].Nombre,Nombre);
    strcpy(Alumnos[i].Apellido,Apellido);
    Alumnos[i].Born=Born;
    Alumnos[i].Tel=Tel;
  }
  
  for(j = 0; j<CANT; j++)
  {
    for(i = 0; i<CANT-1; i++)
    {
      if (strcmp(Alumnos[i].Nombre, Alumnos[i+1].Nombre)>0)
      {
        Swap(i);
      }
    }
  }
  
  printf("Lista de los datos de alumnos ordenada Alfabeticamente:\n");
  for(int i = 0; i<CANT; i++){
    printf("Nombre: %s\n",Alumnos[i].Nombre);
    printf("Apellido: %s\n",Alumnos[i].Apellido);
    printf("Edad: %d\n",Alumnos[i].Edad);
    printf("Año de nacimiento: %d\n",Alumnos[i].Born);
    printf("Telefono: %d\n",Alumnos[i].Tel);
    printf("-----------------------------------------\n");
  }
  return 0;
}

void Swap(int i){
  
  char des[50];
  char des2[50];
  int des3,des4,des5;
  
  strcpy(des,Alumnos[i].Nombre);
  strcpy(Alumnos[i].Nombre, Alumnos[i+1].Nombre);
  strcpy(Alumnos[i+1].Nombre,des);
  
  strcpy(des2,Alumnos[i].Apellido);
  strcpy(Alumnos[i].Apellido, Alumnos[i+1].Apellido);
  strcpy(Alumnos[i+1].Apellido,des2);
  
  des3 = Alumnos[i].Edad;
  Alumnos[i].Edad = Alumnos[i+1].Edad;
  Alumnos[i+1].Edad = des3;
  
  des4 = Alumnos[i].Born;
  Alumnos[i].Born = Alumnos[i+1].Born;
  Alumnos[i+1].Born = des4;
  
  des5 = Alumnos[i].Tel;
  Alumnos[i].Tel = Alumnos[i+1].Tel;
  Alumnos[i+1].Tel = des5;  
}