/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
393 394 387 390 389 385
386 392 393 385 387 391
386 394 393 386 386 386
385 385 385 392 392 386
393 393 387 393 394 388
389 387 387 393 392 386
393 385 386 385 385 394
387 391 393 385 385 385
393 388 385 394 385 386
385 390 385 385 386 385
386 387 387 392 394 390
393 392 386 394 389 393
393 392 393 385 387 394
389 388 394 391 393 391
389 389 390 394 389 392
386 388 392 393 388 393
391 390 389 393 388 392
386 386 387 389 391 392
386 385 386 390 392 394
386 388 394 389 391 389

A Média da linha 0 : 388.75
Desvio Padrão da linha 0 : 3.22613

A Média da linha 1 : 389.2
Desvio Padrão da linha 1 : 2.96648

A Média da linha 2 : 388.95
Desvio Padrão da linha 2 : 3.39466

A Média da linha 3 : 389.9
Desvio Padrão da linha 3 : 3.52286

A Média da linha 4 : 389.15
Desvio Padrão da linha 4 : 3.0483

A Média da linha 5 : 389.6
Desvio Padrão da linha 5 : 3.40897

Process returned 0 (0x0)   execution time : 0.108 s
Press any key to continue.

*/
#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    float lata[20][6],soma=0,s[6],dp[6],Lprod[6];
    for (int i=0;i<6;i++){
        s[i]=0;
    }
    for (int j=0;j<6;j++){
        soma=0;
        for (int i=0;i<20;i++){
            lata[i][j]= 385 + rand() % 10;
            soma+=lata[i][j];
        }
        Lprod[j]=soma/20;
    }
    for (int i=0;i<20;i++){
        for (int j=0;j<6;j++){
                cout<<lata[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int j=0;j<6;j++){
        for (int i=0;i<20;i++){
        s[j]=s[j]+pow((lata[i][j]-Lprod[j]),2);
    }
    dp[j] =sqrt(s[j]/19);
    cout<<"\nA Média da linha "<<j<<" : "<<Lprod[j]<<endl;
    cout<<"Desvio Padrão da linha "<<j<<" : "<<dp[j]<<endl;
    }
    return 0;
}
