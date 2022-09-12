#include<iostream>
using namespace std;

int main()
{
    int mul3,valor,f;
    mul3=0;
    for(f=1; f <= 5 ;f++) 
    {
        cout <<"Ingrese un valor:";
        cin >>valor;
        if (valor%3 == 0) 
        {
            mul3=mul3+1;
        } 
        
    }
    cout <<"Cantidad de valores ingresados múltiplos de 3:";
    cout <<mul3;
    cout <<"\n";
    
    return 0;
}
