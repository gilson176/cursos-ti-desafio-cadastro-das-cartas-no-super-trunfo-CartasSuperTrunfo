#include <stdio.h>

int main(){

    // desafio aventureiro
    
printf("Super Trunfo - paises\n");

char Estado1, Estado2;
char Codigodacarta1[20], Codigodacarta2[20];
char Nomedacidade1[20], Nomedacidade2[20];
int Populacao1, Populacao2;
float Areaemkm1, Areaemkm2;
float Pib1, Pib2;
int Numerosdepontosturisticos1, Numerosdepontosturisticos2;
float Desidadepopulacional1,Desidadepopulacional2;
float Pibpercapita1, Pibpercapita2;

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

Desidadepopulacional1 = (float) (Populacao1 / Areaemkm1);
Pibpercapita1 =  (float) (Pib1 / Populacao1);

printf("carta 1\n");
printf("Letra do Estado: %c\n", Estado1);
printf("Codigo da Carta: %s\n",Codigodacarta1);
printf("Nome da cidade: %s\n", Nomedacidade1);
printf("Populacao: %d\n", Populacao1);
printf("Area em km2: %f\n", Areaemkm1);
printf("PIB: %f\n", Pib1);
printf("Numeros de Pontos Turisticos: %d\n", Numerosdepontosturisticos1);
printf("Desidade Populacional: %.4f\n",Desidadepopulacional1);
printf("Pib per Capita: %.4f\n",Pibpercapita1);




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


Desidadepopulacional2 = (float) (Populacao2 / Areaemkm2);
Pibpercapita2 =  (float) (Pib2 / Populacao2);


printf("carta 2\n");
printf("Letra do Estado: %c\n", Estado2);
printf("Codigo da Carta: %s\n",Codigodacarta2);
printf("Nome da cidade: %s\n", Nomedacidade2);
printf("Populacao: %d\n", Populacao2);
printf("Area em km2: %f\n", Areaemkm2);
printf("PIB: %f\n", Pib1);
printf("Numeros de Pontos Turisticos: %d\n", Numerosdepontosturisticos2);
printf("Desidade Populacional: %.4f\n",Desidadepopulacional2);
printf("Pib per Capita: %.4f\n",Pibpercapita2);




    return 0;

}
