//4. Проверить на чётность введённое с клавиатуры число 
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Vvedi chislo";
    cin >> num ; 
    if (num%2==0){
        cout << "Chetnoe";
    }
    else {
        cout << "Ne chetnoe";
    }

}