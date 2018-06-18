#include <iostream>
#include <locale>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int n[5],i,j=4,nu[5];
    cout<<"Digite 5 valores para oreencher o vetor."<<endl;
    for (i=0;i<5;i++){
        cin>>n[i];
        nu[j]=n[i];
        j--;
    }
    cout<<"\nVetor invertido:";
    for (j=0;j<5;j++){
        cout<<" "<<nu[j];
    }
    return 0;
}
