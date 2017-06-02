
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
		Binario* operator+(Binario* bin2);
		Binario* operator-(Binario* bin2);
		Binario* operator*(Binario* bin2);
		Binario* operator/(Binario* bin2);
		Binario* operator==(Binario* bin2);
		Binario* operator!=(Binario bin2);
		void LlenarArray();

/*friend ostream& operator << (ostream& out, Binario* bin){			
			stringstream ss;						
			for (int i = 0; i < 4; ++i) {						
				ss << data -> getArray();	
			}
			ss << "\n";
			out << ss.str();	
		}*/


};