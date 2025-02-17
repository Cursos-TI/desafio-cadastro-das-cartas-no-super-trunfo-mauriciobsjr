#include <stdio.h>

int main() {
    char Cidade[100]; 
    char codigo1[4], codigo2[4], codigo3[4], codigo4[4], codigo5[4], codigo6[4], codigo7[4], codigo8[4];
    float Pib, superpoder1, superpoder2;
    int Populacao;
    float Areakm, densidade, pibpercapita;
    char Estado1, Estado2, Estado3, Estado4, Estado5, Estado6, Estado7, Estado8;
    int Pontosturistico; 
    int resultado1, resultado2;

    printf("***Cadastrar nova carta***\n");
    printf("Digite o Estado em letra unica, ex.P para Piaui: ");
    scanf(" %c", &Estado1);

    printf("Digite o codigo da carta, a letra do estado mais numero, ex. P1, P2: ");
    scanf(" %s", &codigo1);
    
    printf("Digita a cidade: ");
    scanf(" %s", &Cidade);

    printf("Digite a população: ");
    scanf(" %d", &Populacao);

    printf("Digite a area em km²: ");
    scanf(" %f", &Areakm);    

    printf("Digite o PIB: ");
    scanf(" %f", &Pib);

    pibpercapita = (float)(Pib / Populacao);
    printf("Pib Per capita: %.3f\n", pibpercapita);

    densidade = (float)(Populacao / Areakm);
    printf("Densidade populacional: %.3f\n", densidade);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &Pontosturistico);  

    superpoder1 = (float) Pib + pibpercapita + Populacao + Areakm + densidade + Pontosturistico;
    printf("Superpoder: %.2f\n", superpoder1);

    printf("***Proxima carta cidade***\n");
    printf("Digite o Estado em letra unica, ex.P para Piaui: ");
    scanf(" %c", &Estado1);

    printf("Digite o codigo da carta, a letra do estado mais numero, ex. P1, P2: ");
    scanf(" %s", &codigo1);
    
    printf("Digita a cidade: ");
    scanf(" %s", &Cidade);

    printf("Digite a população: ");
    scanf(" %d", &Populacao);

    printf("Digite a area em km²: ");
    scanf(" %f", &Areakm);    

    printf("Digite o PIB: ");
    scanf(" %f", &Pib);

    pibpercapita = (float)(Pib / Populacao);
    printf("Pib Per capita: %.3f\n", pibpercapita);

    densidade = (float)(Populacao / Areakm);
    printf("Densidade populacional: %.3f\n", densidade);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &Pontosturistico);  

    superpoder2 = (float) Pib + pibpercapita + Populacao + Areakm + densidade + Pontosturistico;
    printf("Superpoder: %.2f\n", superpoder2);
    
    resultado1 = superpoder1;
    resultado2 = superpoder2;
    printf("Maior carta, carta 1 > que carta 2: %d\n", resultado1 > resultado2);

}