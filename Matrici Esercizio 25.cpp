#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int M[3][2], pari=0;
    srand(time(0));
    
    //assegnazione
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            M[i][j] = rand()%10+1;
        }
    }
    
    //stampa a video
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            if(M[i][j]<10)
                cout << " ";
            cout<<M[i][j]<<" ";
            if((M[i][j])%2==0){
                pari++;
            }
        }
        cout<<endl;
    }
    
    //c'è un numero pari?
    if(pari>0)
        cout << "true" << endl;
   
    int vert[3] = {0};
    int orizon[2] = {0};

    //somme
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
        vert[i] += M[i][j];     //somma riga i
        orizon[j] += M[i][j];   //somma colonna j
     }
}

    //stampa vert
    cout << "vert =   {";
    for(int i = 0; i < 3; i++)
        cout << vert[i] << ", ";
    cout << "\b\b}" << endl;

    //stampa orizon
    cout << "orizon = {";
    for(int i = 0; i < 2; i++)
        cout << orizon[i] << ", ";
    cout << "\b\b}" << endl;

        return 0;
    
}

