#include <iostream>
#include <locale>
#include <math.h>
const int N=10;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int i,y,fat=1,v[N];
    for (i=0;i<N;i++){
        cout<<"Digite um número: ";
        cin>>v[i];
        fat=1;
        if (v[i]==0){
            fat=0;
        }
        for (y=1;y<=v[i];y++){
            fat=fat*y;
        }
         v[i]=fat;
    }
    for (i=0;i<N;i++){
            cout<<v[i]<<" ";
    }
    return 0;
}
