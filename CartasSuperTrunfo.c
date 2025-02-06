#include <stdio.h>

int main (){
    char A[50], cidade1[50], paises [50];
    int pib1;
    double pop1;
    float area1;
    char tur1;
    char codigo1 [3];

    printf("Cadastrar carta\n");
    printf("Digite o páis: ");
    scanf(" %s", &paises);

    printf("Digite o Estado: ");
    scanf(" %s", &A);
    
    printf("Digita a cidade e numero da carta: ");
    scanf(" %s %c", &cidade1, &codigo1);

    printf("Digite a população: ");
    scanf(" %f", &pop1);

    printf("Digite a area em m²: ");
    scanf(" %f", &area1);    

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %c", &tur1);    
    
    printf("Proxima cidade\n");

    return 0;
}