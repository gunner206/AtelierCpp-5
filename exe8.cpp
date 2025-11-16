#include <iostream>
using namespace std;

class Stack{
    private:
        int size;
        int nbrT;
        int *Pile;
    public:
        Stack (int size = 20) : size(size), nbrT(0) {
            if (size <= 0){
                throw "inserer une taille positive";
            }
            Pile = new int[size];
        }
        Stack& operator<<(int &n){
            if (nbrT < size){
                Pile[nbrT++] = n;
            }
            return *this;
        }
        Stack& operator>>(int &n){
            if (nbrT > 0){
                n = Pile[nbrT--];
            }
            return *this;
        }
        int operator++(int){
            if (nbrT == size) return 1;
            return 0;
        }
        int operator--(int){
            if (nbrT == 0) return 1;
            return 0;
        }
        void afficheStack(){
            cout << "Stack : ";
            for (int i = 0 ; i < nbrT ; i++){
                cout << Pile[i] << " ";
            }
            cout << endl;
        }
        ~Stack(){
            delete[] Pile;
        }
};

int main(){
    int taille;
    cout << "entrer la taille de pile: ";
    cin >> taille;
    try{
        Stack p(taille);
        int n1 = 1;
        int n2 = 2;
        int n3 = 3;
        int n4 = 4;
        int val = p++;
        cout << val << endl;
        val = p--;
        cout << val << endl;
        p << n1 << n2 << n3 << n4; // ajoute a la tete 1, 2, 3
        p.afficheStack();
        p >> n4 >> n3; // supprimer de la tete 3, 2
        p.afficheStack();
    }
    catch (const char *e){
        cerr << e << endl;
        return 0;
    }
    return 0;
}