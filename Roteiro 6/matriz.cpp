#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;

int main(){
    const int LINHA = 3, COLUNA = 4;
    float mat[LINHA][COLUNA], soma[LINHA];
    for(int i=0; i<LINHA; i++){
        soma[i] = 0;
        for(int j=0; j<COLUNA; j++){
            cout<<"Digite a posicao da linha "<<i<<" coluna "<<j<<": ";
            cin>>mat[i][j];
            soma[i]+= mat[i][j];
        }
    }

    for(int i=0; i<LINHA; i++){
        for(int j=0; j<COLUNA; j++){
           cout<<" "<<mat[i][j];
        }
        cout<<endl;
    }
    cout<<"SOMA das notas de cada aluno"<<endl;
    for(int i=0; i<LINHA; i++){
        cout<<"Soma do aluno "<<i<<" "<<soma[i]<<endl;
    }

	system("pause");
	return 0;
}
