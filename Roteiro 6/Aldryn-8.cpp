/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
Digite o n�mero de linhas da matriz: 4
Digite o n�mero de colunas da matriz: 4
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
� uma matriz permuta��o

Process returned 0 (0x0)   execution time : 22.542 s
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
    int linha,coluna;
    cout<<"Digite o n�mero de linhas da matriz: ";
    cin>>linha;
    cout<<"Digite o n�mero de colunas da matriz: ";
    cin>>coluna;
    if (linha==coluna){
        int m[linha][coluna],lin=0,colu=0,vcol[coluna],vlin[linha];
        bool ver=true;
        for (int i=0;i<linha;i++){
            for (int j=0;j<coluna;j++){
                cin>>m[i][j];
            }
        }
        for (int i=0;i<linha;i++){
            for (int j=0;j<coluna;j++){
                    if (m[i][j]==1){
                        lin++;
                    }
            }
            vlin[i]=lin;
        }
         for (int j=0;j<coluna;j++){
            for (int i=0;i<linha;i++){
                    if (m[i][j]==1){
                        colu++;
                    }
            }
            vcol[j]=colu;
        }
        for (int i=0;i<linha;i++){
            cout<<vlin[i]<<"  "<<vcol[i]<<endl;
        }
        for (int i=0;i<linha;i++){
            if (vlin[i]!=i+1 or vcol[i]!=i+1){
                    ver=false;
            }
        }
        if (ver==true){
            cout<<"� uma matriz permuta��o"<<endl;
        }
        else {
            cout<<"N�o � uma matriz permuta��o"<<endl;
        }
    }
    else {
        cout<<"� necess�rio que seja uma fun��o quadr�tica (linhas = colunas)"<<endl;
    }
    return 0;
}
