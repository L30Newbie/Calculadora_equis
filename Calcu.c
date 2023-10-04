#include <stdio.h>

int main() {
    int opc;
    float num1, num2, div, suma, resta, mult;
    
    do
    {
    printf("Escribe el primer numero: ");
    scanf("%f", &num1);
    
    printf("Escribe el segundo numero: ");
    scanf("%f", &num2);
    
    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    
    printf("El resultado de la suma es: %.2f \n",suma);
    printf("El resultado de la resta es: %.2f \n",resta);
    printf("El resultado de la multiplicacion es: %.2f \n",mult);
    printf("El resultado de la division es: %.4f \n",div);
    
    printf("Si desea volver a realizar la operacion escriba 1, si desea salir, escriba cualquier otra tecla: ");
    scanf("%d",&opc);
    } while (opc == 1);
    printf("Adios bb!");
    
    return 0;
}