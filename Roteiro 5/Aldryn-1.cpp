#include <iostream>
#include <locale>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int idade[40],soma=0,maior=0,menor=1000,j=0,k=0,i=0;

    for (i=0;i<40;i++){
        cout<<"Digite a idade do aluno em anos: ";
        cin>>idade[i];
        soma+=idade[i];
        if (idade[i]<=16){
                 j++;

        }
        else {
            k++;
        }
        if (idade[i]>maior){
            maior=idade[i];
        }
         if (idade[i]<menor){
            menor=idade[i];
        }
    }
    cout<<"Total de alunos com idade menor ou igual a 16 anos: "<<j<<endl;
    cout<<"Total de alunos com idade maior que 16 anos: "<<k<<endl;
    cout<<"Média das idades: "<<soma/40<<endl;
    cout<<"Idade do aluno mais novo: "<<menor<<endl;
    cout<<"Idade do aluno mais velho: "<<maior<<endl;
    return 0;
}
