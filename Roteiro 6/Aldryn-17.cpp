/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
0 1 0 0 1
0 0 0 1 1
1 1 0 1 0
1 0 1 0 0
0 1 0 0 0
A pessoa 0 tem 4 amigos
A pessoa 1 tem 4 amigos
A pessoa 2 tem 3 amigos
A pessoa 3 tem 3 amigos
A pessoa 4 tem 2 amigos

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.

*/#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int rede[5][5],amigos[5],conta=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            rede[i][j]= 0 + rand() % 2;
        }
    }
     for(int i=0;i<5;i++){
            conta=0;
        for(int j=0;j<5;j++){
                if (i==j){
            rede[i][j]= 0 ;
                }
                if(rede[i][j]==1 or rede[j][i]==1){
                    conta++;
                }
     amigos[i]=conta;
                cout<<rede[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<"A pessoa "<<i<<" tem "<<amigos[i]<<" amigos "<<endl;
    }
    return 0;
}
