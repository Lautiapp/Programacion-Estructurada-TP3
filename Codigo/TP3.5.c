#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    char patente[20];
    int montoMulta;
    int superaCuenta = 0;
    int acumuladorSuperaCuenta = 0;
    int totalCobrado = 0;

    for (int i = 0; i < 5; i++){
        printf("Ingrese una patente: ");
        scanf("%s", &patente);

        printf("Ingrese el monto de la multa: ");
        scanf("%d", &montoMulta);

        totalCobrado += montoMulta;

        if (montoMulta > 40) {
            acumuladorSuperaCuenta++;
            superaCuenta += montoMulta;
        }
    }

    float porcentajeSuperaCuenta = ((float)superaCuenta * 100.0) / (float)totalCobrado;

    printf("La cantidad de montos que superan los $50 es de: %d y representan el %c%f del total cobrado", acumuladorSuperaCuenta, 37, porcentajeSuperaCuenta);

    return 0;
}
