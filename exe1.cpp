#include <iostream>
#include <set>
#include <vector>
#include <list>
using namespace std;

bool trouverValeur(set<int>& numbers, int number){
    set<int>::iterator itr;
    for (itr = numbers.begin(); itr != numbers.end() ; itr++){
        if (*itr == number) {
            cout << "valeur trovee" << endl;
            return true;
        }
    }
    cout << "valeur non trovee" << endl;
    return false;
}

bool trouverValeur2(set<int>::iterator start, set<int>::iterator end , int number){
    set<int>::iterator itr;
    for (itr = start; itr != end ; itr++){
        if (*itr == number) {
            cout << "valeur trovee" << endl;
            return true;
        }
    }
    cout << "valeur non trovee" << endl;
    return false;
}

template<class A, class B>
bool trouverVal(A start, A end, B val){
    A itr;
    for (itr = start; itr != end ; itr++){
        if (*itr == val) {
            cout << "valeur trovee" << endl;
            return true;
        }
    }
    cout << "valeur non trovee" << endl;
    return false;
}


int main(){
    cout << "=========== 1 =========" << endl;
    set<int> numbers;
    for (int i = 1 ; i <= 100 ;i++){
        numbers.insert(i);
    }
    for (set<int>::iterator itr = numbers.begin(); itr != numbers.end() ; itr++){
        cout << *itr << " ";
    }
    cout << endl;
    cout << "========== 2 ========="<< endl;
    trouverValeur(numbers, 500);
    cout << "========== 3 ========="<< endl;
    trouverValeur2(numbers.begin(), numbers.end(), 50);
    cout << "========== 4 ========="<< endl;
    cout << "Chercher Par set" << endl;
    trouverVal(numbers.begin(), numbers.end(), 0);
    cout << "Chercher Par vector" << endl;
    vector<int> vects {1, 2 , 3, 4 , 5};
    trouverVal(vects.begin(),vects.end() ,5);
    cout << "Chercher Par list" << endl;
    list<int> list1;
    for (int i = 0 ; i < 5 ; i++){
        list1.push_back(i);
    }
    trouverVal(list1.begin(), list1.end(), 4);
    cout << "Chercher Par tableau" << endl;
    float table[5] = {1.0, 2.0, 3.0, 4.8, 5.5};
    trouverVal(&table[0], &table[5], 2.0);

    return 0;
}