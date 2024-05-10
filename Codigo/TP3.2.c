#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int valor;
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    for (int i = 0; i < 10; i++) {
        printf("Ingrese un valor: ");
        scanf("%d", &valor);

        if (valor > 0) {
            positivos++;
        }
        else if (valor < 0) {
            negativos++;
        }
        else {
            ceros++;
        }
    }

    printf("%d valores son positivos, %d valores son negativos y %d valores son iguales a cero", positivos, negativos, ceros);
    

    return 0;
}