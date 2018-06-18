#include <iostream>
#include <math.h>
using namespace std;

int SomaDoisNumeros(int a, int b);
void imprimeTexto(int a);

int main (){
    int resultado, n1, n2;
    cout<<"Digite dois numeros: ";
    cin>>n1>>n2;
    resultado= SomaDoisNumeros(n1,n2);
    imprimeTexto(resultado);
    int i,o;
    cout<<"Digite dois numeros: ";
    cin>>i>>o;
    resultado= SomaDoisNumeros(i,o);
    imprimeTexto(resultado);

    return 0;
}
int SomaDoisNumeros(int c, int d){
    int soma;
    soma=c+d;
    return soma;
}
void imprimeTexto(int a){
cout<<"O resultado da soma eh "<<a<<endl;
}
