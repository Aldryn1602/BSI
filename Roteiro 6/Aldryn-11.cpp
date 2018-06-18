/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Digite o número de cidades: 4
Preencha a matriz L com 1s ou 0s:
1 1 1 0
0 1 1 0
1 0 1 1
0 0 1 1

a)
Digite a cidade k: 0
Estradas que saem: 3
Estradas que chegam: 2

b)
A cidade que possui o maior número de estradas chegando é: 2

c)
Não existe(m) cidade(s) isolada(s) !

d)
Digite por quantas cidades irá passar mesmo as repetidas: 6
Digite a rota: 0 1 2 3 2 0
É possível !

Process returned 0 (0x0)   execution time : 72.519 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    cout<<"Digite o número de cidades: ";
    cin>>n;
    int l[n][n],k,fora=0,chegam[n],maior=0,aux,cid,foras[n],f=0;
    cout<<"Preencha a matriz L com 1s ou 0s: "<<endl;
    for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin>>l[i][j];
    }
    }
    for (int j=0;j<n;j++){
            aux=0;
            for (int i=0;i<n;i++){
                if (l[i][j]==1){
                        aux++;
                }
    }
    chegam[j]=aux;
    }
    for (int i=0;i<n;i++){
            aux=0;
            for (int j=0;j<n;j++){
                if (l[i][j]==1){
                        aux++;
                }
    }
    foras[i]=aux;
    }
    cout<<"\na) "<<endl;
    cout<<"Digite a cidade k: ";
    cin>>k;
    for(int i=k;i<=k;i++){
        for (int j=0;j<n;j++){
            if (l[i][j]==1){
                fora++;
            }
        }
    }
    cout<<"Estradas que saem: "<<fora<<endl;
    fora=0;
    for(int i=0;i<n;i++){
        for (int j=k;j<=k;j++){
            if (l[i][j]==1){
                fora++;
            }
        }
    }
    cout<<"Estradas que chegam: "<<fora<<endl<<endl;
    cout<<"b)"<<endl;
            for (int j=0;j<n;j++){
                    if (chegam[j]>maior){
                        maior=chegam[j];
                        cid=j;
                    }
                    if (foras[j]==0 and chegam[j]==0){
                        f=1;
                    }
            }
        cout<<"A cidade que possui o maior número de estradas chegando é: "<<cid<<endl<<endl;
        cout<<"c)"<<endl;
        if (f==1){
            cout<<"Existe(m) cidade(s) isolada(s) !"<<endl;
        }
        else {
            cout<<"Não existe(m) cidade(s) isolada(s) !"<<endl;
        }
        cout<<endl;
        int m;
        cout<<"d)"<<endl;
        cout<<"Digite por quantas cidades irá passar mesmo as repetidas: ";
        cin>>m;
        int rota[m],r=0;
        cout<<"Digite a rota: ";
        for(int i=0;i<m;i++){
            cin>>rota[i];
        }
        for (int i=0;i<m-1;i++){
                if (l[rota[i]][rota[i+1]]==1){
                    r++;
                }
    }
    if (r==m-1){
        cout<<"É possível !"<<endl;
    }
    else {
        cout<<"Não é possível !"<<endl;
    }

    return 0;
}
