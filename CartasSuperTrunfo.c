#include <stdio.h>

int main() {
    // variáveis separadas para cada atributo da cidade.
    char StateName1[15];
    char CityName1[20];
    char CityCode1[3];
    int  PontosTuristicos1;
    float Area1, Populacao1, Pib1;

    // Cadastro das Cartas:
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Olá! seja bem vindo ao SuperTrunfo da MateCheck!\n");

    printf("Para começar, nos informe os valores das suas cartas!\n");

    //cadastro da carta cidade 1:

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Sua carta pertence a que estado? ");
    scanf("%s", StateName1);
    printf("\nQual é a cidade que deseja cadastrar? e qual é o seu codigo?\n");
    printf("Cidade: ");
    scanf("%s", CityName1);
    printf("\ncodigo: ");
    scanf("%s", CityCode1);
    printf("\nQual a area da sua cidade?(Km²) ");
    scanf("%f", &Area1);
    printf("Quantos pontos turisticos possuem a sua cidade?");
    scanf("");
    printf("\nQual a população da cidade? ");
    scanf("");
    printf("\nQual o PIB da cidade? ");
    scanf("");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
