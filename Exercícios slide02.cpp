#include<iostream>
#include<math.h>
#include<windows.h>
#include <string.h>
using namespace std;


void imprimeTexto(string resultado[10]);



int main(){
    string num1[10];
    cout<<"Digite seu nome: "<<endl;
    cin>>num1[10];
    imprimeTexto(num1);
	system("pause");
	return 0;
}


void imprimeTexto(string resultado){
    cout<<"=========================================="<<endl<<endl;
    cout<<"IFMG - Instituto Federal de Minas Gerais  "<<endl;
    cout<<"Campus Sabara                             "<<endl;
    cout<<"Disciplina de Laboratorio de Programacao I"<<endl;
    cout<<"Nome: "<<resultado<<endl<<endl;
    cout<<"=========================================="<<endl;
}
