#include <iostream>
using namespace std;

int main() {
    int R = 4;
    int C = 5;
    int matrice[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            matrice[i][j] = i * 10 + j * 2;
        }
    }

    //stampa
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << matrice[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
