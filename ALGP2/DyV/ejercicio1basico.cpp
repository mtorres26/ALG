#include<iostream>

using namespace std;

int ejercicio1(int i, int j){
	int aux = i;
	int sol = 0;
	if(j == 0 || i == 0){
		return sol;
	}

	for(int m = 1; m < j; m++){
		i = i + aux;
		sol = i;
	}
	return sol;
}

int main(){
	int i, j, s;

	cout << "Introduce numero i: " << endl;
	cin >> i;
	cout << "Introduce numero j: " << endl;
	cin >> j;
	
	s = ejercicio1(i,j);
	cout << "El resultado es: " << s << endl;
}
