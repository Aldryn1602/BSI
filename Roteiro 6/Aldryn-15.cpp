/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Quantidade de 'unhas dos pés' da funcionária 0 : 1
Quantidade de 'unhas das mãos' da funcionária 0 : 2
Quantidade de 'serviços de podologia' da funcionária 0 : 3
Quantidade de 'unhas dos pés' da funcionária 1 : 1
Quantidade de 'unhas das mãos' da funcionária 1 : 2
Quantidade de 'serviços de podologia' da funcionária 1 : 3
Quantidade de 'unhas dos pés' da funcionária 2 : 1
Quantidade de 'unhas das mãos' da funcionária 2 : 2
Quantidade de 'serviços de podologia' da funcionária 2 : 3
Quantidade de 'unhas dos pés' da funcionária 3 : 1
Quantidade de 'unhas das mãos' da funcionária 3 : 2
Quantidade de 'serviços de podologia' da funcionária 3 : 3
Quantidade de 'unhas dos pés' da funcionária 4 : 1
Quantidade de 'unhas das mãos' da funcionária 4 : 2
Quantidade de 'serviços de podologia' da funcionária 4 : 3

              Pé         Mão      Podologia    Salário
Funcionária 0 5          15          45          65
Funcionária 1 5          15          45          65
Funcionária 2 5          15          45          65
Funcionária 3 5          15          45          65
Funcionária 4 5          15          45          65

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
            cout<<"Quantidade de 'unhas dos pés' da funcionária "<<i<<" : ";
            cin>>pag[i][j];
            pag[i][j]=pag[i][j]*5;
                }
                if (j==1){
            cout<<"Quantidade de 'unhas das mãos' da funcionária "<<i<<" : ";
            cin>>pag[i][j];
            pag[i][j]=pag[i][j]*7.5;
                }
                if (j==2){
            cout<<"Quantidade de 'serviços de podologia' da funcionária "<<i<<" : ";
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
    cout<<"\n              Pé         Mão      Podologia    Salário"<<endl;
    for(int i=0;i<5;i++){
            cout<<"Funcionária "<<i<<" ";
        for(int j=0;j<4;j++){
                cout<<pag[i][j]<<"          ";
        }
        cout<<endl;
    }
    return 0;
}
