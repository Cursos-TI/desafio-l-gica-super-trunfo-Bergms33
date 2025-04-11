#include <stdio.h>

int main() {
    
    printf("Comparação de cartas!\n");
    
    

    // Amazonas, população = 20.636890 milhões, Área = 11.401902, PIB = 103.281, Pontos Turisticos = 10
    // Acre, população = 880.631 mil, Área = 152.581, PIB = 23.600, Pontos Turisticos = 15

    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    printf("Digite a população da Carta 1 e Carta 2:\n");
    scanf("%f %f", &populacao1, &populacao2);

    printf("Digite a área da Carta 1 e Carta2:\n"); 
    scanf("%f %f", &area1, &area2);

    printf("Digite o Pib da Carta 1 e Carta 2\n");
    scanf("%f %f", &pib1, &pib2);

    printf("Digite a quantidade de poontos turisticos da Carta 1 e carta 2\n");
    scanf("%d %d", &pontosturisticos1, &pontosturisticos2);

    if (populacao1 > populacao2) {
        printf("Carta1 venceu na população\n");
    } else {
        printf("Carta2 venceu na apopulação!\n");
    }
    if (area1 > area2) {
        printf("Carta1 venceu na área\n");
    } else {
        printf("Carta2 venceu na área\n");
    }
    if (pib1 > pib2) {
        printf("Carta1 venceu no pib\n");
    } else {
        printf("Carta2 venveu no pib\n");
    }
    if (pontosturisticos1 > pontosturisticos2) {
        printf("Carta1 venceu nos pontos turisticos\n");
    } else {
        printf("Carta2 venceu nos pontos turisticos\n");
    }
    
    
    


return 0;

}
