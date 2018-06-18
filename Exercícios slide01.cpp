#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;

void pot(float &resultado, float A, float B);
void imprimeTexto(float resultado);



int main(){
    float resultado, num1, num2;
    cout<<"Digite dois numeros: "<<endl;
    cin>>num1>>num2;
    pot(resultado, num1, num2);
    imprimeTexto(resultado);
	system("pause");
	return 0;
}

void pot(float &p, float A, float B){
    p = pow(A,B);
}

void imprimeTexto(float resultado){
    cout<<"O resultado da media é: "<<resultado<<endl;
}
