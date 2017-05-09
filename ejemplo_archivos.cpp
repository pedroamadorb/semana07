#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    //Pedir nombre del archivo
    string narchivo;
    cout << "Ingrese el nombre del archivo : ";
    cin >> narchivo;
    
    ofstream archivo(narchivo);
    
    //Pedir la cantidad de numeros a generar
    
    int a = 0;
    
    cout << "Ingrese la cantidad de numeros de archivos: ";
    cin >> a;
    
    for (int i=0; i < a; i++)
    {
        archivo << "numero " << i + 1 << " : " << rand() << endl;
    }
    
    archivo.close();
    
    
    
    
    
    //Pedir limite del rango y validar que sea mayor a RAD_MAX
    
    //Generar numeros aleatorios que deberan ser guardados en el archivo
    
    //Cerrar el archivo
    
    
    
    
    
    
    
    
    return 0;
}