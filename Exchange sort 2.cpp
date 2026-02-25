#include <iostream>
using namespace std;

int main() {
    int i, j, key;
    int n= 6;
    int A[n]= {3, 5, 4, 8, 6, 9};

    for(i=1 ; i<n ; i++){
        key= A[i];
        j= i-1;

        while(j >= 0 && A[j] > key){ 
            A[j+1]= A[j];
            j= j - 1;
        }
        A[j+1]= key;
    }

    for(i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    return 0;
}
