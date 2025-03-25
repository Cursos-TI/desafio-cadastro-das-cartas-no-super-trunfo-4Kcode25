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

      // Cadastro da segunda carta
      
      printf("Coloque dados da segunda carta (ex A02): \n");
      printf("Digite o numero da populacao: ");
        scanf("%d", &populacao2);
  
      printf("Coloque a area (em km): ");
        scanf("%f", &area2);
  
      printf("Coloque o valor do pib: ");
        scanf("%f", &pib2);
  
      printf("Coloque o valor dos pontos turisticos: ");
        scanf("%d", ponto_t2);

        // Exibição dos dados da primeira carta
     printf("\nDados da primeira carta (A01):\n");
     printf("Populacao: %d habitantes\n", populacao1);
     printf("Area: %.2f km²\n", area1);
     printf("PIB: %.2f bilhoes\n", pib1);
     printf("Pontos turisticos: %d\n", ponto_t1);

     
    return 0;

}
