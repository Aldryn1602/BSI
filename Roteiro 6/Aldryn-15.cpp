/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Quantidade de 'unhas dos p�s' da funcion�ria 0 : 1
Quantidade de 'unhas das m�os' da funcion�ria 0 : 2
Quantidade de 'servi�os de podologia' da funcion�ria 0 : 3
Quantidade de 'unhas dos p�s' da funcion�ria 1 : 1
Quantidade de 'unhas das m�os' da funcion�ria 1 : 2
Quantidade de 'servi�os de podologia' da funcion�ria 1 : 3
Quantidade de 'unhas dos p�s' da funcion�ria 2 : 1
Quantidade de 'unhas das m�os' da funcion�ria 2 : 2
Quantidade de 'servi�os de podologia' da funcion�ria 2 : 3
Quantidade de 'unhas dos p�s' da funcion�ria 3 : 1
Quantidade de 'unhas das m�os' da funcion�ria 3 : 2
Quantidade de 'servi�os de podologia' da funcion�ria 3 : 3
Quantidade de 'unhas dos p�s' da funcion�ria 4 : 1
Quantidade de 'unhas das m�os' da funcion�ria 4 : 2
Quantidade de 'servi�os de podologia' da funcion�ria 4 : 3

              P�         M�o      Podologia    Sal�rio
Funcion�ria 0 5          15          45          65
Funcion�ria 1 5          15          45          65
Funcion�ria 2 5          15          45          65
Funcion�ria 3 5          15          45          65
Funcion�ria 4 5          15          45          65

Process returned 0 (0x0)   execution time : 10.627 s
Press any key to continue.

*/#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    float pag[5][4],soma=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
                if (j==0){
            cout<<"Quantidade de 'unhas dos p�s' da funcion�ria "<<i<<" : ";
            cin>>pag[i][j];
            pag[i][j]=pag[i][j]*5;
                }
                if (j==1){
            cout<<"Quantidade de 'unhas das m�os' da funcion�ria "<<i<<" : ";
            cin>>pag[i][j];
            pag[i][j]=pag[i][j]*7.5;
                }
                if (j==2){
            cout<<"Quantidade de 'servi�os de podologia' da funcion�ria "<<i<<" : ";
            cin>>pag[i][j];
            pag[i][j]=pag[i][j]*15;
                }
        }
    }
    for(int i=0;i<5;i++){
            soma=0;
        for(int j=0;j<3;j++){
                soma+=pag[i][j];
        }
       pag[i][3]=soma;
    }
    cout<<"\n              P�         M�o      Podologia    Sal�rio"<<endl;
    for(int i=0;i<5;i++){
            cout<<"Funcion�ria "<<i<<" ";
        for(int j=0;j<4;j++){
                cout<<pag[i][j]<<"          ";
        }
        cout<<endl;
    }
    return 0;
}
