#include <iostream>
#include <locale>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    int n,ng,cont=0,vezes=0;
    cin>>n>>ng;
    int fita[n],gota[ng];
    for (int i=1;i<=n;i++){
        fita[i]=0;
    }
    for (int i=1;i<=ng;i++){
        cin>>gota[i];
        for (int j=1;j<=n;j++){
            if (j==gota[i]){
                fita[j]=1;
            }
        }
    }
    for (int i=1;i<=n;i++){
        cout<<fita[i]<<" ";
    }
    for (int i=1;i<=n;i++){
            for (int j=1;j<=ng;j++){
                fita[gota[j]-i]=1;
                fita[gota[j]+i]=1;
                cont++;
             if (cont==3){

                }
            }
    }
    cout<<endl;
     for (int i=1;i<=n;i++){
        cout<<fita[i]<<" ";
    }
     cout<<endl;
     cout<<cont<<endl;
     return 0;
}
