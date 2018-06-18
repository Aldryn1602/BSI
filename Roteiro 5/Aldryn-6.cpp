#include <iostream>
#include <locale>
#include <math.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int num[100];
    int i;
    for (i=0;i<100;i++){
        cout<<"Digite um número: ";
        cin>>num[i];

    }
    cout<<"\tConjuto 1 "<<endl;
    cout<<"\t { ";
    for (i=0;i<100;i++){
        if (num[i]%2==0 and num[i]>0){
            cout<<num[i]<<" ";
        }
    }
    cout<<"}"<<endl;
   cout<<"\n\tConjuto 2 "<<endl;
    cout<<"\t { ";
    for (i=0;i<100;i++){
        if (num[i]%2!=0 or num[i]<0){
            cout<<num[i]<<" ";
        }
    }
    cout<<"}"<<endl;
    return 0;
}
