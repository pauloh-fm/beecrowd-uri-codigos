#include <stdio.h>
#define PUPILA 40000000

//40.000 fótons provenientes da estrela A numa área de 1 mm 2. Ou seja, 
// uma pupila de 10 mm 2 de área captar
//ia 400.000 fótons provenientes da estrela A por segundo.
int main(){
    int areaAbertura = 0;//mm^2
    int nEstrelas = 0; // para cada nEstrelas , terá um valor fFoton
    int fFoton = 0; // fluxo de fotons
    int qtdEstrelas = 0; // Quantidade de estrelas percebidas
    // receber a area de abertura e o numero de estrelasa
    scanf("%d %d", &areaAbertura, &nEstrelas);
    // fluxo - armazenar quantidade de estrelas percebidas
    while( nEstrelas > 0){
    scanf("%d", &fFoton);
    if( areaAbertura * fFoton >= PUPILA){
        qtdEstrelas++;
    }
    nEstrelas--;
    }
    // imprimir quantidade de estrelas percebidas
    printf("%d",PUPILA);

    return 0;
}