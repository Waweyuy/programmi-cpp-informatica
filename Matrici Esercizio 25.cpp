#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int M[3][2], pari=0;
    
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
    
    //riga a -> vettore vert; colonna b -> vettore orizon
    int a=0, b=0, vert[3], orizon[2];
    
    for(int i=0; i<3; i++){
        vert[i]=M[i][a];
    }
    
    cout << "vert =   {";
    for(int i=0; i<3; i++)
        cout << vert[i] << ", ";
    cout << "\b\b} " << endl;
    

    for(int i=0; i<2; i++){
        orizon[i]=M[b][i];
    }
    
    cout << "orizon = {";
    for(int i=0; i<2; i++)
        cout << orizon[i] << ", ";
    cout << "\b\b} " << endl;
    
    
    return 0;
}