// Enumereção com Array Pseudo-aleatórias


#include <stdio.h>
#include <stdlib.h> 

int main() {
    int i;
    int Array[20];
    
    // Input 
    printf("Os numeros gerados foram: \n");
    for (i = 0; i < 20; i++) {
        Array[i] = rand() % 10; // Armazena um número aleatório no array
        printf("%d ", Array[i]); // Imprime o número gerado
    }
        
    // Output: Matriz em ordem de entrada
    printf("\nEm ordem de Entrada\n");
    for (i = 0; i < 20; i++)
        printf("%d\t", Array[i]);
    printf("\n");
    
    // Output: Matriz inversa
    printf("\nEm ordem Inversa\n");
    for (i = 19; i >= 0; i--)
        printf("%d\t", Array[i]);
    printf("\n");
    
    return 0; // Adicionado para indicar que o programa foi executado com sucesso
}
