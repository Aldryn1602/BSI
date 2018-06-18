/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
3
1 3
4 2
0 2
Dario

Process returned 0 (0x0)   execution time : 14.202 s
Press any key to continue.

*/#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,d,x,cont=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d>>x;
        if ( (x == (d+1)%5) or (x == (d+2)%5) ){
                cont++;
        }
  }

  if ( cont > (n-cont) ) cout << "Dario" << endl;
  else cout <<  "Xerxes" << endl;

  return 0;
}
