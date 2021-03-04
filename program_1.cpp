#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void suma(int a, int b);

int main(){
	int N1, N2;
	cout << "Introduzca el valor del primer operando: ";
	cin >> N1;
	cout << "Introduzca el valor del segundo operando: ";
	cin >> N2;
	suma(N1,N2);
	return 0;
}

void suma(int a, int b){

	int c= a + b;

	cout << "El resultado de " << a << " + " << b << " es igual " << a + b;

}
