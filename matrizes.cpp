#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
			 
	int matriz[2][2], i, j;
	
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[1][0] = 3;
	matriz[1][1] = 4;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			//cout << "\ni = " << i << " , j = " << j;
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			//scanf("%d", &matriz[i][j]);
			cin >> matriz[i][j];
		}
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			//cout << "\ni = " << i << " , j = " << j;
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
	
	system("pause");
}