#include <iostream>

using namespace std;

int main(){    
    int edad = 0;
    edad = 18; 
    const char letra = 'a';
    int lista_de_edades[] = { 18, 20, 22, 24, 26, 28,30, 32, 34 };
    lista_de_edades[1] = 100;
    cout << edad << endl;  
    cout << letra << endl;
    cout << lista_de_edades[5] << endl;
    cout << lista_de_edades[1];
}


