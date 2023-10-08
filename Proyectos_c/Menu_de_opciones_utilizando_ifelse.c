#include <stdio.h>
int main (){
    int base;
    int altura;
    int radio;
    int lado;
    float pi=3.14159265359;


    printf("Hola! puedo calcular el area de tres figuras distintas, triangulo, circulo y cuadrado.\n");
    printf("Selecciona una figura\n");
    printf("1.Triangulo\n2.Circulo\n3.Cuadrado\n");
    int opcion;
    scanf("%d" , &opcion);
    if (opcion == 1){
        printf("Ingresa la altura del triangulo\n");
        scanf("%d",&altura);
        printf("Ingresa la base del triangulo\n");
        scanf("%d",&base);
        int AreaDeTriangulo=(base*altura)/2;
        printf("El area de tu triangulo es:%d\n" , AreaDeTriangulo);
    }else if (opcion == 2){
        printf("Ingresa el radio de tu circulo");
        scanf("%d", &radio);
        int AreaDeCirculo=(pi*(radio*radio));
        printf("El area de tu circulo es%d\n" , AreaDeCirculo);

    }else if (opcion == 3){
        printf("Ingresa la medida de uno de los lados de tu cuadrado");
        scanf("%d", &lado);
        int AreaDeCuadrado=lado*lado;
        printf("El area de tu cuadrado es%d\n", AreaDeCuadrado);

    }



}