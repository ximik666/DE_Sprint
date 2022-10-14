//Написать программу, которая проверяет является ли год високосным.

#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if (year%400==0){
        cout << "Visokos";
    }
    else if (year%100==0) {
        cout << "Ne visokos";
    }
    else if (year%4 == 0){
        cout << "Visokos";
    }
    else {
        cout << "Ne visokos";
    }
}