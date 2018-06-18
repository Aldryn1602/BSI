#include <iostream>
#include <math.h>
using namespace std;

float media();
float media (float a, float b, float c);
int media (float a,float b,float c);

int main (){
float resultado,num1,num2,num3;
resultado = media();
cout<<resultado<<endl;
cin>>num1>>num2>>num3;
resultado=media(num1,num2,num3);
cout<<resultado<<endl;
return 0;
}
float media(){
    cout<<"Subrotina 01"<<endl;
float n1,n2,n3;
cin>>n1>>n2>>n3;
return (n1+n2+n3)/3;
}
float media (float a, float b, float c){
cout<<"Subrotina 02"<<endl;
return (a+b+c)/3;
}
int media (float a,float b,float c){
cout<<"Subrotina 03"<<endl;
return (a+b+c)/3;
}
