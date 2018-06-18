#include <iostream>
#include <locale>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int f[100],i,n,aux=1;
    cout<<"Digite quantos números da sequência que você deseja imprimir: ";
    cin>>n;
    for (i=1;i<=n;i++){

            f[i]=f[i-1]+f[i-2];
            f[0]=0;
            f[1]=1;
            cout<<" "<<f[i];

    }
    return 0;
}
