#include <iostream>
#include <locale>
#include <math.h>
const int N=30;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int i,fora=0;
    float nota[N],qual[N];
    for (i=0;i<N;i++){
        cout<<"Digite a nota do aluno : ";
        cin>>nota[i];
        if (nota[i]<0 or nota[i]>10){
         fora++;
         qual[fora]=nota[i];
        }
    }
    cout<<"Notas fora da faixa: "<<endl;
    for (i=1;i<=fora;i++){
        cout<<qual[i]<<" ";
    }
    cout<<"\nQuantidade de notas fora da faixa: "<<fora<<endl;
    return 0;
}
