#include  <iostream>
using namespace std;

int main()
{	//ejercicio 4.26 , 4.27 y 2.29 
	int opcion;
	int numero1, numero2, numero3, numero4, numero5;
	int contador = 0;
	double entrada2 = 0;
	int entrada;
	bool salir = true;
	do {
		cout << "\nEjercicios Basicos de c++\n" << endl;
		cout << "1. Numero palindrome" << endl;
		cout << "2. Numero binario a decimal" << endl;
		cout << "3. Cuadrados y cubos de numeros" << endl;
		cout << "4. Salir" << endl;
		cout << "Ingrese una opcion" << endl;
		cin >> opcion;

		switch (opcion) {
		case 1:
			do {
				cout << "Ingrese el numero de 5 cifras" << endl;
				cin >> entrada;
				if (entrada >= 100000)
					cout << "Numero debe ser de 5 cifras" << endl;
			} while (entrada>= 100000);
			numero1 = entrada / 10000;
			numero2 = (entrada % 10000) / 1000;
			numero3 = (entrada % 1000) / 100;
			numero4 = (entrada % 100) / 10;
			numero5 = entrada % 10;
			if (numero1 == numero5 && numero2 == numero4)
				cout << "El numero es palindrome" << endl;
			else
				cout << "El numero no es palindrome" << endl;
			break;
		case 2:
			
			long numero, dato, valor, decimal;
			int exponente;
			bool verificar;
			do {
				cout << "Introduce el numero binario 1 y 0: " << endl;
				cin >> entrada2;
				verificar = true;
			 dato= entrada2;
				while (dato != 0) {
					valor = dato % 10; 
					if (valor != 0 && valor != 1) { 
						verificar = false; 					}
					dato = dato / 10; 
				}
			} while (!verificar); 
                 exponente = 0;
			decimal = 0; 
			while (entrada2 != 0) {
				valor = (long)entrada2 % 10;
				decimal = decimal + valor * (int) pow(2, exponente);
				exponente++;
				entrada2 = entrada2 / 10;
			}
			cout<<"El resultado es: " << decimal<<endl;
			break;
		case 3:
			cout << "Tabla de numeros del 0 al 10" << endl;
			cout << "Numero" << "\t" << "Cuadrado" << " Cubo" << endl;
			cout << 0 << "\t" <<0 << "\t " << 0 << endl;
			cout << 1 << "\t" <<1 * 1 << "\t " <<1 * 1 * 1 << endl;
			cout << 2 << "\t" <<2 * 2 << "\t " <<2 * 2 * 2 << endl;
			cout << 3 << "\t" <<3 * 3 << "\t " <<3 * 3 * 3 << endl;
			cout << 4 << "\t" <<4 * 4 << "\t " <<4 * 4 * 4 << endl;
			cout << 5 << "\t" <<5 * 5 << "\t " <<5 * 5 * 5 << endl;
			cout << 6 << "\t" <<6 * 6 << "\t " <<6 * 6 * 6 << endl;
			cout << 7 << "\t" <<7 * 7 << "\t " <<7 * 7 * 7 << endl;
			cout << 8 << "\t" <<8 * 8 << "\t " <<8 * 8 * 8 << endl;
			cout << 9 << "\t" <<9 * 9 << "\t " <<9 * 9 * 9 << endl;
			cout << 10 << "\t" <<10 * 10 << "\t " <<10 * 10 * 10 << endl;
			break;
		case 4:
			salir = false;
			break;
		default:
			cout << "Ingrese una opcion correcta" << endl;

		}
	} while (salir);

}


