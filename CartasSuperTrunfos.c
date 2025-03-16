#include <stdio.h>

int main() {
    char codigo_carta1[5];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;
    float super_poder1;

    char codigo_carta2[5];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;
    float super_poder2;

    printf("Cadastro da primeira carta:\n");
    printf("Código da carta (ex: A01): ");
    scanf("%4s", codigo_carta1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCadastro da segunda carta:\n");
    printf("Código da carta (ex: B02): ");
    scanf("%4s", codigo_carta2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; 

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; 
    printf("\nDados da primeira carta:\n");
    printf("Código: %s\n", codigo_carta1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f unidades monetárias por habitante\n", pib_per_capita1);

    printf("\nDados da segunda carta:\n");
    printf("Código: %s\n", codigo_carta2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f unidades monetárias por habitante\n", pib_per_capita2);

    super_poder1 = populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (densidade1 != 0 ? 1.0 / densidade1 : 0);
    super_poder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (densidade2 != 0 ? 1.0 / densidade2 : 0);

    printf("\nSuper Poder da primeira carta: %.2f\n", super_poder1);
    printf("Super Poder da segunda carta: %.2f\n", super_poder2);

    printf("\nResultado das Comparações (1 - Carta 1 vence, 0 - Carta 2 vence):\n");
    printf("População: %d\n", (populacao1 > populacao2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos Turísticos: %d\n", (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional (menor vence): %d\n", (densidade1 < densidade2));
    printf("PIB per Capita: %d\n", (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: %d\n", (super_poder1 > super_poder2));

    return 0;
}
