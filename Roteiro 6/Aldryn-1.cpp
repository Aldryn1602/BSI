/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Digite a posicao da linha 0 coluna 0 da matriz A: 4
Digite a posicao da linha 0 coluna 1 da matriz A: 5
Digite a posicao da linha 1 coluna 0 da matriz A: 1
Digite a posicao da linha 1 coluna 1 da matriz A: 1
20 25
5 5

Process returned 0 (0x0)   execution time : 5.097 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    float maior,a[2][2];
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<"Digite a posicao da linha "<<i<<" coluna "<<j<<" da matriz A: ";
                cin>>a[i][j];
                if (i==0 and j==0){
                    maior=a[i][j];
                }
                if (a[i][j]>maior){
                    maior=a[i][j];
                }
    }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
                cout<<a[i][j]*maior<<" ";
        }
        cout<<endl;
    }
    return 0;
}
