#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // convert to fahrenheit
    fahrenheit = (celsius * 1.8) + 32;

    //bring out the result
    cout << celsius << "degrees C =" << fahrenheit << "degrees F" << endl;

    //bonus: temperature warnings
    if (celsius < 0) {
        cout << "Freezing!" << endl;
    } else if (celsius > 30) {
        cout << "Hot!" << endl;
    }
    return 0;
}