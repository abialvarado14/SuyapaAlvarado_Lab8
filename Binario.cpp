#include "Binario.h"
#include <stdlib.h>


Binario::Binario(){
	for (int i = 0; i < 4; ++i)
	{
		Array[i] = rand()%1;
	}
}

void Binario::setArray(int*){
	int num = 0;
}

int* Binario::getArray(){
	int* a;
	a = Array;
	return a;
}

Binario* Binario::operator+(Binario* bin2){

	for (int i = 0; i < 4; ++i)
	{
		this->Array[i] += bin2->getArray()[i];
	}

	return this;
}
Binario* Binario::operator-(Binario* bin2){

	for (int i = 0; i < 4; ++i)
	{
		this->Array[i] -= bin2->getArray()[i];
	}

	return this;
}
Binario* Binario::operator*(Binario* bin2){
	for (int i = 0; i < 4; ++i)
	{
		this->Array[i] *= bin2->getArray()[i];
	}

	return this;
}
Binario* Binario::operator/(Binario* bin2){
	for (int i = 0; i < 4; ++i)
	{
		this->Array[i] /= bin2->getArray()[i];
	}

	return this;
}
Binario* Binario::operator==(Binario* bin2){
	
	Binario* bin3;

	return this;
}
Binario* Binario::operator!=(Binario bin2){
	Binario* bin3;

	return bin3;
}

