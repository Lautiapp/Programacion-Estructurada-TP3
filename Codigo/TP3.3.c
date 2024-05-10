#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int valor = 0;
    int sumaGeneral = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int contadorPares = 0;
    int contadorImpares = 0;

    for (int i = 0; i < 8; i++){
        printf("Ingrese un valor: ");
        scanf("%d", &valor);

        sumaGeneral += valor;

        if ((valor != 0) && (valor % 2 == 0)){
            sumaPares += valor;
            contadorPares++;
        }
        else if (valor % 2 != 0) {
            sumaImpares += valor;
            contadorImpares++;
        }
    }

    float promedioGeneral = (float)sumaGeneral / 8.0;
    float promedioPares = (float)sumaPares / (float)contadorPares;
    float promedioImpares = (float)sumaImpares / (float)contadorImpares;

    if (promedioGeneral > 15) {
        printf("El promedio general es mayor a 15, su valor es: %f\n", promedioGeneral);
        if (promedioPares > 15) {
            printf("El promedio de los números pares es mayor a 15, su valor es: %f\n", promedioPares);
            if (promedioImpares > 15) {
                printf("El promedio de los números impares es mayor a 15, su valor es: %f", promedioImpares);
    }
    }
    }
    else {
        printf("Ningún promedio es mayor a 15");
    }

    return 0;
}
