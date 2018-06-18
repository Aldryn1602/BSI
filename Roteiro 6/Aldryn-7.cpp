/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Matriz Gerada aleatoriamente :

 26172 11783 25841 30405 14655 30430 10252
 10964 8761  13505 27440 13631 10416 19565
 20024 3142  10362 11954 12736 13542 24110
 795   18232 25249 6104  26065 26424 17533

Menor elemento da matriz: 795

MinMax: 30430 Linha: 3 Coluna: 5

Process returned 0 (0x0)   execution time : 0.067 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    //Matriz Geradora de números aleatórios
    float m[4][7],menor,maior,linha,coluna;
    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
            m[i][j]=rand();
        }
    }
    cout<<"Matriz Gerada aleatoriamente : "<<endl<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
            cout<<" "<<m[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
            if (i==0 and j==0){
                menor=m[i][j];
                linha=0;
            }
            if (m[i][j]<menor){
                menor=m[i][j];
                linha=i;
            }
        }
    }
    for(int i=0;i<=linha;i++){
        for (int j=0;j<7;j++){
            if (i==0 and j==0){
                maior=m[i][j];
                coluna=0;
            }
            if(m[i][j]>maior){
                maior=m[i][j];
                coluna=j;
            }
        }
    }
    cout<<endl<<"Menor elemento da matriz: "<<menor<<endl;
    cout<<"\nMinMax: "<<maior<<" Linha: "<<linha<<" Coluna: "<<coluna<<endl;
    return 0;
}
