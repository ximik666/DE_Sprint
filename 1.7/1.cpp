//1. Написать программу, которая сравнивает два введённых с клавиатуры числа. Программа должна указать, какое число больше или, если числа равны, вывести соответствующее сообщение. 
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a b";
    cin >> a >> b;
    if (a<b) {
        cout << b;
    }
    else if (a>b) {
        cout <<a;
    }
    else {
        cout << "Equal";
    }
}