#include<iostream>

using namespace std;

bool ejercicio2(int n){
	for(int i = 1; i <= (n/2); i++){
		if(i*i == n){
			return true;
		}
	}
	return false;
}

int main(){

	bool perfe;
	int x;
	cout << "Introduce numero: " << endl;
	cin >> x;
	
	perfe = ejercicio2(x);
	
	cout << "0 si es falso 1 si es cuadrado perfecto: " << perfe << endl;

}
