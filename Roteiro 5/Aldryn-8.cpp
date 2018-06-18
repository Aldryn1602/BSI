#include <iostream>
#include <locale>
#include <math.h>
const int N = 10;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    float v1[N],v2[N],vr[N];
    for(int i=0;i<N;i++){
        cout<<"Digite um número para primeiro vetor: ";
        cin>>v1[i];
        cout<<"Digite um número para segundo vetor: ";
        cin>>v2[i];
        if (v1[i]==v2[i]){
            vr[i]=1;
        }
        else {
            vr[i]=0;
        }
    }
    cout<<"\nVetor resultante: "<<endl;
    for (int i=0;i<N;i++){
         cout<<vr[i]<<" ";
    }
cout<<endl;
return 0;
}
