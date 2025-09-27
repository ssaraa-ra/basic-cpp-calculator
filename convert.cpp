#include <iostream>
using namespace std;

int main(){

    double celsius, farenheit;

    cout << "Enter a degree in Celsius: ";
    cin >> celsius;
    farenheit = (9.0 / 5.0) * celsius + 32;
    cout<< celsius << " Celsius is " << farenheit << " Farenheit" << endl;

    return 0;

}