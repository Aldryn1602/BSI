#include <iostream>
#include <locale>
#include <math.h>
const int N = 10;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    int i,j;
    float va[N],s=0,r;
    for (i=0;i<N;i++){
        cout<<"Digite a posição "<<i<<" do vetor A: ";
        cin>>va[i];
    }
    for (i=0,j=N;i<N,j>i;i++,j--){
                cout<<i<<" "<<j<<endl;

            s+=(pow((va[i]-va[j]),2));
    }
    cout<<"S = "<<s<<endl;
    return 0;
}
