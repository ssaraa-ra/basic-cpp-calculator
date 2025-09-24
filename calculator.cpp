#include <iostream>
using namespace std;

main(){

    double  num1;
    double  num2;
    char op;

    cout<< "Zgjidh dy numra" <<endl;
    cin>> num1;
    cin>> num2;

    cout<< "Zgjidh operacionin (+, -, *, /)" <<endl;
    cin>> op;

    if(op == '+'){
        cout << "Rezultati eshte: " << num1 + num2;
        }
        else if(op == '-'){
        cout << "Rezultati eshte: " << num1 - num2;
        }
        else if(op == '*'){
        cout << "Rezultati eshte: " << num1 * num2;
        }
        else if(op == '/') {
    if(num2 != 0) {
        cout << "Rezultati eshte: " << num1 / num2 << endl;
    } else {
        cout << "S'mundesh me pjesetu me 0!" << endl;
    }
}

    


}