#include <iostream>
#include <locale>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    float n[20],soma=0,s=0;
    float media,dp;

for(int i = 0; i < 20; i++)
{
    n[i] = rand();    // Preenche com aleatórios no intervalo 0 ~ 32767
    n[i] = 385 + rand() % 17;
    cout << " " << n[i];
    soma=soma+n[i];

}
media=soma/20;
cout<<"\nMédia: "<<media<<endl;
for(int i = 0; i < 20; i++)
{
    s=s+pow((n[i]-media),2);
}
dp=sqrt(s/19);
cout<<"Desvio Padrão: "<<dp<<endl;
if (dp>5){
    cout<<"O processo deve ser revidado ! "<<endl;
}
else {
    cout<<"O processo não precisa ser revisado ! "<<endl;
}
return 0;
}
