




#include<iostream>
#include<conio.h>


using namespace std;


void codigobarra(long long numero)
{
	int region, casosr, nmuertos, ee, hh;
	char eecadena;
	char hhcadena;
	region = numero / 10000000000000; // 2 region
	casosr = numero % 10000000000000 / 100000000;   // 5 casos
	nmuertos = (numero % 10000000000000) % 100000000 / 10000; // 4 muertos
	ee = (numero % 10000000000000) % 100000000 % 10000/100; //2 edad paciente
	hh = (numero % 10000000000000) % 100000000 % 10000% 100; // hra 2 

	if (6 <= ee <= 17)
		eecadena = 'n';
	if (18 <= ee <= 30)
		eecadena = 'j';
	if (30 <= ee <= 60)
		eecadena = 'a';
	if (60< ee )
		eecadena = 'v';

	if (1<= hh <= 5)
		hhcadena = 'm';
	if (6 <= hh <= 12)
		hhcadena = 'd';
	if (13 <= hh <= 17)
		hhcadena = 't';
	if (16 <= hh <= 23)
		hhcadena = 'n';



	cout << "region: " << region << endl;
	cout << "casos por region: " << casosr << endl;
	cout << "muertos: " << nmuertos << endl;
	cout << "edad: " << eecadena << endl;
	cout << "hora: " << hh << endl;


}


int main()

{
	long long numero;
	char cod;
	cout << "ingrese numero:";
	cin >> numero;
	codigobarra(numero);
	_getch();
}
