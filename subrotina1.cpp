#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;

void calculaMedia(float &resultado, float A, float B, float C);
void imprimeTexto(float resultado);



int main(){
    float resultado, num1, num2, num3;
    cout<<"Digite dois numeros: "<<endl;
    cin>>num1>>num2>>num3;
    calculaMedia(resultado, num1, num2, num3);
    imprimeTexto(resultado);
	system("pause");
	return 0;
}

void calculaMedia(float &media, float A, float B, float C){
    media = (A+B+C)/3;
}

void imprimeTexto(float resultado){
    cout<<"O resultado da media é: "<<resultado<<endl;
}
