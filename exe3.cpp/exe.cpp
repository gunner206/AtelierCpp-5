#include "vect.h"
using namespace std;

int main(){
    vectok vect1(5);
    for (int i = 0 ; i < vect1.taille() ; i++){
        vect1[i] = i;
    }
    vectok vect2 = vect1; //test de copier par affectation
    cout << "vect 1 :";
    for (int i = 0 ; i < vect1.taille(); i++){ 
        cout << vect1[i] << " ";
    }
    cout << endl;
    vect2[0] = 20;
    cout << "vect 2 :";
    for (int i = 0 ; i < vect2.taille(); i++){
        cout << vect2[i] << " ";
    }
    cout << endl;
    vectok vect3(vect1); // teste de copier par constructeur de copier
    vect3[1] = 100;
    cout << "vect 3 :";
    for (int i = 0 ; i < vect3.taille(); i++){
        cout << vect3[i] << " ";
    }
    cout << endl;
    return 0;
}
