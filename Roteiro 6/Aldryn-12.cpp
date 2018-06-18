/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Preencha a matriz dos produtos estocados:
 1  5  10
10  6   1
 5  7  70
 9 10   5
10  5  20

a)
Existem 16 produtos no armazém 0
Existem 17 produtos no armazém 1
Existem 82 produtos no armazém 2
Existem 24 produtos no armazém 3

b)
O armazém com maior número de produtos 2 é o amazém: 2 com 70 produtos

c)
O armazém 0 tem o menor estoque com 16 produtos

d)
O armazém 2 possui o maior custo de estocagem com custo de 1485 reais

Process returned 0 (0x0)   execution time : 37.879 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[5][3], maior, menor, custo[4],soma=0,s[4],lin,c;
    cout<<"Preencha a matriz dos produtos estocados: "<<endl;
    for(int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            cin>>m[i][j];
        }
    }
    cout<<"\na)"<<endl;
    for(int i=0;i<4;i++){
        soma=0;
        for (int j=0;j<3;j++){
                soma+=m[i][j];
        }
        cout<<"Existem "<<soma<<" produtos no armazém "<<i<<endl;
        s[i]=soma;
    }
    cout<<endl;
    cout<<"b)"<<endl;
    for(int i=2;i<3;i++){
        for (int j=0;j<4;j++){
                if(j==0){
                   maior=m[j][i];
                   lin=j;
                }
           if(m[j][i]>maior){
                    maior=m[j][i];
                    lin=j;
           }
        }
    }
    cout<<"O armazém com maior número de produtos 2 é o amazém: "<<lin<<" com "<<maior<<" produtos "<<endl;
    cout<<endl;
    cout<<"c)"<<endl;
    for(int i=0;i<4;i++){
                if(i==0){
                   menor=s[i];
                   lin=i;
                }
           if(s[i]<menor){
                    menor=s[i];
                    lin=i;
           }
        }
    cout<<"O armazém "<<lin<<" tem o menor estoque com "<<menor<<" produtos "<<endl;
    cout<<endl;
    cout<<"d)"<<endl;
    for(int i=0;i<4;i++){
            soma=0;
        for (int j=0;j<3;j++){
            soma+=m[i][j]*m[4][j];
        }
        custo[i]=soma;
    }
    for (int i=0;i<4;i++){
        if (i==0){
            maior=custo[i];
            lin=i;
        }
        if (custo[i]>maior){
            maior= custo[i];
            lin=i;
        }
    }
    cout<<"O armazém "<<lin<<" possui o maior custo de estocagem com custo de "<<maior<<" reais "<<endl;
    return 0;
}
