#include <iostream>
#include <locale>
#include <math.h>
const int N = 5;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int i,vs[N];
    float va[N],menor=1000,maior=0,soma=0,media,mediah,somah=0,mediam,somam=0,mulher=0,homem=0;
    for (i=0;i<5;i++){
        cout<<"Digite 1 para sexo Masculino e 2 para Feminino: ";
        cin>>vs[i];
        cout<<"Digite a altura da pessoa: ";
        cin>>va[i];
        if (va[i]>maior){
            maior=va[i];
        }
        if (va[i]<menor){
            menor=va[i];
        }
        soma+=va[i];
        if (vs[i]==1){
            homem++;
            somah+=va[i];
        }
        if (vs[i]==2){
            mulher++;
            somam+=va[i];
        }
    }
    media=soma/N;
    mediah=somah/homem;
    mediam=somam/mulher;
    cout<<"Média das alturas da turma: "<<media<<endl;
    cout<<"Menor altura da turma: "<<menor<<endl;
    cout<<"Maior altura da turma: "<<maior<<endl;
    cout<<"Mulheres com altura acima da média da altura dos homens: "<<endl;
    for (i=0;i<N;i++){
        if (vs[i]==2){
            if (va[i]>mediah){
                cout<<va[i]<<" ";
            }
        }
    }
    cout<<"\nHomens com a altura abaixo da media da altura das mulheres: "<<endl;
    for (i=0;i<N;i++){
         if (vs[i]==1){
            if(va[i]<mediam){
                cout<<va[i]<<" ";
            }
        }
    }
    cout<<"\nPessoas com a altura abaixo da media da turma: "<<endl;
    for (i=0;i<N;i++){
            if(va[i]<media){
                cout<<va[i]<<" ";
            }
    }
    return 0;
}
