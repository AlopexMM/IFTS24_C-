/* 
Realizar un diagrama que muestre en pantalla los números desde un valor inicial, hasta un valor final,
 ingresados por el usuario en forma descendente
 */

#include <iostream>

using namespace std;

main()
{
    int nroInicial, nroFinal;

    cout << "Ingrese el nro menor: ";
    cin >> nroInicial;
    cout << "Ingrese el nro mayor: ";
    cin >> nroFinal;

    for(nroFinal; nroFinal >= nroInicial; nroFinal--){
        cout << nroFinal << endl;
    }
}