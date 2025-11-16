#ifndef VECT_H
#define VECT_H
#include <iostream>

class vect{ 
    protected : // en prévision d'une éventuelle classe dérivée
        int nelem; // nombre d'éléments
        int *adr; // adresse zone dynamique contenant les éléments
    public :
        vect(int n){    // constructeur
            nelem = n;
            adr = new int[n];
            for (int i= 0 ; i < n; i++) adr[i]=0; // initializer le tableax par 0
        } 
        ~vect() { delete[] adr;}    // destructeur
        int& operator[](int i) {    // accès à un élément par son "indice"
            return adr[i];
        }
};


class vectok:public vect{
    public:
        vectok(int n): vect(n){}
        
        vectok(const vectok &autre): vect(autre.nelem){
            for (int i = 0 ; i < nelem ; i++){
                adr[i] = autre.adr[i];
            }
        }

        vectok& operator=(const vectok &autre){
            if (this != &autre){
                if (nelem != autre.nelem){
                    delete[] adr;
                    nelem = autre.nelem;
                    adr = new int[nelem];
                }
                for (int i = 0; i < nelem ; i++){
                    adr[i] = autre.adr[i];
                }
            }
            return *this;
        }
        int taille() const{
            return nelem;
        }
};
#endif