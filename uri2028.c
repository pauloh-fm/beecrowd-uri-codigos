//uri 2028 - Sequencia de Sequencia 
// Autor : Paulo Henrique de Farias Martins
#include <stdio.h>
// 0 = 0
// 1 = 0 1
// 2 = 0 1 2 2
int tamanhoSequencia(int n){
    if(n==0)
        return 1;
    else
        return (n + tamanhoSequencia(n-1));
}
void imprimirSequencia(int n){
    int val;
    printf("0 ");
    for (int i = 1; i <= n; i++)
    {
        val = i;
        while(val != 0){
            printf("%d ", i);
            val--;
        }
    }
    
}
int main(int argc, char const *argv[])
{
    int n = 0;
    int cont = 1;
do
{
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Caso %d: 1 numero\n",cont);
        printf("0\n");
        cont++;
    }
    else
    {
        printf("Caso %d: %d numeros\n",cont,tamanhoSequencia(n));
        imprimirSequencia(n);
        printf("\n");
        cont++;    
    }
    
} while (n != EOF);

    return 0;
}
