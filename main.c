//
//  main.c
//  Condiacionales1
//
//  Created by Pablo Diaz  on 25/10/2020.
//

#include <stdio.h>

int main()
{
    float seto;
    float arbusto_medida;
    int arbusto;
    int arbusto_disponibles;
    
    printf("¿Cuanto mide el seto? ");
    scanf("%f", &seto);
    printf("¿Cuanto mide el arbusto? ");
    scanf("%f", &arbusto_medida);
    printf("¿Cuantos arbustos quieres meter?" );
    scanf("%i", &arbusto);
    
    arbusto_disponibles = (seto / arbusto_medida);
    
    if (arbusto_disponibles >= arbusto) {
        printf("Todos los arbustos caben en el seto");
    }
    
    if (arbusto_disponibles <= arbusto) {
        printf("No todos los arbustos caben en el seto");
    }
}
