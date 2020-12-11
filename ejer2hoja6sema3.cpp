/*Una distribuidora de abarrotes con el fin de llevar un mejor control de sus productos ha
decidido implantar un código de barras en cada uno de los mismos. Este código, de 12
dígitos, contiene la siguiente información del producto: fecha de vencimiento, una letra que
identifica al tipo de producto y un indicador si se trata de un producto perecible o no.
La estructura del código de barras es el siguiente: DDMMAAAATTPP
Dónde:
DD: día de vencimiento.
MM: mes de vencimiento.
AAAA: año de vencimiento.
TT: Es el código ASCII de la letra que identifica el tipo de producto.
PP: Un entero positivo que indica si el producto es perecible o no. 00 significa perecible.
Se le solicita que elabore un programa en C++ que reciba como dato el código de barras de
un producto y luego nos imprima los siguientes datos tal como se muestra en el ejemplo.
2
Ejemplo:
Ingrese código de barras: 120820166712
Entonces el programa debe imprimir:
Día de vencimiento: 12
Mes de vencimiento: 8
Año de vencimiento: 2016
El tipo de producto es: C
Producto perecible (0: No; 1: Sí): 0 */






#include<iostream>
#include<conio.h>


using namespace std;


void codigobarra(long long numero)
{
	int dia,mes,anio,tt,pp;
	char cod;
	dia=numero/10000000000;
	mes=numero%10000000000/100000000;
	anio=(numero%10000000000)%100000000/10000;
	tt=((numero%10000000000)%100000000)%10000/100;
	pp=(((numero%10000000000)%100000000)%10000)%100;
	
	cod=tt;
	
	cout<<"dia de vencimiento"<<dia<<endl;
	cout<<"mes de vencimiento"<<mes<<endl;
	cout<<"anio de vencimiento"<<anio<<endl;
	cout<<"el tipo de producto"<<cod<<endl;
	cout<<"es perecible(0:no;1:si)"<<pp<<endl;
	
	
}


int main()

{
	long long numero;
	char cod;
	cout<<"ingrese numero:" ;
	cin>>numero;
	codigobarra(numero);
	_getch();
}
	
	
	
