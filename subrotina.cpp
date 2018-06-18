#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;

int somaDoisNumeros(int A, int B);
void imprimeTexto(int SARA);

int main(){
    int resultado, num1, num2;
    cout<<"Digite dois numeros: "<<endl;
    cin>>num1>>num2;
    system("pause");
    resultado = somaDoisNumeros(num1, num2);
    imprimeTexto(resultado);
    int num3, num4;
    cout<<"Digite dois numeros: "<<endl;
    cin>>num3>>num4;
    resultado = somaDoisNumeros(num3, num4);
    imprimeTexto(resultado);
	system("pause");
	return 0;
}

int somaDoisNumeros(int C, int D){
    int soma;
    soma = C + D;
    return soma;
}

void imprimeTexto(int A){
    cout<<"O resultado da soma é: "<<A<<endl;
}
