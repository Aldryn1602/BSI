#include <iostream>
#include <locale>
#include <math.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    float altura[20],media=0.0,soma=0.0;
    int i;
    for (i=0;i<20;i++){
        cout<<"Qual a altura do atleta "<<i+1<<" : ";
        cin>>altura[i];
        soma=soma+altura[i];
    }
    media=soma/20;
    cout<<media<<endl;
    cout<<"\nPoderão participar os seguintes atletas: "<<endl;
    for (i=0;i<20;i++){
        if (altura[i]>=media){
            cout<<i+1<<endl;
        }
    }
    return 0;
}
