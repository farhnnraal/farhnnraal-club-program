#include <stdio.h>

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
    printf("Program Konversi Suhu - Bahasa C\n");
    printf("Farhan Raditya Al Gazali - 246661036 - TRK 1B\n");
    printf("%s\n", headline);
}

float main() {
    float celsius, fahrenheit, kelvin, reaumur, user_input;

    print_headline(45);
    printf("Masukkan nilai suhu dalam satuan Celsius\n --> ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;
    reaumur = (celsius * 4) / 5;

    printf("\nHasil konversi suhu dari %f°C,\n", celsius);
    printf("--> Suhu Fahrenheit = %f°F\n", fahrenheit);
    printf("--> Suhu Kelvin = %fK\n", kelvin);
    printf("--> Suhu Reaumur = %f°Re\n", reaumur);
}