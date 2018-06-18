#include <iostream>
#include <locale>
#include <math.h>
const int N = 10;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int i,j=0,y=0;
    float v1[N],v2[N],v3[2*N];
    for (i=0;i<N;i++){
        cout<<"Digite um número para o vetor 1: ";
        cin>>v1[i];
        cout<<"Digite um número para o vetor 2: ";
        cin>>v2[i];
    }
     for (i=0;i<2*N;i++){
        v3[i]=0;
     }
    for (i=0;i<2*N;i++){
        if(i%2==0){
        v3[i]=v1[j];
        j++;
            }
            if(i%2!=0){
        v3[i]=v2[y];
        y++;
            }
    }
    cout<<endl;
    cout<<"Vetor intercalado dos vetores 1 e 2: "<<endl;
     for (i=0;i<2*N;i++){
        cout<<v3[i]<<" ";
     }
     return 0;
}
