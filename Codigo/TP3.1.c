#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    float numero = 0;
    float suma = 0;

    for (int i = 0; i < 25; i++) {
        printf("Ingrese un número: ");
        scanf("%f", &numero);
        suma += numero;
    }

    float promedio = suma / 25.0;

    printf("El promedio de los 25 números ingresados es: %f", promedio);

    return 0;
}
