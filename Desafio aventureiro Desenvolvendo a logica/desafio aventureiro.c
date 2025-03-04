#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Desafio Aventureiro

printf("Super Trunfo - paises\n\n");

char Estado1, Estado2;
char Codigodacarta1[20], Codigodacarta2[20];
char Nomedacidade1[20], Nomedacidade2[20];
int Populacao1, Populacao2;
float Areaemkm1, Areaemkm2;
float Pib1, Pib2;
int Numerosdepontosturisticos1, Numerosdepontosturisticos2;
float Desidadepopulacional1,Desidadepopulacional2;
float Pibpercapita1, Pibpercapita2;
float superpoder1, superpoder2;



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

printf("Digite os Numeros de Pontos Turisticos\n");
scanf("%d", &Numerosdepontosturisticos1);

Desidadepopulacional1 = (int) (Populacao1 / Areaemkm1);
Pibpercapita1 =(int)(Pib1 / Populacao1);

superpoder1 = (int) (Populacao1 + Areaemkm1 + Pib1 + Numerosdepontosturisticos1 + Desidadepopulacional1 + Pibpercapita1);

printf("\n\n");

printf("Carta 1\n\n");
printf("Letra do Estado: %c\n", Estado1);
printf("Codigo da Carta: %s\n",Codigodacarta1);
printf("Nome da cidade: %s\n", Nomedacidade1);
printf("Populacao: %d\n", Populacao1);
printf("Area em km2: %.2f\n", Areaemkm1);
printf("PIB: %.2f\n", Pib1);
printf("Numeros de Pontos Turisticos: %d\n", Numerosdepontosturisticos1);
printf("Desidade Populacional: %.2f\n",Desidadepopulacional1);
printf("Pib per Capita: %.2f\n",Pibpercapita1);
printf("Super Poder: %.2f\n\n", superpoder1);



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


Desidadepopulacional2 = (int) (Populacao2 / Areaemkm2);
Pibpercapita2 = (int) (Pib2 / Populacao2);

superpoder2 = (int) (Populacao2 + Areaemkm2 + Pib2 + Numerosdepontosturisticos2 + Desidadepopulacional2 + Pibpercapita2);

printf("Carta 2\n\n");
printf("Letra do Estado: %c\n", Estado2);
printf("Codigo da Carta: %s\n",Codigodacarta2);
printf("Nome da cidade: %s\n", Nomedacidade2);
printf("Populacao: %d\n", Populacao2);
printf("Area em km2: %.2f\n", Areaemkm2);
printf("PIB: %.2f\n", Pib1);
printf("Numeros de Pontos Turisticos: %d\n", Numerosdepontosturisticos2);
printf("Desidade Populacional: %.2f\n",Desidadepopulacional2);
printf("Pib per Capita: %.2f\n",Pibpercapita2);
printf("Super Poder: %.2f\n\n", superpoder2);


printf("Comparacao entre Cartas \n\n");


printf("Populacao: %d\n",Populacao1 > Populacao2);
printf("Area Em Km2: %d\n",Areaemkm1 > Areaemkm2);
printf("Pib: %d\n",Pib1 > Pib2);
printf("Pontos Turisticos: %d\n",Numerosdepontosturisticos1 > Numerosdepontosturisticos2);
printf("Densidade Populacional :%d\n",Desidadepopulacional1 > Desidadepopulacional2);
printf("Pib per Capita: %d\n",Pibpercapita1 > Pibpercapita2);
printf("Super Poder: %d\n\n",superpoder1 > superpoder2);





int atributo;

printf("escolha um atributo a ser comparado\n\n");
printf("1. Populacao\n");
printf("2. Area Km2\n");
printf("3. Pib\n");
printf("4. Pontos Turisticos\n");
scanf("%d", &atributo);


switch (atributo)
{
case 1:
if (Populacao1 > Populacao2)
printf("a carta 1 venceu\n");
else if(Populacao1 < Populacao2)
printf("carta 2 venceu\n");
else
printf("empate\n");
break;

case 2:
if (Areaemkm1 > Areaemkm2)
printf("a carta 1 venceu\n");
else if(Areaemkm1 < Areaemkm2)
printf("carta 2 venceu\n");
else
printf("empate\n");
break;

case 3:
if (Pib1 > Pib2)
printf("a carta 1 venceu\n");
else if(Pib1 < Pib2)
printf("carta 2 venceu\n");
else
printf("empate\n");
break;

case 4:
if (Numerosdepontosturisticos1 > Numerosdepontosturisticos2)
printf("a carta 1 venceu\n");
else if(Numerosdepontosturisticos1 < Numerosdepontosturisticos2)
printf("carta 2 venceu\n");
else
printf("empate\n");
break;

















}



















    return 0;

}