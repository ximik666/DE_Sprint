//5. Написать программу, которая выводит таблицу квадратов десяти первых положительных чисел. 
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Vvedi n";
    cin >> n;
    for (int i=n;i<n+10;i++){
        cout << i << endl;
    }
}