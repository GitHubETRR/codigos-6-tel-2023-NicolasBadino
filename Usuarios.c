#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// User *ptr_usr = (User*)malloc(sizeof(User));

enum { CREAR_USR = 1, ELIMINAR_USR, VER_LISTA, SALIR };

//La estructura User es la estructura que almacena los datos del usuario
typedef struct lista{
  char username[30];
  char email[30];
  char password[30];
  int edad;
  int ID;
  struct lista* next;
}user_t;

user_t user3={"Pedro","pedro@gmail.com","xxx3",17,765,NULL};
user_t user2={"Nico","nico@gmail.com","xxxx2",17,543,&user3};
user_t user1={"isi","ipav@gmail.com","xxxxx",37,245,&user2};
user_t *lista_p = &user1;

//Declaro las funciones
int menu(void);
void crear_usuario(void);
void eliminar_usuario(void);
void ver_lista_usuarios(void);

int main(void) {
  int opcion;
  printf("Bienvenido ingrese \n");
  do {
    opcion = menu();
    switch (opcion) {
    case CREAR_USR:
      crear_usuario();
      break;
    case ELIMINAR_USR:
      eliminar_usuario();
      break;
    case VER_LISTA:
      ver_lista_usuarios();
      break;
    case SALIR:
      break;
    }
  } while (opcion != SALIR);
  return 0;
}

//Esta funcion es para crear el menu de navegacion
int menu(void) {
  unsigned int Menu;

  printf("1--> para crear un usuario \n");
  printf("2--> para eliminar un usuario \n");
  printf("3--> para ver la lista de usuarios\n");
  printf("4--> para salir\n");

  do{
    scanf("%d", &Menu);
    if (Menu == 0 || Menu > SALIR){
      printf("ERROR ingrese un numero valido\n");
    }
  } while (Menu == 0 || Menu > SALIR);

  return Menu;
}

//Esta funcion es para crear a los usuarios
void crear_usuario(void){
  user_t * user_p=lista_p;
  if(user_p!=NULL){
    while(user_p->next!=NULL){
      user_p=user_p->next;
    }
    user_p->next=(user_t*) malloc(sizeof(user_t));
    if(user_p->next==NULL){
      printf("No hay mas memoria");
    }
    user_p=user_p->next;
  }else{
    user_p=(user_t*) malloc(sizeof(user_t));
    if(user_p==NULL){
      printf("No hay mas memoria");
    }
  }

  printf("Para crear su usuario por favor ingrese un nombre\n");
  scanf("%s",user_p->username);
  printf("Pass\n");
  scanf("%s",user_p->password);
  printf("edad\n");
  scanf("%d",&(user_p->edad));
  printf("email\n");
  scanf("%s",user_p->email);
  printf("ID\n");
  scanf("%d",&user_p->ID);
  printf("Usuario creado con exito\n");
}

//Esta funcion es para eliminar a los usuarios
void eliminar_usuario(void){
  int ProvID;
  struct Aux;
  struct Prev;
  
  printf("Ingrese el numero de ID del usuario a eliminar\n");
  scanf("%d", &ProvID);
  
  user_t*Aux = lista_p;
  user_t*Prev = lista_p;
  
  while(Aux!=NULL){
    //printf("ID: %d\n",Prev->ID);
    if(Aux->ID == ProvID){
      //free(Prev->next); no funciona
      Prev -> next = Aux->next;
      //printf("FUNCIONA");
      //exit(0);
    }
    Prev = Aux;
    Aux = Aux -> next;
  }
  printf("Usuario eliminado con exito\n");
}

// Esta funcion es para ver la lista de usuarios
void ver_lista_usuarios(void){
  int user_index=1;
  user_t * user_p=lista_p;
  printf("Lista de usuarios:\n"); 
  while(user_p!=NULL){
    printf("****************\n");
    printf("Usuario N°%d\n\n",user_index++);
    printf("Nombre de usuario: %s\n",user_p->username);
    printf("Contraseña: %s\n",user_p->password);
    printf("Edad: %d\n",user_p->edad);
    printf("Email: %s\n",user_p->email);
    printf("ID: %d\n",user_p->ID);
    user_p=user_p->next;
  }
  printf("****************\n");
}