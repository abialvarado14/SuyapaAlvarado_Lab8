#include <iostream>
#include <string>
#include <vector>
#include "Binario.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(0));
	int opc = 0;
	cout << "-----LABORATORIO OPERADORES------" << endl;
	cout <<"-----LOS BINARIOS YA HAN SIDO CREADOS----" << endl;
	Binario* A = new Binario();
	Binario* B = new Binario();


	while(opc!=7){
		cout << "\nIngrese la operación que desea: \n1.Disyunción\n2.Conjunción\n3.Implicación\n4.Doble Implicación\n5.Disyunción Exclusiva\n6.Calculadora\n7.Salir ";
		cin >> opc;

		switch(opc){
			case 1:{
				cout << "----DISYUNCIÓN-----" << endl << endl;
				//IMPRIME A
				for (int i = 0; i < 4; ++i)
				{
					cout << A->getArray()[i];
				}
				cout << " + ";

				//IMPRIME B
				for (int i = 0; i < 4; ++i)
				{
					cout << B->getArray()[i];
				}

				Binario* C = *B + A; //OPERACIÓN
				cout << " = ";

				//IMPRIME RESULTADO

				for (int i = 0; i < 4; ++i)
				{
				cout << C->getArray()[i];
				}

			break;
				}//FIN CASE 1

			case 2:{
				cout << "-----CONJUNCIÓN----" << endl << endl;

				//IMPRIME A
				for (int i = 0; i < 4; ++i)
				{
					cout << A->getArray()[i];
				}
				cout << " - ";

				//IMPRIME B
				for (int i = 0; i < 4; ++i)
				{
					cout << B->getArray()[i];
				}

				Binario* C = *B - A; //OPERACIÓN
				cout << " = ";

				//IMPRIME RESULTADO

				for (int i = 0; i < 4; ++i)
				{
				cout << C->getArray()[i];
				}
			break;
				}//FIN CASE 2

			case 3:{
				cout << "------IMPLICACIÓN----------" << endl << endl;

				//IMPRIME A
				for (int i = 0; i < 4; ++i)
				{
					cout << A->getArray()[i];
				}
				cout << " - ";

				//IMPRIME B
				for (int i = 0; i < 4; ++i)
				{
					cout << B->getArray()[i];
				}

				Binario* C = *B * A; //OPERACIÓN
				cout << " = ";

				//IMPRIME RESULTADO

				for (int i = 0; i < 4; ++i)
				{
				cout << C->getArray()[i];
				}
			break;

			}//FIN CASE 3

			case 4:{
				cout << "------DOBLE IMPLICACIÓN----------" << endl << endl;

				//IMPRIME A
				for (int i = 0; i < 4; ++i)
				{
					cout << A->getArray()[i];
				}
				cout << " - ";

				//IMPRIME B
				for (int i = 0; i < 4; ++i)
				{
					cout << B->getArray()[i];
				}

				/*Binari C = *B / A; //OPERACIÓN
				cout << " = ";

				//IMPRIME RESULTADO

				for (int i = 0; i < 4; ++i)
				{
				cout << C->getArray()[i];
				}*/
		
			break;
		}//FIN CASE 4

		case 5:{
			cout << "------DISYUNCIÓN EXCLUSIVA----------" << endl << endl;

				//IMPRIME A
				for (int i = 0; i < 4; ++i)
				{
					cout << A->getArray()[i];
				}
				cout << " ^ ";

				//IMPRIME B
				for (int i = 0; i < 4; ++i)
				{
					cout << B->getArray()[i];
				}

				Binario* C = *B^A; //OPERACIÓN
				cout << " = ";

				//IMPRIME RESULTADO

				for (int i = 0; i < 4; ++i)
				{
				cout << C->getArray()[i];
				}
		break;
		}

		

		case 6:{
			int opc2;
			cout << "\nIngrese la operación que desea: \n1.Disyunción\n2.Conjunción\n3.Implicación\n4.Doble Implicación\n5.Disyunción Exclusiva";
			cin >> opc2;
				switch(opc2){
					case 1:{
						cout << "----DISYUNCIÓN-----" << endl << endl;
				//IMPRIME A
				for (int i = 0; i < 4; ++i)
				{
					cout << A->getArray()[i];
				}
				cout << " + ";

				//IMPRIME B
				for (int i = 0; i < 4; ++i)
				{
					cout << B->getArray()[i];
				}

				cout << " = ";

				//IMPRIME RESULTADO

				for (int i = 0; i < 4; ++i)
				{
					int num;

					if (A->getArray()[i] + B->getArray()[i]==2)
						cout << "1";
					else 
						cout << A->getArray()[i] + B->getArray()[i];
					
				}

					break;
					}//CASE 1

				break;
				}//FIN CASE CALCULADORA NORMAL...
		}		
		}
	}//FIN WHILE



	

	
	



	return 0;
}
