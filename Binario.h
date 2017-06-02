
#include <string>
#include <iostream>
using namespace std;

class Binario{

	private:
		int Array[4];

	public:
		
		Binario();
		void setArray(int*);
		int* getArray();
		Binario* operator+(Binario*);
		Binario* operator-(Binario*);
		Binario* operator*(Binario*);
		Binario* operator/(Binario*);
		Binario* operator^(Binario*);
		void LlenarArray();
		void Imprimir(Binario*);



};