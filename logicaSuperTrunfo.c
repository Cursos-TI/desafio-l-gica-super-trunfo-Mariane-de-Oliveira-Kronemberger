#include <stdio.h>

// Desafio Super Trunfo - Lógica das Cartas
//Mariane O. Kronemberger

// Função para limpar ENTER

void limpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    // Var

    char estado1, estado2;
    char codigo1[6], codigo2[6];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2, PIBcapita1, PIBcapita2, PIBbilhao1, PIBbilhao2;
    int turistico1, turistico2;
    char tecla;
    float densidade1, densidade2;
    float superpoder1, superpoder2;
    int comparar;

    // "Menu" do primeiro cadastro

    printf ("======== Cadastro de Cartas ========\n");
    printf ("------------------------------------\n");

    printf ("CARTA: 1\n");
    printf ("Digite o estado [A-H]:\n");
    scanf (" %c", &estado1);
    limpaBuffer();

    printf("Digite o código [ex: A01]:\n");
    scanf (" %s", codigo1);
    limpaBuffer();

    printf("Digite a cidade :\n");
    scanf(" %[^\n]", cidade1); // Lê com espaço
    limpaBuffer();

    printf("Digite a população: \n");
    scanf(" %lu", &populacao1);
    limpaBuffer();

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);
    limpaBuffer();

    printf("Digite o PIB da cidade [em bilhão]: \n");
    scanf(" %f", &PIB1);
    PIBbilhao1 = PIB1 * 1000000000; // Converte bilhões para reais
    limpaBuffer();

    printf("Digite o número de pontos turísticos: \n");
    scanf (" %d", &turistico1);
    limpaBuffer();

    // Calculo densidade populacional

    densidade1 = populacao1 / area1;

    // Calculo PIB per capita

    PIBcapita1 = PIBbilhao1 / populacao1;

    // Calculo super poder

    superpoder1 = (float) (populacao1 + area1 + PIB1 + turistico1 + PIBcapita1) + (1/densidade1);

    // "Limpar" a tela)
    
      printf(" \n"); 
      printf(" \n");
      printf(" \n");

    // Carta 1 aparece

    printf ("CARTA 1\n");
    printf ("---------------------------\n");
    printf ("| Estado: %c\n", estado1);
    printf ("| Código: %s\n", codigo1);
    printf ("| Cidade: %s\n", cidade1);
    printf ("| População: %lu habitantes\n", populacao1);
    printf ("| Área: %.2f Km²\n", area1);
    printf ("| PIB: %.2f bi\n", PIB1);
    printf ("| Pontos turísticos: %d\n", turistico1);
    printf ("| Densidade populacional: %.2f hab/km²\n", densidade1);
    printf ("| PIB per capita: %.2f reais\n", PIBcapita1);
    printf ("| Super Poder: %.2f\n", superpoder1);
    printf ("---------------------------\n");
    printf ("\n[Digite C para continuar...]\n");
    scanf (" %c", &tecla);
    limpaBuffer();

    // "Limpar" a tela)

      printf(" \n"); 
      printf(" \n");
      printf(" \n");
      
    // "Menu" do segundo cadastro

    printf ("======== Cadastro de Cartas ========\n");
    printf ("------------------------------------\n");

    printf ("CARTA: 2\n");
    printf ("Digite o estado [A-H]:\n");
    scanf (" %c", &estado2);
    limpaBuffer();

    printf("Digite o código [ex: A01]:\n");
    scanf (" %s", codigo2);
    limpaBuffer();

    printf("Digite a cidade :\n");
    scanf(" %[^\n]", cidade2); // Lê com espaço
    limpaBuffer();

    printf("Digite a população: \n");
    scanf(" %lu", &populacao2);
    limpaBuffer();

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);
    limpaBuffer();

    printf("Digite o PIB da cidade [em bilhão]: \n");
    scanf(" %f", &PIB2);
    PIBbilhao2 = PIB2 * 1000000000; // Converte bilhões para reais
    limpaBuffer();

    printf("Digite o número de pontos turísticos: \n");
    scanf (" %d", &turistico2);
    limpaBuffer();

    // Calculo densidade populacional

    densidade2 = (float) populacao2 / area2;

    // Calculo PIB per capita

    PIBcapita2 = PIBbilhao2 / populacao2;

       // Calculo super poder

    superpoder2 = (float) (populacao2 + area2 + PIB2 + turistico2 + PIBcapita2) + (1/densidade2);

    // "Limpar" a tela)

      printf(" \n"); 
      printf(" \n");
      printf(" \n");

    // Carta 2 aparece

    printf ("CARTA 2\n");
    printf ("---------------------------\n");
    printf ("| Estado: %c\n", estado2);
    printf ("| Código: %s\n", codigo2);
    printf ("| Cidade: %s\n", cidade2);
    printf ("| População: %lu habitantes\n", populacao2);
    printf ("| Área: %.2f Km²\n", area2);
    printf ("| PIB: %.2f bi\n", PIB2);
    printf ("| Pontos turísticos: %d\n", turistico2);
    printf ("| Densidade populacional: %.2f hab/km²\n", densidade2);
    printf ("| PIB per capita: %.2f reais\n", PIBcapita2);
    printf ("| Super poder: %.2f\n", superpoder2);
    printf ("---------------------------\n");
    printf ("\n[Digite C para comparar...]\n");
    scanf (" %c", &tecla);
    limpaBuffer();

   // "Limpar" a tela)

      printf(" \n"); 
      printf(" \n");
      printf(" \n");

   // Comparação de cartas]

   comparar = 1;  /* <<--- escolha aqui o atributo
   (1=População, 2=Área, 3=PIB, 4=Densidade Populacional, 5=Pontos turísticos, 6=PIB per capita, 7=Super Poder)*/

    printf ("======== Comparação das Cartas ========\n");
    printf ("---------------------------------------\n");
    printf("%s x %s ", cidade1, cidade2);

   if(comparar == 1){

    printf("Atributo: População\n");
    printf("Carta 1 - %s: [%lu Hab] \n", cidade1, populacao1);
    printf("Carta 2 - %s: [%lu Hab]\n", cidade2, populacao2);
    
      if (populacao1 > populacao2){
        printf ("A carta %s venceu!\n", cidade1);

      } else if (populacao1 < populacao2) {
        printf ("A carta %s venceu!\n", cidade2);
      } else {
        printf ("Empate!");
      }
   }
      
   if(comparar == 2) {

    printf("Atributo: Área\n");
    printf("Carta 1 - %s: [%.2f Km²]\n", cidade1, area1);
    printf("Carta 2 - %s: [%.2f Km²]\n", cidade2, area2);
    
      if (area1 > area2){
        printf ("A carta %s venceu!\n", cidade1);

      } else if (area1 < area2) {
        printf ("A carta %s venceu!\n", cidade2);
      } else {
        printf ("Empate!");
      }
   }

   if(comparar == 3) {

    printf("Atributo: PIB\n");
    printf("Carta 1 - %s: [%.2f Bi]\n", cidade1, PIB1);
    printf("Carta 2 - %s: [%.2f Bi]\n", cidade2, PIB2);
    
      if (PIB1 > PIB2){
        printf ("A carta %s venceu!\n", cidade1);

      } else if (PIB1 < PIB2){
        printf ("A carta %s venceu!\n", cidade2);
      } else {
        printf("Empate!");
      }
   }

    if(comparar == 4) {

    printf("Atributo: Densidade\n");
    printf("Carta 1 - %s: [%.2f Hab/km²]\n", cidade1, densidade1);
    printf("Carta 2 - %s: [%.2f Hab/km²]\n", cidade2, densidade2);
    
      if (densidade1 < densidade2){
        printf ("A carta %s venceu!\n", cidade1);

      } else if (densidade1 > densidade2){
        printf ("A carta %s venceu!\n", cidade2);
      } else {
        printf("Empate!");
      }
   }

   
    if(comparar == 5) {

    printf("Atributo: Pontos Turísticos\n");
    printf("Carta 1 - %s: [%d Pontos]\n", cidade1, turistico1);
    printf("Carta 2 - %s: [%d Pontos]\n", cidade2, turistico2);
    
      if (turistico1 > turistico2){
        printf ("A carta %s venceu!\n", cidade1);

      } else if (turistico1 < turistico2) {
        printf ("A carta %s venceu!\n", cidade2);
      } else {
        printf ("Empate!");
      }
   }


    if(comparar == 6) {

    printf("Atributo: PIB per CAPITA\n");
    printf("Carta 1 - %s: [%.2f Reais]\n", cidade1, PIBcapita1);
    printf("Carta 2 - %s: [%.2f Reais]\n", cidade2, PIBcapita2);
    
      if (PIBcapita1 > PIBcapita2){
        printf ("A carta %s venceu!\n", cidade1);

      } else if (PIBcapita1 < PIBcapita2){
        printf ("A carta %s venceu!\n", cidade2);
      } else {
        printf ("Empate!");
      }
   }

    if(comparar == 7) {

    printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s: [%.2f]\n", cidade1, superpoder1);
    printf("Carta 2 - %s: [%.2f]\n", cidade2, superpoder2);
    
      if (superpoder1 > superpoder2){
        printf ("A carta %s venceu!\n", cidade1);

      } else if (superpoder1 < superpoder2){
        printf ("A carta %s venceu!\n", cidade2);
      } else {
        printf ("Empate!");
      }
   }

    printf ("\n[Digite C para encerrar...]\n");
    scanf (" %c", &tecla);
    limpaBuffer();

    return 0;

}