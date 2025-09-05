#include <stdio.h>
#include <stdlib.h>

int main() {
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char cidade1[51], cidade2[51]; // +1 para '\0'
    char pontos1[101], pontos2[101]; // +1 para '\0'
    int populacao1, populacao2;
    float pib1, pib2;
    float area1, area2;
   
    // --- Cadastro da Carta 1 ---
    printf("Cadastro da Carta 1\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %2s", estado1);

    printf("Digite o Codigo (3 digitos): ");
    scanf(" %3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite os Pontos Turisticos: ");
    scanf(" %[^\n]", pontos1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    getchar(); // Limpa o '\n' do buffer

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);
    getchar(); // Limpa o '\n' do buffer

    printf("Digite a Área da Cidade (km²): ");
    scanf("%f", &area1);
    getchar(); // Limpa o '\n' do buffer

    // --- Cadastro da Carta 2 ---
    printf("\nCadastro da Carta 2\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %2s", estado2);

    printf("Digite o Codigo (3 digitos): ");
    scanf(" %3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite os Pontos Turisticos: ");
    scanf(" %[^\n]", pontos2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);

    printf("Digite a Área da Cidade (km²): ");
    scanf("%f", &area2);

    // Calcular a Desnsidade populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    //Calcular o PIB per capita
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    //Calcular o super poder
     float superPoder1 = populacao1 + area1 + pib1 + atoi(pontos1) + pib_per_capita1 + (1.0 / densidade1);
     float superPoder2 = populacao2 + area2 + pib2 + atoi(pontos2) + pib_per_capita2 + (1.0 / densidade2);

     //Escolha da comparação dos atributos
    int atributo;
     printf("Bem-vindo a batalha de cartas!\n");
     printf("Escolha o atributo para comparar:\n");
     printf("Digite 1 para população\n");
     printf("Digite 2 para super poder\n");
     printf("Digite 3 para PIB per capita\n");
     scanf("%d", &atributo);

        switch (atributo) {
            case 1:
                if (populacao1 > populacao2) {
                    printf("Carta 1 venceu com maior população!\n");
                } else if (populacao2 > populacao1) {
                    printf("Carta 2 venceu com maior população!\n");
                } else {
                    printf("Empate na população!\n");
                }
                break;
            case 2:
                if (superPoder1 > superPoder2) {
                    printf("Carta 1 venceu com maior super poder!\n");
                } else if (superPoder2 > superPoder1) {
                    printf("Carta 2 venceu com maior super poder!\n");
                } else {
                    printf("Empate no super poder!\n");
                }
                break;
            case 3:
                if (pib_per_capita1 > pib_per_capita2) {
                    printf("Carta 1 venceu com maior PIB per capita!\n");
                } else if (pib_per_capita2 > pib_per_capita1) {
                    printf("Carta 2 venceu com maior PIB per capita!\n");
                } else {
                    printf("Empate no PIB per capita!\n");
                }
                break;
            default:
                printf("Atributo inválido! Use 1, 2 ou 3.\n");
                break;
        }
    // --- Exibição dos dados ---
    printf("\n--- Dados Cadastrados ---\n");
    printf("Carta 1: %s, %s, %s, %s, %d, %.2f, %.2f km², %.2f, %.2f, \n", estado1, codigo1, cidade1, pontos1, populacao1, pib1, area1, densidade1, pib_per_capita1);
    printf("Carta 2: %s, %s, %s, %s, %d, %.2f, %.2f km², %.2f, %.2f \n", estado2, codigo2, cidade2, pontos2, populacao2, pib2, area2, densidade2, pib_per_capita2);

      
   

    return 0;
}