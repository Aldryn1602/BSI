#include <iostream>
#include <locale>
#include <math.h>
const int N=20;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int i,j;
    float v[N],v1[N],aux;
    for (i=0;i<N;i++){
        cout<<"Digite um número para o vetor: ";
        cin>>v[i];
    }
    cout<<"Vetor : "<<endl;
    for (i=0;i<N;i++){
        cout<<v[i]<<" ";
    }
    for (i=0,j=N-1;i<N,j>=0;i++,j--){
        v1[j]=v[i];
    }
    cout<<"\nVetor Trocado : "<<endl;
    for (i=0;i<N;i++){
            v[i]=v1[i];
        cout<<v[i]<<" ";
    }
    return 0;
}
