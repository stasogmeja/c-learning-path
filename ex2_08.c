#include <stdio.h>

int
main(int argc, char **argv) {
    double Fahrenheit, Celsius;

    printf("Enter degrees F: ");

    if (scanf("%lf", &Fahrenheit) != 1) {
            printf("Invalid input\n");
            return 1;
        }

    Celsius = (Fahrenheit - 32.0) * 5.0 / 9.0;

    printf("In degrees C is: %.1f\n", Celsius);

    return 0;
}