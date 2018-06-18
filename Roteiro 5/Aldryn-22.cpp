#include <iostream>
#include <locale>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    int i,n,p=0;
    cout<<"Digite o tamanho da sequencia: ";
    cin>>n;
    int m[n];
    int na[n];

for(int i = 0; i < n; i++)
{
    na[i] = rand();    // Preenche com aleatórios no intervalo 0 ~ 32767
    na[i] = rand() % 10;
    cout << " " << na[i];
    m[i]= na[i];
}
    for (i=0;i<n;i++){
        if (i==0){
                    for (int j=0;j<=i;j++){
                        if (m[i]>m[j]){
                            p=0;
                        }
                    }
                }
        if (i>=1){
        if (m[i]<m[i-1] and m[i]<m[i+1]){
            if(i==n-1){
            if (m[i]<m[i-1]and p!=1){
                p=0;
                break;
            }
            }
            p=1;
            break;
        }
        }
    }
    if (p==1){
        cout<<"\n\tS"<<endl;
    }
    else {
        cout<<"\n\tN"<<endl;
    }
    return 0;
}
