#include <iostream>
#include <cmath>

using namespace std;

void area() 
{
    float result, range;

    cout << "Berapa jari-jarinya? --> ";
    cin >> range;

    result = 3.141592 * pow(range, 2);
    cout << "Hasilnya adalah --> " << result << endl; 
}

void circumference() 
{
    float result, range;

    cout << "Berapa jari-jarinya? --> ";
    cin >> range;

    // Still did't know is this actually work
    if (is_same<float, decltype(range)>::value)
    {
        result = 2 * 3.141592 * range;
        cout << "Hasilnya adalah --> " << result << endl;
    }

}

int main() 
{
    float result, range;
    int req_user;
    bool condition = true;
    char res_user;

    while (condition)
    {
        cout << "Mau hitung apa?" << endl;
        cout << "[1] Keliling Lingkaran\n[2] Luas Lingkaran" << endl << "--> ";
        cin >> req_user;

        if (req_user == 1) 
        {
            circumference();
        } 
        else if (req_user == 2) 
        {
            area();
        }
        else 
        {
            cout << "Yang bener dong." << endl;
        }

        cout << "Mau hitung dengan angka lain? [Y] - ";
        cin >> res_user;

        if (res_user != 'Y')
        {
            cout << "Sampai jumpa lain waktu...";
            condition = false;
        }
    }

}