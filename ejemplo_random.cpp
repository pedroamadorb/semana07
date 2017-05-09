#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //Limite maximo
    cout << "Limite Maximo de Random :" << RAND_MAX << endl << endl;
    
    //Generar numeros randoms
    for (int i=0; i < 10; i++)
    {
        cout << "numero " << i + 1 << " : " << rand() << endl;
    }
    
    //Generar 20 numeros randoms entre el 0 a 99
    for (int i=0; i < 10; i++)
    {
        cout << "numero " << i + 1 << " : " << rand() %100 << endl;
    }
    
    return 0;
}