#include <iostream>
#include <locale>
#include <math.h>
const int N = 10;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    float v[N],aux;
    int i,y;
    for (i=0;i<N;i++){
        cout<<"Digite um número para preencher o vetor: ";
        cin>>v[i];
    }
    for (i=0;i<N-1;i++){
        for(int y=i+1;y<N;y++){
            if (v[i]>v[y]){
            aux = v[i];
            v[i]= v[y];
            v[y]= aux;
                }
        }
    }
    cout<<"Crescente: "<<endl;
    for (i=0;i<N;i++){
        cout<<v[i]<<" ";
    }
     for (i=0;i<N-1;i++){
        for(int y=i+1;y<N;y++){
            if (v[i]<v[y]){
            aux = v[i];
            v[i]= v[y];
            v[y]= aux;
                }
        }
    }
    cout<<"\nDecrescente: "<<endl;
    for (i=0;i<N;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
