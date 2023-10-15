#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int validacion(char numero[4]){
    for(int i = 0; i < strlen(numero);i++)
    {
        if(!(isdigit(numero[i]))){
        printf("Numero no valido \n");
        return 0;
        }
    }
    return 1;    
}

int nums(int a, int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    int d,e,f,j,k;
    j=0;
    char numero[4];
    while(j==0){
    printf("Ingrese la cantidad de digitos que quiere calcular: ");
    scanf("%s",numero);
    j = validacion(numero);
    }
    k = atoi(numero);
    if (k < 3 ) {
        if (k == 2) {
            printf("0, 1");
        }
        else{
        for (int i = 0; i < k; i++) {
         
            printf("%d ",i);
            }
        }
    }
    else if(k >= 3){
        d = 0;
        e = 1;
        printf("%d, %d ",d,e);
        for (int i = 0; i < k-2; i++) 
        {
            f = nums(d,e);
            d = e;
            e = f;
            printf(", %d",f);
        }
      }
    return 0;
}
