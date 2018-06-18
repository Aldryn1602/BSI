/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
#include <stdio.h>
#include <string>//necessário para strcat
#include <conio.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    string nome,ap;
    int tam;
    cout<<"Digite o nome: ";
    cin>>nome;
    cout<<"Digite o apelido: ";
    cin>>ap;
    cout<<nome<<endl;
    cout<<ap<<endl;
    cout<<nome;
    return 0;
}
