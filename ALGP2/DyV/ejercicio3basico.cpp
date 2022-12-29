#include<iostream>

using namespace std;

int ejercicio3basico(int n){
  int y=0, aux=0;
  for(int i=1; i < n/2; i++){
    aux = i * (i+1) * (i+2);
    if(aux == n)
      y=i;
  }
  return y;
}


int main(){

	int x,y;
	cout << "Introduce numero: " << endl;
	cin >> x;
	
	y = ejercicio3basico(x);

	cout << "El numero es: " << y << endl;
}


