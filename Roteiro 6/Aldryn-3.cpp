/*Nome: Aldryn Vianna Costa Santos BSI 1P
Digite o número de linhas da matriz B: 4
Digite o número de coluna da matriz B: 2
Digite a posicao da linha 0 coluna 0 da matriz A: 1
Digite a posicao da linha 0 coluna 1 da matriz A: 1
Digite a posicao da linha 0 coluna 2 da matriz A: 1
Digite a posicao da linha 0 coluna 3 da matriz A: 1
Digite a posicao da linha 1 coluna 0 da matriz A: 1
Digite a posicao da linha 1 coluna 1 da matriz A: 1
Digite a posicao da linha 1 coluna 2 da matriz A: 1
Digite a posicao da linha 1 coluna 3 da matriz A: 1
Digite a posicao da linha 2 coluna 0 da matriz A: 1
Digite a posicao da linha 2 coluna 1 da matriz A: 1
Digite a posicao da linha 2 coluna 2 da matriz A: 1
Digite a posicao da linha 2 coluna 3 da matriz A: 1
Digite a posicao da linha 0 coluna 0 da matriz B: 2
Digite a posicao da linha 0 coluna 1 da matriz B: 2
Digite a posicao da linha 1 coluna 0 da matriz B: 2
Digite a posicao da linha 1 coluna 1 da matriz B: 2
Digite a posicao da linha 2 coluna 0 da matriz B: 2
Digite a posicao da linha 2 coluna 1 da matriz B: 2
Digite a posicao da linha 3 coluna 0 da matriz B: 2
Digite a posicao da linha 3 coluna 1 da matriz B: 2
88
88
88

 */

#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    float a[3][4],soma=0;
    int linha,coluna;
    cout<<"Digite o número de linhas da matriz B: ";
    cin>>linha;
    cout<<"Digite o número de coluna da matriz B: ";
    cin>>coluna;
    float b[100][100],multimatriz[100][100];
    if (linha==4){
        for (int i=0;i<3;i++){
            for (int j=0;j<4;j++){
                cout<<"Digite a posicao da linha "<<i<<" coluna "<<j<<" da matriz A: ";
                cin>>a[i][j];
            }
        }
        for (int i=0;i<linha;i++){
            for (int j=0;j<coluna;j++){
                cout<<"Digite a posicao da linha "<<i<<" coluna "<<j<<" da matriz B: ";
                cin>>b[i][j];
            }
        }
        for(int i=0; i<3; i++){
            for(int j =0; j<coluna; j++){
                multimatriz[i][j]=0;
                for(int z=0; z<linha; z++){
                    multimatriz[i][j]+=(a[i][z]*b[z][j]);
                }
            }
        }
    }
    else {
        cout<<"Matriz B inválida";
    }
    for(int i=0; i<3; i++){
            for(int j =0; j<coluna; j++){
                cout<<multimatriz[i][j];
            }
            cout<<endl;
    }
    return 0;
}
