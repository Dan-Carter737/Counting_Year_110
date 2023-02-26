#include <iostream>
using namespace std; 

void main() {

	setlocale(LC_ALL, "");
	int b = 100;

	for (int i = 0; i <= 365; i++)
		{ 
		b += 10;
		cout << "\t" << i << " день = " << b;
		cout << endl;
		
	}
}