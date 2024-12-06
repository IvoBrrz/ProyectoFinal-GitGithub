#include <stdio.h>

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

int main() {
    int opcion;
    int num1, num2, resultado;

    do {
        printf("\n=== Calculadora Basica ===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
            printf ("Ingrese el 1er numero a sumar: \n");
            scanf("%d", &num1);

            printf("Ingrese el 2do numero a sumar: \n");
            scanf("%d", &num2);
            
                resultado = sumar(num1, num2);
                printf("Resultado de la suma: %d \n\n", resultado);
                break;

            case 2:
                resultado = restar(0, 0);
                printf("Resultado de la resta: \n\n");
                break;

            case 3:
            printf("Ingrese el 1er numero: \n");
            scanf("%d", &num1);
            printf("Ingrese el 2do numero: \n");
            scanf("%d", &num2);

                resultado = multiplicar(num1, num2);
                printf("Resultado de la multiplicacion: %d\n\n", resultado);
                break;
            case 4:
                printf("Saliendo de la calculadora...\n\n");
                break;
            default:
                printf("Opcion no valida. Intenta de nuevo.\n\n");
                break;
        }
    } while (opcion != 4);
    return 0;
}

int sumar(int a, int b) {
    int total;
    total= a + b ;
    return total;
}

int restar(int a, int b) {

    return 0;
}

int multiplicar(int a, int b) {
    int total;
    total= a * b;
    return total;
}
