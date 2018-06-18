#include <iostream>
#include <locale>
#include <math.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int N,M;
    cout<<"Digite NA: ";
    cin>>N;
    cout<<"Digite NB: ";
    cin>>M;

    int i,v1[N],v2[M],v[N+M];
    for (i=0;i<N;i++){
        cout<<"Digite um número para o vetor A: ";
        cin>>v1[i];
        v[2*i]=v1[i];
    }
    cout<<" ============================ "<<endl;
    for (i=0;i<M;i++){
        cout<<"Digite um número para o vetor B: ";
        cin>>v2[i];
        v[2*i+1]=v2[i];
    }
    for (i=0;i<N+M;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
