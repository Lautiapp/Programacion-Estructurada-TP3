#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
  int valor;
  int primerGrupo = 0;
  int segundoGrupo = 0;
  int tercerGrupo = 0;
  int cuartoGrupo = 0;

  for (int i = 0; i < 30; i++) {
    printf("Ingrese un valor: ");
    scanf("%d", &valor);

    if (valor > 0 && valor < 11) {
        primerGrupo++;
    }
    else if (valor > 10 && valor < 21) {
        segundoGrupo++;
    }
    else if (valor > 20 && valor < 31) {
        tercerGrupo++;
    }
    else if (valor > 30) {
        cuartoGrupo++;
    }
  }

    float porcentajePrimerGrupo = ((float)primerGrupo * 100.0) / 30.0;
    float porcentajeSegundoGrupo = ((float)segundoGrupo * 100.0) / 30.0;
    float porcentajeTercerGrupo = ((float)tercerGrupo * 100.0) / 30.0;
    float porcentajeCuartoGrupo = ((float)cuartoGrupo * 100.0) / 30.0;

    printf("El porcentaje de valores ingresados entre 1 y 10 respecto del total es: %f\n", porcentajePrimerGrupo);
    printf("El porcentaje de valores ingresados entre 11 y 20 respecto del total es: %f\n", porcentajeSegundoGrupo);
    printf("El porcentaje de valores ingresados entre 21 y 30 respecto del total es: %f\n", porcentajeTercerGrupo);
    printf("El porcentaje de valores ingresados mayores a 30 respecto del total es: %f\n", porcentajeCuartoGrupo);

    return 0;
}
