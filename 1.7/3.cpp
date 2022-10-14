//Написать программу решения квадратного уравнения. Программа должна проверять правильность исходных данных и в случае, если коэффициент при второй степени неизвестного равен нулю, выводить соответствующее сообщение.

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    float d, x1, x2;
    cout << "Enter a ";
    cin >> a;
    cout << endl <<"Enter b ";
    cin >> b;
    cout << endl << "Enter c ";
    cin >> c;
    d = b*b - 4*a*c;
    if (d<0) {
        cout << "Net kornei";
    }
    else if (a==0){
        cout << "Delenie na 0";
    }
    else if (d==0){
        x1 = -b/2*a;
        cout<<x1;
    }
    else if (d>0){
        x1 = (-b + sqrt(d))/2*a;
        x2 = (-b - sqrt(d))/2*a;
        cout << "x1="<< x1 << endl << "x2=" << x2;

    }


}