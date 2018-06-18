#include <iostream>
#include <locale>
#include <math.h>
const int N=150;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int i,v[N],resto=0;
    for (i=100;i<=N;i++){
        v[i]=i;
        for (int j=1;j<=i;j++){
            if (v[i]%j==0){
                resto++;
            }
        }
        if (resto!=2){
           v[i]=0;
           }
        resto=0;
    }
    for (int y=100;y<150;y++){
            if (v[y]!=0){
            cout<<v[y]<<" ";
    }
    }
    return 0;
}
