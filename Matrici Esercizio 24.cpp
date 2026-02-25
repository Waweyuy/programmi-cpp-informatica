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
    
    if(pari>0)
        cout << "true" << endl;

    return 0;

}
