#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main (){
int n[10];

for(int i = 0; i < 10; i++)
{
    n[i] = rand();    // Preenche com aleat�rios no intervalo 0 ~ 32767
    n[i] = rand() % 10;
    cout << " " << n[i];
}

/*
   Para alterar os n�meros que s�o gerados em cada execu��o, � necess�rio inicializar a semente geradora do n�s aleat�rios com valores diferentes.
   A semente geradora pode ser modificada pela fun��o srand("valor").
   Com o intuito de ter sementes diferentes a cada execu��o, utiliza-se a fun��o time(NULL) presente na biblioteca time.h.

   Exemplo:

   srand(time(NULL));
   int n[10];
   for(int i = 0; i < 10; i++)
   {
    n[i] = rand();
    cout << " " << n[i];
   }


   Limitar gera��o dos n�meros aleat�rios:

    n = Limite Inferior + rand() % (Limite Superior + 1 - Limite Inferior);
*/
    Gera valores de 0 � 9
    n[i] = 5 + rand() % 10  // Gera n�meros de 5 � 9
    n[i] = -5 + rand() % 11   // Gera n�meros de -5 � 5
   }
