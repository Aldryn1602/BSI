/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
1 2 3 4
2 1 2 3
3 2 1 4
4 3 4 1
É uma matriz simétrica!

Process returned 0 (0x0)   execution time : 27.032 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    float m[4][4],g=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cin>>m[i][j];
        }
    }

    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (m[i][j] != m[j][i]){
                g++;
            }
        }
    }
    if (g==0){
        cout<<"É uma matriz simétrica!"<<endl;
    }
    else {
        cout<<"Não é uma matriz simétrica!"<<endl;
    }
    return 0;
}
