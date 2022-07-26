#include <iostream>

using namespace std;

int main () {
    int a = 2;
    int b = 3;

    int c = a + b;

    int d = a * b;

    bool e = a < b;

    bool f = a > b;

    int g = a+=1;

    int edades[] = { 24, 40, 7 };



    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;

    cout << sizeof(a) << endl;
    
    cout << sizeof (edades) / sizeof (edades[0]);
}