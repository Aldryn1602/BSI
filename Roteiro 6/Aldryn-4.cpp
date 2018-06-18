/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Digite a quantidade de semanas: 2
Digite a produção da semana 0 no dia 0 da fábrica: 1
Digite a produção da semana 0 no dia 1 da fábrica: 1
Digite a produção da semana 0 no dia 2 da fábrica: 2
Digite a produção da semana 0 no dia 3 da fábrica: 2
Digite a produção da semana 0 no dia 4 da fábrica: 2
Digite a produção da semana 0 no dia 5 da fábrica: 2
Digite a produção da semana 0 no dia 6 da fábrica: 2
Digite a produção da semana 1 no dia 0 da fábrica: 2
Digite a produção da semana 1 no dia 1 da fábrica: 2
Digite a produção da semana 1 no dia 2 da fábrica: 2
Digite a produção da semana 1 no dia 3 da fábrica: 2
Digite a produção da semana 1 no dia 4 da fábrica: 2
Digite a produção da semana 1 no dia 5 da fábrica: 1
Digite a produção da semana 1 no dia 6 da fábrica: 1

RELATÓRIO DE PRODUÇÃO RELATIVO Á 2 SEMANAS
----------------------------------------------------
Produção média : 1
Número de dias com produção acima da média: 10
INDICAÇÃO DOS DIAS DE MÍNIMA PRODUÇÃO:
Semana 0............ dia 0
Semana 0............ dia 1
Semana 1............ dia 5
Semana 1............ dia 6

Process returned 0 (0x0)   execution time : 20.887 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    float p[1000][7],media,maior=0,menor;
    int semanas,soma=0;
    cout<<"Digite a quantidade de semanas: ";
    cin>>semanas;
    for (int i=0;i<semanas;i++){
        for (int j=0;j<7;j++){
            cout<<"Digite a produção da semana "<<i<<" no dia "<<j<<" da fábrica: ";
            cin>>p[i][j];
            soma+=p[i][j];
        }
    }
    media=soma/(semanas*7);
     for (int i=0;i<semanas;i++){
        for (int j=0;j<7;j++){
                if (p[i][j]>media){
                        maior++;
                }
        }
     }
     cout<<"\nRELATÓRIO DE PRODUÇÃO RELATIVO Á "<<semanas<<" SEMANAS"<<endl;
     cout<<"----------------------------------------------------"<<endl;
     cout<<"Produção média : "<<media<<endl;
     cout<<"Número de dias com produção acima da média: "<<maior<<endl;
     cout<<"INDICAÇÃO DOS DIAS DE MÍNIMA PRODUÇÃO:"<<endl;
     for (int i=0;i<semanas;i++){
        for (int j=0;j<7;j++){
                if (i==0 and j==0){
                  menor=p[i][j];
                }
                if (p[i][j]<=menor){
                cout<<"Semana "<<i<<"............"<<" dia "<<j<<endl;
                }
        }
     }
     return 0;
}
