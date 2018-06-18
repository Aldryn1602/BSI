/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Digite a posição da linha 0 coluna 0 da matriz:1
Digite a posição da linha 0 coluna 1 da matriz:1
Digite a posição da linha 0 coluna 2 da matriz:1
Digite a posição da linha 0 coluna 3 da matriz:1
Digite a posição da linha 0 coluna 4 da matriz:1
Digite a posição da linha 1 coluna 0 da matriz:5
Digite a posição da linha 1 coluna 1 da matriz:1
Digite a posição da linha 1 coluna 2 da matriz:1
Digite a posição da linha 1 coluna 3 da matriz:1
Digite a posição da linha 1 coluna 4 da matriz:1
Digite a posição da linha 2 coluna 0 da matriz:1
Digite a posição da linha 2 coluna 1 da matriz:1
Digite a posição da linha 2 coluna 2 da matriz:1
Digite a posição da linha 2 coluna 3 da matriz:1
Digite a posição da linha 2 coluna 4 da matriz:1
Maior valor somado é o da linha: 1 Com o valor de: 9
Process returned 0 (0x0)   execution time : 32.355 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    float a[3][5],soma=0,A[3],maior,linha;
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            cout<<"Digite a posição da linha "<<i<<" coluna "<<j<<" da matriz:";
            cin>>a[i][j];
            soma+=a[i][j];
        }
        A[i]=soma;
        soma=0;
    }
    for (int i=0;i<3;i++){
        if (i==0){
            maior=A[i];
            linha=i;
        }
        if (A[i]>maior){
            maior=A[i];
            linha =i;
        }
    }
    cout<<"Maior valor somado é o da linha: "<<linha<<" Com o valor de: "<<maior;
    return 0;
    }
