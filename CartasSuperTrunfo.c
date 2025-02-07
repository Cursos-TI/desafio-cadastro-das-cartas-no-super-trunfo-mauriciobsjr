#include <stdio.h>

int main (){
    char Cidade[50];
    char codigo[4];
    float Pib;
    int Populacao;
    float Areakm²;
    char Estado = 'A';
    int Pontosturistico;

    printf("Cadastrar carta\n");
    printf("Digite o Estado: ");
    scanf(" %c", &Estado);

    printf("Digite o codigo da carta: ");
    scanf(" %s", &codigo);
    
    printf("Digita a cidade: ");
    scanf(" %s", &Cidade);

    printf("Digite a população: ");
    scanf(" %d", &Populacao);

    printf("Digite a area em km²: ");
    scanf(" %f", &Areakm²);    

    printf("Digite o PIB: ");
    scanf(" %f", &Pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &Pontosturistico);    
    
    printf("Proxima carta\n");

    return 0;
}
