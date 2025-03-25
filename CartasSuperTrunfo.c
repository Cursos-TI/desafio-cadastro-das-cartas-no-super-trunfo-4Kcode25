#include <stdio.h>


// Declaração dos tributos da primeira carta

int main() {
    int populacao1;
    float area1;
    float pib1;
    int ponto_t1;

//Declaração dos tributos da segunda carta

    int populacao2;
    float area2;
    float pib2;
    int ponto_t2;

    // Cadastro da primeira carta
    printf("Coloque dados da primeira carta (ex A01): \n");
    printf("Digite o numero da populacao: ");
      scanf("%d", &populacao1);

    printf("Coloque a area (em km): ");
      scanf("%f", &area1);

    printf("Coloque o valor do pib: ");
      scanf("%f", &pib1);

    printf("Coloque o valor dos pontos turisticos: ");
      scanf("%d", ponto_t1);

    return 0;

}
