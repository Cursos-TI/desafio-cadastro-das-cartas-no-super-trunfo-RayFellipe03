#include <stdio.h>

int main() {
    // variáveis dos atributo da cidade.
    char StateName1[15], StateName2[15];
    char CityName1[20], CityName2[20];
    char CityCode1[3], CityCode2[3];
    int TouristPoints1, TouristPoints2;
    float Area1, Populacao1, Pib1, Area2, Populacao2, Pib2;

    // Cadastro das Cartas:
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Olá! seja bem vindo ao SuperTrunfo da MateCheck!\n");

    printf("Para começar, nos informe os valores das suas cartas!\n");

    //cadastro da carta cidade 1:
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Sua primeira carta pertence a que estado? ");
    scanf("%s", StateName1);
    printf("Qual é a cidade que deseja cadastrar? e qual é o seu codigo?\n");
    printf("Cidade: ");
    scanf("%s", CityName1);
    printf("codigo: ");
    scanf("%s", CityCode1);
    printf("Qual a area da sua cidade?(Km²) ");
    scanf("%f", &Area1);
    printf("Quantos pontos turisticos possuem a sua cidade? ");
    scanf("%d", &TouristPoints1);
    printf("Qual a população da cidade? ");
    scanf("%f", &Populacao1);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &Pib1);

    //cadastro da carta cidade 2:
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Sua segunda carta pertence a que estado? ");
    scanf("%s", StateName2);
    printf("Qual é a cidade que deseja cadastrar? e qual é o seu codigo?\n");
    printf("Cidade: ");
    scanf("%s", CityName2);
    printf("codigo: ");
    scanf("%s", CityCode2);
    printf("Qual a area da sua cidade?(Km²) ");
    scanf("%f", &Area2);
    printf("Quantos pontos turisticos possuem a sua cidade? ");
    scanf("%d", &TouristPoints2);
    printf("Qual a população da cidade? ");
    scanf("%f", &Populacao2);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &Pib2);

    //calculo de densidade e pib
        //variaveis de calculo
    float DensityCalc1, PibCalc1, DensityCalc2, PibCalc2;

    //calculo
    DensityCalc1 = Populacao1/Area1;
    PibCalc1 = Pib1/Populacao1;
    DensityCalc2 = Populacao2/Area2;
    PibCalc2 = Pib2/Populacao2;


    // Exibição dos Dados das Cartas:
        //carta1
    printf("\n--------------------------------------------------\n");
    printf("Certo, vamos conferir os dados das suas cartas:\n");
    printf("Carta 1:\n");
    printf("CODIGO: %s", CityCode1);
    printf("\nCIDADE: %s", CityName1);
    printf("\nESTADO: %s", StateName1);
    printf("\nPOPULAÇAO: %.2f", Populacao1);
    printf("\nAREA: %.2f", Area1);
    printf("\nPONTOS TURISTICOS: %d", TouristPoints1);
    printf("\nPIB: %.2f", Pib1);
    printf("\nDENSIDADE DEMOGRAFICA: %.2f", DensityCalc1);
    printf("\nPIB PER CAPTA: %.2f", PibCalc1);

        //carta2
    printf("\n--------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("CODIGO: %s", CityCode2);
    printf("\nCIDADE: %s", CityName2);
    printf("\nESTADO: %s", StateName2);
    printf("\nPOPULAÇAO: %.2f", Populacao2);
    printf("\nAREA: %.2f", Area2);
    printf("\nPONTOS TURISTICOS: %d", TouristPoints2);
    printf("\nPIB: %.2f", Pib2);
    printf("\nDENSIDADE DEMOGRAFICA: %.2f", DensityCalc2);
    printf("\nPIB PER CAPTA: %.2f", PibCalc2);


    // Exibição de comparação das Cartas

    printf("\n fim \n");

    return 0;
}
