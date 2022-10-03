#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<ctime>
using namespace std;

int main() {
	cout << "                                    Domingo de formula 1" << endl;
	cout << "                   La liebre y la tortuga pelean coronarse campeon mundial" << endl;
	int rutaliebre[70];
	int rutatortuga[70];
	int avance_tortuga = 0;
	int avance_liebre = 0;
	int* tortuga;
	int* liebre;
	srand(time(NULL));

	cout << "!BANG!" << endl;
	cout << "! Y ARRANCAN!" << endl;

	do {
		for (int i = 0; i < 70; i++) {
			rutaliebre[i] = 1 + rand() % (10 - 1);
			rutatortuga[i] = 1 + rand() % (20 - 1);
		}
		liebre = rutaliebre;
		tortuga = rutatortuga;

		if (liebre == tortuga) {
			cout << ": ¡OUCH! la tortuga colisiona con la liebre en la vuelta del sector " << liebre << endl;
		}
		else if (1 <= *tortuga && 5 >= *tortuga) {
			tortuga = tortuga + 3;
			avance_tortuga = avance_tortuga + 3;
			cout << "La tortuga avanza a la posicion: " << avance_tortuga << " con paso veloz" << endl;
		}
		else if (6 <= *tortuga && 7 >= *tortuga) {
			tortuga = tortuga - 6;
			avance_tortuga = avance_tortuga - 6;
			if (0 > avance_tortuga) {
				tortuga = &rutatortuga[0];
				avance_tortuga = 1;
			}
			cout << "NOO! La tortuga cae a la posicion " << avance_tortuga << " luego de un resbalon pero la carrera continua" << endl;
		}
		else if (8 <= *tortuga && 10 >= *tortuga) {
			tortuga = tortuga + 1;
			avance_tortuga = avance_tortuga + 1;
			cout << "La tortuga avanza a la posicion: " << avance_tortuga << " a un paso lento pero seguro" << endl;
		}
		else if (1 <= *liebre && 8 >= *liebre) {
			liebre = liebre + 4;
			avance_liebre = avance_liebre + 4;
			cout << "La liebre avanza a la posicion: " << avance_liebre << " de salto en salto y burlandose de la tortuga" << endl;
		}
		else if (9 <= *liebre && 15 >= *liebre) {
			liebre = liebre - 15;
			avance_liebre = avance_liebre - 15;
			if (0 > avance_liebre) {
				liebre = &rutaliebre[0];
				avance_liebre = 1;
			}
			cout << "Para no creer! La liebre se tropieza con una piedra por burlarse de la tortuga y ace a la posicion " << avance_liebre << " esto es karma" << endl;
		}
		else if (16 <= *liebre && 18 >= *liebre) {
			liebre = liebre + 1;
			avance_liebre = avance_liebre + 1;
			cout << "La liebre muy confiada avanza a la posicion " << avance_liebre << " en camara lenta";
		}
		else if (19 <= *liebre && 20 >= *liebre) {
			liebre = liebre - 7;
			avance_liebre = avance_liebre - 7;
			if (0 > avance_liebre) {
				liebre = &rutaliebre[0];
				avance_liebre = 1;
			}
			cout << "Para reirse, la liebre cae a la posicion " << avance_liebre << " luego de dormir una siesta Y N PONER LA ALARMA" << endl;
		}

	} while (avance_liebre < 70 && avance_tortuga < 70);

	if (avance_tortuga >= 70) {
		cout << endl;
		cout << "LA TORTUGA PEREZ SOPRENDENTEMENTE REMONTA Y GANA LA CARRERA"<<endl<<"Este chico se merece todas las zanahorias del mundo IMPRESIONANTE";
	}
	if(avance_liebre >= 70) {
		cout << endl;
		cout << "Una vez mas..... la liebre se lleva el campeonato mundial" << endl << " Porfavor denle su premio y larguemonos de aqui";
	}
	system("pause");
}
