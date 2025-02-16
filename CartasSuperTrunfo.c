#include <stdio.h>

int main(){

    printf("Super Trunfo - paises\n ");

char estado;
char codigodacarta[20];
char nomedacidade[20];
int populacao;
float areaemkm2;
float pib;
int numerosdepontosturisticos;

printf("Digite a Letra do Estado\n");
scanf("%c", &estado);

printf("Digite o Codigo da Carta\n ");
scanf("%s", &codigodacarta);

printf("Digite o Nome da Cidade\n");
scanf("%s", &nomedacidade);

printf("Digite a População\n");
scanf("%d",&populacao);

printf("Digite area em Km2\n");
scanf("%f", &areaemkm2);

printf("Digite o Pib\n");
scanf("%f", &pib);

printf("Digite os Numeros de Pontos Turisticos\n");
scanf("%d", &numerosdepontosturisticos);

printf("Letra do Estado: %c\n", estado);
printf("Codigo da Carta: %s\n",codigodacarta);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Area: %f\n", areaemkm2);
printf("PIB: %f\n", pib);
printf("Numeros de Pontos Turisticos: %d\n", numerosdepontosturisticos);

















    return 0;

}