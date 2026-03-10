#include <stdio.h>

int main() {
    // Declaración de variables
    char producto[50];
    float precioBase, tasaIva, montoIva, precioTotal;

    printf("--- Sistema de Cálculo de IVA ---\n");

    // Entrada de datos
    printf("Nombre del producto: ");
    scanf("%s", producto);

    printf("Precio base: ");
    scanf("%f", &precioBase);

    printf("Porcentaje de IVA (ej. 16 o 21): ");
    scanf("%f", &tasaIva);

    // Lógica del cálculo
    montoIva = precioBase * (tasaIva / 100);
    precioTotal = precioBase + montoIva;

    // Salida de resultados con formato a 2 decimales
    printf("\n==============================\n");
    printf("RESUMEN DE VENTA\n");
    printf("==============================\n");
    printf("Producto:    %s\n", producto);
    printf("Subtotal:    $%.2f\n", precioBase);
    printf("IVA (%.1f%%):  $%.2f\n", tasaIva, montoIva);
    printf("------------------------------\n");
    printf("TOTAL:       $%.2f\n", precioTotal);
    printf("==============================\n");

    return 0;
}
