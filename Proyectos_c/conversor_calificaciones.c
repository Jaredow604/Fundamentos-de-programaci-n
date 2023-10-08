
#include <stdio.h>

int main()
{
int calificacion;
printf("Ingresa tu calificacion del 0 al 100\n");
scanf("%d", &calificacion);
if (calificacion>=97 && calificacion <=100){
    printf("Tu calificacion es A+");
    
}else if (calificacion>=93 && calificacion <=96){
    printf("Tu calificacion es A");
}else if (calificacion>=90 && calificacion <=92){
    printf("Tu calificacion es A-");
}else if (calificacion>=87 && calificacion <=89){
    printf("Tu calificacion es B+");
}else if (calificacion>=83 && calificacion <=86){
    printf("Tu calificacion es B");
}else if (calificacion>=80 && calificacion <=82){
    printf("Tu calificacion es B-");
}else if (calificacion>=77 && calificacion <=79){
    printf("Tu calificacion es C+");
}else if (calificacion>=73 && calificacion <=76){
    printf("Tu calificacion es C");
}else if (calificacion>=70 && calificacion <=72){
    printf("Tu calificacion es C-");
}else if (calificacion>=67 && calificacion <=69){
    printf("Tu calificacion es D+");
}else if (calificacion>=65 && calificacion <=66){
    printf("Tu calificacion es D");
}else if (calificacion>=0 && calificacion <=64){
    printf("Tu calificacion es D-");
}
}
