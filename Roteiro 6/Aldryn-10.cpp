/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Digite por quantas cidades vai passar: 4
Digite a rota do caminhão: 3 1 0 2
Preencha a matriz de custos entre as cidades:
0 10 16 20
15 0 25 18
12 14 0 20
20 19 35 0
O preço da viagem será: 50

Process returned 0 (0x0)   execution time : 59.477 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    cout<<"Digite por quantas cidades vai passar: ";
    cin>>n;
    int rota[n],custo[n][n],c=0;
    cout<<"Digite a rota do caminhão: ";
    for (int i=0;i<n;i++){
        cin>>rota[i];
    }
    cout<<"Preencha a matriz de custos entre as cidades: "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
        cin>>custo[i][j];
    }
    }
    for (int i=0;i<n-1;i++){
        c+=custo[rota[i]][rota[i+1]];
    }
    cout<<"O preço da viagem será: "<<c<<endl;
    return 0;
}
