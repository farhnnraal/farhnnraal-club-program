#include <iostream>

using namespace std;

void print_headline(int numberOfLoops) {
    if (numberOfLoops < 0) {
        return;
    }
    
    char headline[numberOfLoops + 1];
    for (int indexLoops = 0; indexLoops < numberOfLoops; ++indexLoops) {
        headline[indexLoops] = '=';
    }
    headline[numberOfLoops] = '\0';

    cout << headline << "\n";
    cout << "Program Konversi Suhu - Bahasa C++\n";
    cout << "Farhan Raditya Al Gazali - 246661036 - TRK 1B\n";
    cout << headline << "\n";
}

int main() {
    float celsius, fahrenheit, kelvin, reaumur, user_input;

    print_headline(45);
    cout << "Masukkan suhu dalam satuan celsius \n--> ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;
    reaumur = (celsius * 4) / 5;

    cout << "\nHasil konversi suhu dari " << celsius << "°C,\n";
    cout << "--> Suhu Fahrenheit " << fahrenheit << "°F\n";
    cout << "--> Suhu Kelvin " << kelvin << "K\n";
    cout << "--> Suhu Reaumur " << reaumur << "°Re\n";
}