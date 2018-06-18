#include <iostream>
#include <math.h>
#include <windows.h>
#include <locale>
using namespace std;
    const int tam1=100,tam2=2;
void menu ();
void cadastro(float conta[tam1][tam2],int &cont);
bool pesquisaconta(float conta[tam1][tam2],int cont,int codigo);
void imprimecontas(float conta[tam1][tam2],int cont);
void imprimecontatal(float conta[tam1][tam2],int cont);
void sacaremconta(float conta[tam1][tam2],int cont);
void depositaremconta(float conta[tam1][tam2],int cont);

int main (){
    setlocale(LC_ALL,"Portuguese");
    int opcao,cont=0;
    float conta[tam1][tam2];
    do {

        menu();
        cin>>opcao;
        system("cls"); //Para limpar a tela do DOS
        switch(opcao)
        {
            case 1: cadastro(conta,cont);
            cout<<"Contas cadastradas: "<<cont<<endl;
            break;
            case 2: imprimecontas(conta,cont);
            break;
            case 3: imprimecontatal(conta,cont);
            break;
            case 4: sacaremconta(conta, cont);
            break;
            case 5:  depositaremconta(conta, cont);
            break;
            case 6: cout<<"Agradecemos a preferência!"<<endl;
        }
    }
    while(opcao!=6);
    return 0;

}
void menu(){
    cout<<"======================================================="<<endl<<endl;
    cout<<" MENU : BANCO IFMG - Instituto Federal de Minas Gerais "<<endl<<endl;
    cout<<"======================================================="<<endl<<endl;
    cout<<"1- Cadastrar Conta"<<endl;
    cout<<"2- Imprimir Contas"<<endl;
    cout<<"3- Pesquisa Conta"<<endl;
    cout<<"4- Sacar em Conta"<<endl;
    cout<<"5- Depositar em Conta"<<endl;
    cout<<"6- Sair"<<endl<<endl;
    cout<<"======================================================="<<endl;
}

void cadastro(float conta[tam1][tam2],int &cont){
int codigo;
bool pesquisa;
cout<<"Digite o codigo a ser cadastrado: ";
cin>>codigo;
pesquisa=pesquisaconta(conta,cont,codigo);
if (pesquisa==false){
    conta[cont][0]=codigo;
    conta[cont][1]=0;
    cont++;
    cout<<"Conta cadastrada com sucesso!"<<endl;
}
else {
    cout<<"Esta conta ja existe CARA"<<endl;
}

}

bool pesquisaconta(float conta[tam1][tam2],int cont,int codigo){
    void imprimecontas(float conta[tam1][tam2],int codigo);
for(int i=0;i<cont;i++){
    if(conta[i][0]==codigo){
        return true;
    }
}
return false;
}

void imprimecontas(float conta[tam1][tam2],int cont){
cout<<"CONTAS CADASTRADAS"<<endl;
cout<<"Código   Saldo"<<endl;
for(int i=0;i<cont;i++){
    cout<<conta[i][0]<<"          "<<conta[i][1]<<endl;
}
system("Pause");
system("cls");
}
void imprimecontatal(float conta[tam1][tam2],int cont){
int codigo;
bool pesquisa;
cout<<"Qual o codigo da conta deseja saber: "<<endl;
cin>>codigo;
pesquisa=pesquisaconta(conta,cont,codigo);
if (pesquisa==true){
        cout<<"Código   Saldo"<<endl;
    for(int i=0;i<cont;i++){
            if(conta[i][0]==codigo){
    cout<<conta[i][0]<<"          "<<conta[i][1]<<endl;
            }
}
system("Pause");
system("cls");
}
else {
    cout<<"O codigo da conta digitada não existe!"<<endl;
}
}
void sacaremconta(float conta[tam1][tam2],int cont){
int codigo,saque;
bool pesquisa;
cout<<"Digite o codigo da conta que deseja sacar: "<<endl;
cin>>codigo;
pesquisa=pesquisaconta(conta,cont,codigo);
if (pesquisa==true){
    cout<<"Digite quanto deseja sacar: "<<endl;
    cin>>saque;
    for (int i=0;i<cont;i++){
        if (conta[i][0]==codigo){
                if( conta[i][1]>=saque){
                    conta[i][1]=conta[i][1]-saque;
                    cout<<"Saque realizado com sucesso!"<<endl;
            }
                else {
                    cout<<"Saldo insuficiente!"<<endl;
                }
        }
    }
}
else {
    cout<<"O codigo da conta digitada não existe!"<<endl;
}
system("Pause");
system("cls");
}
void depositaremconta(float conta[tam1][tam2],int cont){
int codigo,deposito;
bool pesquisa;
cout<<"Digite o codigo da conta que deseja depositar: "<<endl;
cin>>codigo;
pesquisa=pesquisaconta(conta,cont,codigo);
if (pesquisa==true){
    cout<<"Digite quanto deseja depositar: "<<endl;
    cin>>deposito;
    for (int i=0;i<cont;i++){
        if (conta[i][0]==codigo){
                conta[i][1]=conta[i][1]+deposito;
                    cout<<"Depósito realizado com sucesso!"<<endl;
            }
}
system("Pause");
system("cls");
}
else {
    cout<<"O codigo da conta digitada não existe!"<<endl;
}
}

