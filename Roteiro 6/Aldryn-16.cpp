/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 1
Digite o nome da planta: Pepino
Digite o codigo dessa planta: 123
Qual estoque ideal para essa planta: 50
Qual a quantidade atual em estoque: 60
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 1
Digite o nome da planta: Cenoura
Digite o codigo dessa planta: 321
Qual estoque ideal para essa planta: 55
Qual a quantidade atual em estoque: 50
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 4
Pepino | 123 | 60
Cenoura | 321 | 50 | 5
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 2
Digite o código da planta a ser retirada: 123
Digite a quantidade que irá retirar: 10
Retirada feita com sucesso!
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 4
Pepino | 123 | 50
Cenoura | 321 | 50 | 5
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 3
Digite o código da planta: 321
Digite a quantidade que irá inserir: 4
Iserido com sucesso!
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 4
Pepino | 123 | 50
Cenoura | 321 | 54 | 1
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 3
Digite o código da planta: 321
Digite a quantidade que irá inserir: 1
Iserido com sucesso!
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 4
Pepino | 123 | 50
Cenoura | 321 | 55
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 2
Digite o código da planta a ser retirada: 70
Digite a quantidade que irá retirar: 123
Esse código não existe!
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 2
Digite o código da planta a ser retirada: 123
Digite a quantidade que irá retirar: 70
Saldo de plantas insuficiente
=============================

    FLORICULTURA MRIAFLOR

=============================

  1. CADASTRAR NOVA PLANTA
  2. RETIRAR PLANTA
  3. INSERIR PLANTA
  4. IMPRIMIR RELATÓRIO
  5. SAIR

=============================

Digite a opção desejada: 5
FIM

Process returned 0 (0x0)   execution time : 264.415 s
Press any key to continue.

*/#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    string nome[50];
    char opcao;
    int planta[50][2],estoqueideal[50],codigo,np=0,retirar;
    int c;
    bool cv=false;
    for(int i=0;i<50;i++){
        for (int j=0;j<2;j++){
            planta[i][j]=0;
        }
        estoqueideal[i]=0;
    }
    do{
        cout<<"============================="<<endl<<endl;
        cout<<"    FLORICULTURA MRIAFLOR    "<<endl<<endl;
        cout<<"============================="<<endl<<endl;
        cout<<"  1. CADASTRAR NOVA PLANTA   "<<endl;
        cout<<"  2. RETIRAR PLANTA          "<<endl;
        cout<<"  3. INSERIR PLANTA          "<<endl;
        cout<<"  4. IMPRIMIR RELATÓRIO      "<<endl;
        cout<<"  5. SAIR                    "<<endl<<endl;
        cout<<"============================="<<endl<<endl;
        cout<<"Digite a opção desejada: ";
        cin>>opcao;
        switch (opcao)
        {
      case '1':
          if (np<50){
        cout<<"Digite o nome da planta: ";
        cin>>nome[np];
        cout<<"Digite o codigo dessa planta: ";
        cin>>codigo;
        for(int i=0;i<50;i++){
            if(codigo==planta[i][0]){
                cout<<"Esse código já existe!"<<endl;
                cout<<"Digite o codigo dessa planta novamente: ";
                cin>>codigo;
            }
        }
        planta[np][0]=codigo;
        cout<<"Qual estoque ideal para essa planta: ";
        cin>>estoqueideal[np];
        cout<<"Qual a quantidade atual em estoque: ";
        cin>>planta[np][1];
        np++;
          }
        break;
      case '2':
            cv=false;
            cout<<"Digite o código da planta a ser retirada: ";
            cin>>retirar;
            cout<<"Digite a quantidade que irá retirar: ";
            cin>>c;
            for(int i=0;i<50;i++){
                if (planta[i][0]==retirar){
                        cv=true;
                    if (planta[i][1]>=c){
                        planta[i][1]=planta[i][1]-c;
                        cout<<"Retirada feita com sucesso!"<<endl;
                    }
                    else{
                        cout<<"Saldo de plantas insuficiente"<<endl;
                    }
                }
            }
            if (cv==false){
                cout<<"Esse código não existe!"<<endl;
            }
            break;
      case '3':
        cv=false;
        cout<<"Digite o código da planta: ";
        cin>>retirar;
        cout<<"Digite a quantidade que irá inserir: ";
        cin>>c;
        for(int i=0;i<50;i++){
                if (planta[i][0]==retirar){
                        cv=true;
                        planta[i][1]=planta[i][1]+c;
                        cout<<"Iserido com sucesso!"<<endl;
                    }
                }
            if (cv==false){
                cout<<"Esse código não existe!"<<endl;
            }
            break;
      case '4':
        for(int i=0;i<np;i++){
                if (planta[i][1]<estoqueideal[i]){
            cout<<nome[i]<<" | "<<planta[i][0]<<" | "<<planta[i][1]<<" | "<<estoqueideal[i]-planta[i][1]<<endl;
                }
                else{
                     cout<<nome[i]<<" | "<<planta[i][0]<<" | "<<planta[i][1]<<endl;
                }
        }
                break;
      case '5':
        cout<<"FIM"<<endl;
        break;
        default :
        cout<<"\n\tOpção inválida!!!!!"<<endl;
        break;
    }
    }
    while(opcao!='5');
    return 0;
}
