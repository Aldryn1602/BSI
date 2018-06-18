#include <iostream>
#include <locale>
#include <math.h>
#include <cmath>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int t,j,auxdireita=0,auxesquerda=0,op=0;
    cin>>t;
    if (t>=3 and t<=10000){
    int v[10000],n;
    for (int i=0;i<t;i++){
        cin>>v[i];
    }

    for (int i=0;i<t;i++){
        if(v[i]!=0){
                op=i;
            while (v[op]!=0){
                    op++;
                auxdireita++;
            }
            op=i;
        while (v[op]!=0){
                op--;
                auxesquerda++;
            }
        if (auxdireita<auxesquerda){
            j=auxdireita;
        }
        else
        {
            j=auxesquerda;
        }
        auxdireita=0;
        auxesquerda=0;
        v[i]=j;
        }
    }

    for (int i=0;i<t;i++){
         cout<<" "<<v[i];
    }

    }
    else {

    return 0;
}
return 0;
}
