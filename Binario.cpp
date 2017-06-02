#include "Binario.h"
#include <stdlib.h>
#include <time.h>


Binario::Binario(){
	
	for (int i = 0; i < 4; ++i)
	{
		Array[i] = rand()%2;
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
		//this->Array[i] += bin2->getArray()[i];

		if (this->Array[i] += bin2->getArray()[i]==2)
			this->Array[i] = 1;
		else
			this->Array[i]+=bin2->getArray()[i];
	}

	return this;
}
Binario* Binario::operator-(Binario* bin2){//TODO: CORREGIR

	for (int i = 0; i < 4; ++i)
	{		
		if (this->Array[i] -= bin2->getArray()[i]==-1){
			this->Array[i] = 0; 
		}
		else if (this->Array[i]==1 && bin2->getArray()[i]==1 && this->Array[i] - bin2->getArray()[i]==0 ){
			this->Array[i] = 1;
		}
		else if (this->Array[i]==1 && bin2->getArray()[i]==0 && this->Array[i] - bin2->getArray()[i]==1){
			this->Array[i] = 0;
		}
		else{
			this->Array[i] -= bin2->getArray()[i];
		}
	}
	


	return this;
}
Binario* Binario::operator*(Binario* bin2){
	for (int i = 0; i < 4; ++i)
	{
		
		if (this->Array[i]==0 && bin2->getArray()[i]==0 && Array[i] * bin2->getArray()[i]==0)
			this->Array[i] = 1;
		else	
			this->Array[i] *= bin2->getArray()[i];
	}

	return this;
}
Binario* Binario::operator/(Binario* bin2){
	for (int i = 0; i < 4; ++i)
	{
		if (this->Array[i]==1 && bin2->getArray()[i]==0)
			this->Array[i]=1;
		else if (this->Array[i]==0 && bin2->getArray()[i]==0 && this->Array[i] / bin2->getArray()[i]==0 )			
			this->Array[i]=1;
		else
			this->Array[i] /= bin2->getArray()[i];
	}

	return this;
}
Binario* Binario::operator^(Binario* bin2){
	for (int i = 0; i < 4; ++i)
	{
		this->Array[i] ^= bin2->getArray()[i];
	}
	

	return this;
}




