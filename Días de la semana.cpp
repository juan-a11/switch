#include <iostream>
#define Lunes 1
#define Martes 2
#define Miercoles 3
#define Jueves 4
#define Viernes 5
#define Sabado 6
#define Domingo 7

using std::cout;
using std::cin;

int main()
{
int numero_1;
cout << "Introduce un numero del 1 al 7: ";
cin >> numero_1;

switch(numero_1)
{

case Lunes:

 cout << "Lunes";

 break;

case Martes:

 cout << "Martes";

 break;

case Miercoles:

 cout << "Miercoles";

 break;

case Jueves:

 cout << "Jueves";

 break;

case Viernes:

 cout << "Viernes";

 break;

case Sabado:

 cout << "Sabado";

 break;

case Domingo:

 cout << "Domingo";

 break;


default: cout << "Numero del dia no valido";
break;
}

return 0;
}
