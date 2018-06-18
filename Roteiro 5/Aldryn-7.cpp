#include <iostream>
#include <locale>
#include <math.h>
const int N = 8;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int nota[N],fa[11];
    float fr[11];
    int i;
    for (i=0;i<11;i++){
        fa[i]=0;
        fr[i]=0;
    }
    for (i=0;i<N;i++){
            cout<<"Digite a nota: ";
            cin>>nota[i];
            if (nota[i]<0 or nota[i]>10){
                cout<<"Nota inválida";
                cout<<"\tDigite a nota novamente: ";
                cin>>nota[i];
            }

            fa[nota[i]]++;
            fr[nota[i]]=(float (fa[nota[i]])/N)*100.0;

    }
    cout<<"Frequência abdoluta : "<<"\tFrenquência relativa: "<<endl;
    for (i=0;i<11;i++){
        cout<<"\tNota "<<i<<" : "<<fa[i]<<"\t\tNota "<<i<<" : "<<fr[i]<<"%"<<endl;
    }
return 0;
}
