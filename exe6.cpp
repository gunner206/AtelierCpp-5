#include <iostream>
using namespace std;

template <class T> class point
{
    T x, y ; // coordonnees
    public :
        point (T abs, T ord) { x = abs ; y = ord ; }
        void affiche () ;
};
template <class T> void point<T>::affiche (){
    cout << "Coordonnees : " << x << " " << y << "\n" ;
}
int main(){
    point<int> p(60, 65);
    p.affiche();
    return 0;
}

// a. que se passe-t-il avec ces instructions:
// point<char>p (60, 65) --> x = '<', y = 'A' conversion ASCII int -> char
// p.affiche();  --> Coordonnees : < A
// b. changer point<char> par point<int>