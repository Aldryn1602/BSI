/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Digite o nome do aluno: Aldryn
Digite a nota do aluno Aldryn na prova 0 : 7
Digite a nota do aluno Aldryn na prova 1 : 7
Digite a nota do aluno Aldryn na prova 2 : 7
Digite a nota do aluno Aldryn na prova 3 : 8
Digite a nota do aluno Aldryn na prova 4 : 10
Digite o nome do aluno: Bernardo
Digite a nota do aluno Bernardo na prova 0 : 0
Digite a nota do aluno Bernardo na prova 1 : 0
Digite a nota do aluno Bernardo na prova 2 : 3
Digite a nota do aluno Bernardo na prova 3 : 3
Digite a nota do aluno Bernardo na prova 4 : 1
Digite o nome do aluno: Caio
Digite a nota do aluno Caio na prova 0 : 5
Digite a nota do aluno Caio na prova 1 : 5
Digite a nota do aluno Caio na prova 2 : 5
Digite a nota do aluno Caio na prova 3 : 6
Digite a nota do aluno Caio na prova 4 : 6

Aluno: Aldryn Situação: APROVADO

Aluno: Bernardo Situação: REPROVADO

Aluno: Caio Situação: EXAME ESPECIAL

Process returned 0 (0x0)   execution time : 30.186 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
#include <string.h>
#include <cstdio>
#include <conio.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    float prova[10][5],soma=0,m=0,media[10];
    string alunoN[10];

    for(int i=0;i<10;i++){
            cout<<"Digite o nome do aluno: ";
            cin>>alunoN[i];
            soma=0;
            m=0;
        for(int j=0;j<5;j++){
            cout<<"Digite a nota do aluno "<<alunoN[i]<<" na prova "<<j<<" : ";
            cin>>prova[i][j];
            soma+=prova[i][j];
        }
        m=soma/5;
        media[i]=m;
    }
    for (int i=0;i<10;i++){
        if (media[i]>=7){
            cout<<"\nAluno: "<<alunoN[i]<<" Situação: APROVADO"<<endl;
        }
         if (media[i]<4){
            cout<<"\nAluno: "<<alunoN[i]<<" Situação: REPROVADO"<<endl;
        }
         if (media[i]>4 and media[i]<7){
            cout<<"\nAluno: "<<alunoN[i]<<" Situação: EXAME ESPECIAL"<<endl;
        }
    }
    return 0;
}
