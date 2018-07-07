#include <iostream>
#include <stdlib.h>

using namespace std;

// variables caracteres
char letra_1 = 'Javier Vazquez'; // Solo imprime el ultimo char, debe ponerse comilla simple
char* letra_2 = "Javier Vazquez"; // Imprime todo el string, se pone comilla doble


int main() {
    
    cout << "LETRA_1: " << letra_1 << "\n\n" << endl;
    cout << "LETRA_2: " << letra_2 << "\n\n" << endl;
    system("PAUSE");
    return 0;
}
