#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Inserisci la dimensione del vettore: ";
    cin >> n;

    int v[n];   

    for (int i = 0; i < n; i++) {
        cout << "Inserisci l'elemento " << i + 1 << ": ";
        cin >> v[i];
    }

    //Minimo e massimo
    int min = v[0];
    int max = v[0];
    int somma = 0;

    //Calcolo minimo, massimo e somma
    for (int i = 0; i < n; i++) {
        if (v[i] < min)
            min = v[i];

        if (v[i] > max)
            max = v[i];

        somma += v[i];
    }

    //Calcolo media
    float media = (float)somma / n;

    cout << "Minimo: " << min << endl;
    cout << "Massimo: " << max << endl;
    cout << "Media: " << media << endl;

    return 0;
}
