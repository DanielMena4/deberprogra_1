#include<stdio.h>

int suma(int a, int b){
    int c;
    c = a+b;
    return c;
}

int resta(int a, int b){
    int c;
    c = a-b;
    return c;
}
int multiplicacion(int a, int b){
    int c;
    c = a*b;
    return c;
}
float division(float a, float b){
    float c;
    c = a/b;
    return c;
}
int main(){
    int d,e,f;
    printf("Ingrese el primer digito: ");
    scanf("%d",&d);
    printf("Ingrese el primer digito: ");
    scanf("%d",&e);
    while(f!= 5){
    printf("1. suma 2. resta 3. multiplicacion 4. division 5. salir\n");
    scanf("%d",&f);
    switch(f){
        case 1:
            printf("%d\n",suma(d,e));
        break;
        case 2:
            printf("%d\n",resta(d,e));
        break;
        case 3:
            printf("%d\n",multiplicacion(d,e));
        break;
        case 4:
            printf("%.2f\n", division(d,e));
        break;
        case 5:
            printf("Gracias por usar");
        break;
        default:
            printf("Opcion no valida");
        break;
    }
    }
    return 0;
}