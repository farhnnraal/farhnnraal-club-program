#include <stdio.h>

#define MAX_INPUT_LENGTH 10 
#define ERROR_INVALID_INPUT 1

void print_headline(int numberOfLoops) {
    if (numberOfLoops < 0) {
        return;
    }

    char headline[numberOfLoops + 1];
    for (int indexLoops = 0; indexLoops < numberOfLoops; ++indexLoops) {
        headline[indexLoops] = '=';
    }
    headline[numberOfLoops] = '\0';

    printf("%s\n", headline);
    printf("Program Konversi Suhu\n");
    printf("Farhan Raditya Al Gazali - 246661036 - TRK 1B\n");
    printf("%s\n", headline);
}

char get_unit(char inputUser[]) {
    char temperature_unit;
    sscanf(inputUser, "%*f %c", &temperature_unit);
    return temperature_unit;
}

float *temperature_convertion(float temperature_value, char temperature_unit) {
    float celsius, fahrenheit, kelvin, reaumur;
    static float all_temperature_value[4];

    switch (temperature_unit) {
        case 'C':
            celsius = temperature_value;
            fahrenheit = (temperature_value * 9 / 5) + 32;
            kelvin = temperature_value + 273.15;
            reaumur = (temperature_value * 4) / 5;
            break;
        case 'F':
            celsius = temperature_value;
            fahrenheit = (temperature_value * 9 / 5) + 32;
            kelvin = temperature_value + 273.15;
            reaumur = (temperature_value * 4) / 5;
            break;
        case 'K':
            kelvin = temperature_value;
            celsius = temperature_value - 273.15;
            reaumur = (temperature_value - 273.15) * 4 / 5;
            fahrenheit = (temperature_value - 273.15) * 9 / 5 + 32;
            break;
        case 'R':
            reaumur = temperature_value;
            celsius = temperature_value * 5 / 4;
            fahrenheit = (temperature_value * 9) / 4 + 32;
            kelvin = (temperature_value * 5) / 4 + 273.15;
            break;
        default:
            printf("Program belum mendukung satuan %c.\n", temperature_unit);
    }

    all_temperature_value[0] = celsius;
    all_temperature_value[1] = fahrenheit;
    all_temperature_value[2] = kelvin;
    all_temperature_value[3] = reaumur;

    return all_temperature_value;
}

int main() {
    char inputUser[MAX_INPUT_LENGTH];
    float temperature_value;
    char temperature_unit;

    print_headline(48);
    printf("Masukkan nilai dan satuan temperatur (Misal, '24 C' untuk 24 derajat Celsius).\n--> ");
    fgets(inputUser, MAX_INPUT_LENGTH, stdin);

    temperature_unit = get_unit(inputUser);
    if (temperature_unit == '\0') {
        printf("Masukkan satuan suhu. Seperti, C - Celsius, K - Kelvin, F - Fahrenheit, R - Reaumur");
        return ERROR_INVALID_INPUT;
    }

    sscanf(inputUser, "%f", &temperature_value);

    float *result_temperature_convertion = temperature_convertion(temperature_value, temperature_unit);
    
    printf("Celsius -> %f\n", result_temperature_convertion[0]);
    printf("Fahrenheit -> %f\n", result_temperature_convertion[1]);
    printf("Kelvin -> %f\n", result_temperature_convertion[2]);
    printf("Reaumur -> %f\n", result_temperature_convertion[3]);
}