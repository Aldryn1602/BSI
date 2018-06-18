#include <iostream>
#include <locale>
#include <math.h>
#include <stdlib.h>
#include <time.h>
const int n = 10;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    int cod[n],i,codigo;
    float saldo[n],ope,depo,saque;
    bool ac;
    for (i=0;i<n;){
        cout<<"Digite o código da conta: ";
        cin>>codigo;
        ac=false;
        for (int j=0;j<=i;j++){
            if (codigo==cod[j]){
                ac=true;
                break;
            }
        }
        if (ac==false){
            cod[i]=codigo;
            cout<<"Digite o saldo da conta: ";
            cin>>saldo[i];
            i++;
        }
    }
    cout<<"\n\t========= Menu ========="<<endl;
    cout<<"\t1 - Depósito \t2 - Saque \n\t3 - Saldo \t4 - Sair."<<endl;
    cin>>ope;
    if (ope==1){
        cout<<"Qual a conta para depósito: ";
        cin>>codigo;ac=false;
        for (i=0;i<n;i++){
            if (codigo==cod[i]){
                cout<<"Digite o valor do depósito: ";
                cin>>depo;
                saldo[i]+=depo;
                ac=true;
            }
        }
        if (ac==false){
            cout<<"A conta não existe"<<endl;
        }
    }
    if (ope==2){
        cout<<"Qual a conta para saque: ";
        cin>>codigo;ac=false;
        for (i=0;i<n;i++){
            if (codigo==cod[i]){
                cout<<"Digite o valor do saque: ";
                cin>>saque;
                ac=true;
                if (saque<=saldo[i]){
                saldo[i]-=saque;
            }
            else {
                cout<<"Não á saldo suficiente para a operação"<<endl;
            }
            }
        }
        if (ac==false){
            cout<<"A conta não existe"<<endl;
        }
    }
    if (ope==3){
        cout<<"Qual a conta para consulta: ";
        cin>>codigo;ac=false;
        for (i=0;i<n;i++){
            if (codigo==cod[i]){
                ac=true;
                cout<<"Saldo é : "<<saldo[i]<<endl;
            }
        }
        if (ac==false){
            cout<<"A conta não existe"<<endl;
        }
    }
    if (ope==4){
        return 0;
    }
    return 0;
}
