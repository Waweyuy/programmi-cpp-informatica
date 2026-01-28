#include <iostream>
using namespace std;

int main() {
    int x;
    int somma = 0;
    char scelta;

    do {
        cout << "Inserisci un numero intero: ";
        cin >> x;

        somma = somma + x;

        //Chiedi se vuole continuare (finché non mette Y o N)
        do {
            cout << "Vuoi continuare? (Y/N): ";
            cin >> scelta;
        } while (scelta != 'Y' && scelta != 'y' &&
                 scelta != 'N' && scelta != 'n');

    } while (scelta == 'Y' || scelta == 'y');

    //Fine
    cout << "La somma totale è: " << somma << endl;

    return 0;
}
