/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste

=======================================

             MARIAS UNIDAS

=======================================

  a. Vender passagem
  b. Mostrar mapa de ocupação do ônibus
  c. Encerrar

=======================================
Digite a opção desejada : a
Qual a poltrona desejada : 36
Venda efetivada!

=======================================

             MARIAS UNIDAS

=======================================

  a. Vender passagem
  b. Mostrar mapa de ocupação do ônibus
  c. Encerrar

=======================================
Digite a opção desejada : a
Qual a poltrona desejada : 36
Poltrona ocupada

=======================================

             MARIAS UNIDAS

=======================================

  a. Vender passagem
  b. Mostrar mapa de ocupação do ônibus
  c. Encerrar

=======================================
Digite a opção desejada : b

Assentos na janela
Poltrona 1 Status: 0
Poltrona 2 Status: 0
Poltrona 3 Status: 0
Poltrona 4 Status: 0
Poltrona 5 Status: 0
Poltrona 6 Status: 0
Poltrona 7 Status: 0
Poltrona 8 Status: 0
Poltrona 9 Status: 0
Poltrona 10 Status: 0
Poltrona 11 Status: 0
Poltrona 12 Status: 0
Poltrona 37 Status: 0
Poltrona 38 Status: 0
Poltrona 39 Status: 0
Poltrona 40 Status: 0
Poltrona 41 Status: 0
Poltrona 42 Status: 0
Poltrona 43 Status: 0
Poltrona 44 Status: 0
Poltrona 45 Status: 0
Poltrona 46 Status: 0
Poltrona 47 Status: 0
Poltrona 48 Status: 0

Assentos no corredor
Poltrona 13 Status: 0
Poltrona 14 Status: 0
Poltrona 15 Status: 0
Poltrona 16 Status: 0
Poltrona 17 Status: 0
Poltrona 18 Status: 0
Poltrona 19 Status: 0
Poltrona 20 Status: 0
Poltrona 21 Status: 0
Poltrona 22 Status: 0
Poltrona 23 Status: 0
Poltrona 24 Status: 0
Poltrona 25 Status: 0
Poltrona 26 Status: 0
Poltrona 27 Status: 0
Poltrona 28 Status: 0
Poltrona 29 Status: 0
Poltrona 30 Status: 0
Poltrona 31 Status: 0
Poltrona 32 Status: 0
Poltrona 33 Status: 0
Poltrona 34 Status: 0
Poltrona 35 Status: 0
Poltrona 36 Status: 1

=======================================

             MARIAS UNIDAS

=======================================

  a. Vender passagem
  b. Mostrar mapa de ocupação do ônibus
  c. Encerrar

=======================================
Digite a opção desejada : c
FIM

Process returned 0 (0x0)   execution time : 29.178 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    int lugar,p,poltrona[49];
    char opcao;
    for(int i=0;i<=48;i++){
        poltrona[i]=0;
    }
    do {
        cout<<"\n======================================="<<endl<<endl;
        cout<<"             MARIAS UNIDAS             "<<endl<<endl;
        cout<<"======================================="<<endl<<endl;
        cout<<"  a. Vender passagem "<<endl;
        cout<<"  b. Mostrar mapa de ocupação do ônibus"<<endl;
        cout<<"  c. Encerrar"<<endl<<endl;
        cout<<"======================================="<<endl;
        cout<<"Digite a opção desejada : ";
        cin>>opcao;
        switch (opcao)
        {
     case 'a':
        for(int i=1;i<=48;i++){
            if(poltrona[i]==0){
                lugar=1;
            }
        }
        if (lugar==1){
            cout<<"Qual a poltrona desejada : ";
            cin>>p;
            if(poltrona[p]==0){
                cout<<"Venda efetivada!"<<endl;
                poltrona[p]=1;
            }
            else {
                cout<<"Poltrona ocupada"<<endl;
            }
        }
        else {
            cout<<"O õnibusa está lotado"<<endl;
        }
            break;
     case 'b':
         cout<<"\nAssentos na janela"<<endl;
        for(int i=1;i<=12;i++){
            cout<<"Poltrona "<<i<<" Status: "<<poltrona[i]<<endl;
        }
        for(int i=37;i<=48;i++){
            cout<<"Poltrona "<<i<<" Status: "<<poltrona[i]<<endl;
        }
        cout<<"\nAssentos no corredor"<<endl;
        for(int i=13;i<=36;i++){
            cout<<"Poltrona "<<i<<" Status: "<<poltrona[i]<<endl;
        }
        break;
     case 'c':
        cout<<"FIM"<<endl;
        break;
        default :
        cout<<"\n\tOpção inválida!!!!!"<<endl;
        break;
        }
        }
        while (opcao!='c');
        return 0;
}
