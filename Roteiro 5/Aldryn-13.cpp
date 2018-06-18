#include <iostream>
#include <locale>
#include <math.h>
const int N=10;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");

    int i,v1[N],v2[N],v[N];
    for (i=0;i<N;i++){
        cout<<"Digite um número para o vetor A: ";
        cin>>v1[i];
    }
    cout<<" ============================ "<<endl;
    for (i=0;i<N;i++){
        cout<<"Digite um número para o vetor B: ";
        cin>>v2[i];
        v[i]=v1[i]+v2[i];
    }
    for (i=0;i<N;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
