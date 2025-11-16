#include <iostream>
using namespace std;

template <class T>
T carre(T a){
    return a * a;
}

int main(){
    int a = 2;
    float b = 2.5;
    char c = 'a';
    bool d = true;
    cout << carre(a) << endl;
    cout << carre(b) << endl;
    cout << carre(c) << endl;
    cout << carre(d) << endl;
    return 0;
}