#include <iostream>

//En Pseint tengo el diagrama de flujo

using namespace std; //Pone std:: en los cout y así

int Zodiaco();

int main() {
  Zodiaco();
  return 0;
}

int Zodiaco(){
  uint Dia;
  uint Mes;

  cout << "por favor ingrese el mes de nacimiento"<< endl;
  cin >> Mes;

  while (Mes<=0 || Mes>12)
  {
    cout << "Ingrese uno posible por favor"<< endl;
    cin >> Mes;
  }

  switch(Mes)
  {

    case 1:
      cout << "Mes Enero, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>31){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>20){
        cout<<"Sos de Acuario"<< endl;
      }else{
        cout<<"Sos de Capricornio"<< endl;
      }
    break;

    case 2:
      cout << "Mes Febrero, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>29){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>19){
        cout<<"Sos de Piscis"<< endl;
      }else{
        cout<<"Sos de Acuario"<< endl;
      }
    break;

    case 3:
      cout << "Mes Marzo, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>31){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>20){
        cout<<"Sos de Aries"<< endl;
      }else{
        cout<<"Sos de Piscis"<< endl;
      }
    break;

    case 4:
      cout << "Mes Abril, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>30){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>20){
        cout<<"Sos de Tauro"<< endl;
      }else{
        cout<<"Sos de Aries"<< endl;
      }
    break;

    case 5:
      cout << "Mes Mayo, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>31){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>21){
        cout<<"Sos de Géminis"<< endl;
      }else{
        cout<<"Sos de Tauro"<< endl;
      }
    break;

    case 6:
      cout << "Mes Junio, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>30){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>21){
        cout<<"Sos de Cancer"<< endl;
      }else{
        cout<<"Sos de Géminis"<< endl;
      }
    break;

    case 7:
      cout << "Mes Julio, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>31){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>22){
        cout<<"Sos de Leo"<< endl;
      }else{
        cout<<"Sos de Cancer"<< endl;
      }
    break;

    case 8:
      cout << "Mes Agosto, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>31){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>22){
        cout<<"Sos de Virgo"<< endl;
      }else{
        cout<<"Sos de Leo"<< endl;
      }
    break;

    case 9:
      cout << "Mes Septiembre, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>30){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>22){
        cout<<"Sos de Libra"<< endl;
      }else{
        cout<<"Sos de Virgo"<< endl;
      }
    break;

    case 10:
      cout << "Mes Octubre, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>31){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>22){
        cout<<"Sos de Escorpio"<< endl;
      }else{
        cout<<"Sos de Libra"<< endl;
      }
    break;

    case 11:
      cout << "Mes Noviembre, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>30){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>22){
        cout<<"Sos de Sagitario"<< endl;
      }else{
        cout<<"Sos de Escorpio"<< endl;
      }
    break;

    case 12:
      cout << "Mes Diciembre, por favor ingrese el dia:"<< endl;
      cin >> Dia;
      while(Dia<=0 || Dia>31){
        cout<<"Ingrese uno posible por favor"<< endl;
        cin >> Dia;
      }
      if(Dia>21){
        cout<<"Sos de Capricornio"<< endl;
      }else{
        cout<<"Sos de Sagitario"<< endl;
      }
    break;
  }
  return 0;
}
