#include <stdio.h>
#include <stdio.h>

int main(){

printf("Super Trunfo - paises\n");

char Estado1;
char Codigodacarta1[20];
char Nomedacidade1[20];
int Populacao1;
float Areaemkm1;
float Pib1;
int Numerosdepontosturisticos1;
float desidadepopulacional1;
float pibpercapita1;

printf("Digite a Letra do Estado \n");
scanf("%c", &Estado1);

printf("Digite o Codigo da Carta \n");
scanf("%s", &Codigodacarta1);

printf("Digite o Nome da Cidade \n");
scanf("%s", &Nomedacidade1);

printf("Digite a Populacao \n");
scanf("%d",&Populacao1);

printf("Digite area em Km2\n");
scanf("%f", &Areaemkm1);

printf("Digite o Pib \n");
scanf("%f", &Pib1);

printf("Digite os Numeros de Pontos Turisticos \n");
scanf("%d", &Numerosdepontosturisticos1);

desidadepopulacional1 = (float) (Populacao1 / Areaemkm1);
pibpercapita1 =  (float) (Pib1 / Populacao1);

printf("carta: 1\n");
printf("Letra do Estado: %c\n", Estado1);
printf("Codigo da Carta: %s\n",Codigodacarta1);
printf("Nome da cidade: %s\n", Nomedacidade1);
printf("Populacao: %d\n", Populacao1);
printf("Area em km2: %f\n", Areaemkm1);
printf("PIB: %f\n", Pib1);
printf("Numeros de Pontos Turisticos: %d\n", Numerosdepontosturisticos1);
printf("Desidade Populacional: %.4f\n",desidadepopulacional1);
printf("Pib per Capita: %.4f\n",pibpercapita1);


char Estado2;
char Codigodacarta2[20];
char Nomedacidade2[20];
int Populacao2;
float Areaemkm2;
float Pib2;
int Numerosdepontosturisticos2;
float desidadepopulacional2;
float pibpercapita2;

printf("Digite a Letra do Estado \n");
scanf(" %c", &Estado2);

printf("Digite o Codigo da Carta \n");
scanf("%s", &Codigodacarta2);

printf("Digite o Nome da Cidade \n");
scanf("%s", &Nomedacidade2);

printf("Digite a Populacao \n");
scanf("%d",&Populacao2);

printf("Digite area em Km2\n");
scanf("%f", &Areaemkm2);

printf("Digite o Pib \n");
scanf("%f", &Pib2);

printf("Digite os Numeros de Pontos Turisticos \n");
scanf("%d", &Numerosdepontosturisticos2);


desidadepopulacional2 = (float) (Populacao2 / Areaemkm2);
pibpercapita2 =  (float) (Pib2 / Populacao2);

printf("carta: 2\n");
printf("Letra do Estado: %c\n", Estado2);
printf("Codigo da Carta: %s\n",Codigodacarta2);
printf("Nome da cidade: %s\n", Nomedacidade2);
printf("Populacao: %d\n", Populacao2);
printf("Area em km2: %f\n", Areaemkm2);
printf("PIB: %f\n", Pib2);
printf("Numeros de Pontos Turisticos: %d\n", Numerosdepontosturisticos2);
printf("Desidade Populacional: %.4f\n",desidadepopulacional2);
printf("Pib per Capita: %.4f\n",pibpercapita2);






    return 0;

}

