#include <iostream>
#include <locale>
#include <math.h>
const int N=5;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int i,v[N],s=0,p=1;
    for (i=0;i<N;i++){
        cout<<"Digite um número: ";
        cin>>v[i];
    }
    for (i=0;i<N;i++){
        s=s+v[i];
        p=p*v[i];
    }
    cout<<"Somatório: "<<s<<endl;
    cout<<"Produtório: "<<p<<endl;
    return 0;
}
