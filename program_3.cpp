#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int N1;
	int i;
	int Factorial=1;
	cout << "Indroduzca el valor del numero: ";
	cin >> N1;
	
   for(i=1;i<=N1;i++){
   
        Factorial = Factorial * i;
}
	cout << " El " << N1 << "! es: " << Factorial; 
	return 0;
	
}

