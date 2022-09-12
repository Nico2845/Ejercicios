#include <iostream>
 
using namespace std;
 
int main()
{
    int numero;
 
    cout << "\nIntroduzca un numero: ";
    cin >> numero;
 
    cout << "\nMultiplos de 3 y no de 5: ";
    for( int i = 1; i <= numero; i++ ) {
        if( i % 3 == 0 && i % 5 != 0 )
            cout << i << " ";
    }
    cout << endl;
 
    return 0;
}
