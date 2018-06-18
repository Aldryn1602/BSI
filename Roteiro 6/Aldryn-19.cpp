/*Nome: Aldryn Vianna Costa Santos BSI 1P
Exemplo Teste
6 7
...HHH.
HHH....
H.HHH..
H...HH.
H.o....
HHH.HH.
4 6

Process returned 0 (0x0)   execution time : 53.350 s
Press any key to continue.

*/#include<iostream>
#include<math.h>
#include<windows.h>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    string m[100],buf;
    int d[5] = {0,-1,0,1,0};

     int L,C,l,c,a,b;

  cin >> L >> C;

  m[0] = string(C+2,'.');
  for ( int i = 1; i <= L; i++ ){
    cin >> buf;
    m[i] = "." + buf + ".";
  }
  m[L+1] = string(C+2,'.');

  for ( int i = 1; i <= L; i++ )
    for ( int j = 1; j <= C; j++ )
      if ( m[i][j] == 'o' ) { l = i; c = j; }

  bool moveu = true;
  while ( moveu ){
    moveu = false;
    for ( int k = 0; k < 4; k++ ){
      a = l+d[k]; b = c+d[k+1];
      if ( m[a][b] == 'H' ){
	m[l][c] = '.';
	l = a; c = b;
	moveu = true;
	break;
      }
    }
  }

  cout << l << " " << c << endl;

  return 0;
}
