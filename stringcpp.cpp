#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	string palavra;
	
	cout << "Digite uma palavra ";
	
	cin >> palavra;
	
	cout << "\nA palavra é: " << palavra;
	
	cout << "\n";
	
	system("pause");	
}
