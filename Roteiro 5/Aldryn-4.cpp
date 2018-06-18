#include <iostream>
#include <locale>
#include <math.h>
const int N = 10;
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    float v[N];
    int i;
    for (i=0;i<N;i++){
        v[i]=pow(i,2);
        cout<<" "<<v[i];
    }
    return 0;
}
