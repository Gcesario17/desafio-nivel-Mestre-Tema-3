#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    //Como pede no desafio continuando com o mesmo codigo, porem pede em pais, fiz essa alteração
    //Variaveis da Carta 1
    char Pais1;
    char codigo1 [10];
    char nomePais1 [50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

    //Variaveis da Carta 2
    char Pais2;
    char codigo2 [10];
    char nomePais2 [50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    //Entrada de Dados Carta 1
    printf("*** Carta 1 ***\n");

    printf("Pais 1: \n");
    scanf(" %c", &Pais1);

    printf("Codigo 1: \n");
    scanf("%s", codigo1);

    printf("Nome do Pais 1: \n");
    scanf("%s", nomePais1);

    printf("Populacao 1: \n");
    scanf("%lu", &populacao1);

    printf("Pontos Turisticos 1: \n");
    scanf("%d", &pontosturisticos1);

    printf("Area 1: \n");
    scanf("%f", &area1);

    printf("PIB 1: \n");
    scanf("%f", &pib1);

    //Entrada de Dados Carta 2
    printf("*** Carta 2 ***\n");

    printf("Pais 2: \n");
    scanf(" %c", &Pais2);

    printf("Codigo 2: \n");
    scanf("%s", codigo2);

    printf("Nome do Pais 2: \n");
    scanf("%s", nomePais2);

    printf("Populacao 2: \n");
    scanf("%lu", &populacao2);

    printf("Pontos Turisticos 2: \n");
    scanf("%d", &pontosturisticos2);

    printf("Area 2: \n");
    scanf("%f", &area2);

    printf("PIB 2: \n");
    scanf("%f", &pib2);

    //Procesamento de Calculos
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 / (float) populacao1;

    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / (float) populacao2;

    //Calculo do Super Poder
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibpercapita1 + (1.0 / densidadepopulacional1);
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pibpercapita2 + (1.0 / densidadepopulacional2);

    //Saida de Dados
    printf("\n*** Resultados ***\n");

    printf("*** Carta 1 ***\n");
    printf("Pais 1: %c\n", Pais1);
    printf("Codigo 1: %s\n", codigo1);
    printf("Nome do Pais 1: %s\n", nomePais1);
    printf("População 1: %lu\n", populacao1);
    printf("Pontos Turisticos 1: %d\n", pontosturisticos1);
    printf("Area 1: %.2f\n", area1);
    printf("PIB 1: %.2f\n", pib1);
    printf("Densidade Populacional 1: %.2f\n", densidadepopulacional1);
    printf("PIB Percapita 1: %.2f\n", pibpercapita1);
    printf("Super Poder 1: %.2f\n", superpoder1);

    printf("\n*** Carta 2 ***\n");
    printf("Pais 2: %c\n", Pais2);
    printf("Codigo 2: %s\n", codigo2);
    printf("Nome do Pais 2: %s\n", nomePais2);
    printf("População 2: %lu\n", populacao2);
    printf("Pontos Turisticos 2: %d\n", pontosturisticos2);
    printf("Area 2: %.2f\n", area2);
    printf("PIB 2: %.2f\n", pib2);
    printf("Densidade Populacional 2: %.2f\n", densidadepopulacional2);
    printf("PIB Percapita 2: %.2f\n", pibpercapita2);
    printf("Super Poder 2: %.2f\n", superpoder2);

    //Comparações de cada Dados
    printf("\n*** Comparação de Cartas ***\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    //Comparação - Atributo "POPULAÇÃO"

    printf("\n*** Comparação de Cartas (Atributo: População) ***\n");
    printf("Carta 1 - %s (%c): %lu\n", nomePais1, Pais1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", nomePais2, Pais2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
    } else {
        printf("Resultado: Empate! Ambas têm a mesma população.\n");
    }

    //Menu Interativo de Comparação usando switch e else-if

    int opcao;

    printf ("*** Menu de Comparação de Atributos! ***");
    printf ("Escolha uma opção: \n");
    printf ("1. População \n");
    printf ("2. Pontos Turisticos \n");
    printf ("3. Area \n");
    printf ("4. PIB \n");
    printf ("5. Densidade Populacional \n");
    printf ("6. PIB Percapita \n");
    printf ("7. Super Poder \n");
    printf ("Opção: ");
    scanf ("%d", &opcao);

    printf ("*** Resultado da Comparação! ***");

    switch (opcao)
    {
    case 1: //População
        
        printf ("Atributo: População \n");
        printf ("%s: %lu", nomePais1, populacao1);
        printf ("%s: %lu", nomePais2, populacao2);
        
    if (populacao1 > populacao2) 
        printf ("\n*** Carta 1 Venceu! ***");                
    else if (populacao2 > populacao1) 
        printf ("\n*** Carta 2 Venceu! ***");
    else 
        printf ("\n*** Empate das Cartas! ***");        

    break;

    case 2: //Pontos Turisticos
        
        printf ("Atributo: Pontos Turisticos \n");
        printf ("%s: %d", nomePais1, pontosturisticos1);
        printf ("%s: %d", nomePais2, pontosturisticos2);
        
    if (pontosturisticos1 > pontosturisticos2) 
        printf ("\n*** Carta 1 Venceu! ***");                
    else if (pontosturisticos2 > pontosturisticos1) 
        printf ("\n*** Carta 2 Venceu! ***");
    else 
        printf ("\n*** Empate das Cartas! ***");        

    break;

    case 3: //Area
        
        printf ("Atributo: Area \n");
        printf ("%s: %.2f", nomePais1, area1);
        printf ("%s: %.2f", nomePais2, area2);
        
    if (area1 > area2) 
        printf ("\n*** Carta 1 Venceu! ***");                
    else if (area2 > area1) 
        printf ("\n*** Carta 2 Venceu! ***");
    else 
        printf ("\n*** Empate das Cartas! ***");        

    break;

    case 4: //PIB
        
        printf ("Atributo: PIB \n");
        printf ("%s: %.2f", nomePais1, pib1);
        printf ("%s: %.2f", nomePais2, pib2);
        
    if (pib1 > pib2) 
        printf ("\n*** Carta 1 Venceu! ***\n");                
    else if (pib2 > pib1) 
        printf ("\n*** Carta 2 Venceu! ***\n");
    else 
        printf ("\n*** Empate das Cartas! ***\n");        

    break;

    case 5: //Densidade Populacional, neste o calculo sera ao contrario, ou seja o menor vence
        
        printf ("Atributo: Densidade Populacional \n");
        printf ("%s: %.2f", nomePais1, densidadepopulacional1);
        printf ("%s: %.2f", nomePais2, densidadepopulacional2);
        
    if (densidadepopulacional1 < densidadepopulacional2) 
        printf ("\n*** Carta 1 Venceu! ***\n");                
    else if (densidadepopulacional2 < densidadepopulacional1) 
        printf ("\n*** Carta 2 Venceu! ***\n");
    else 
        printf ("\n*** Empate das Cartas! ***\n");        

    break;

    case 6: //PIB Percapita
        
        printf ("Atributo: PIB Percapita \n");
        printf ("%s: %.2f", nomePais1, pibpercapita1);
        printf ("%s: %.2f", nomePais2, pibpercapita2);
        
    if (pibpercapita1 > pibpercapita2) 
        printf ("\n*** Carta 1 Venceu! ***\n");                
    else if (pibpercapita2 > pibpercapita1) 
        printf ("\n*** Carta 2 Venceu! ***\n");
    else 
        printf ("\n*** Empate das Cartas! ***\n");        

    break;

    case 7: //Super Poder
        
        printf ("Atributo: Super Poder \n");
        printf ("%s: %.2f", nomePais1, superpoder1);
        printf ("%s: %.2f", nomePais2, superpoder2);
        
    if (superpoder1 > superpoder2) 
        printf ("\n*** Carta 1 Venceu! ***\n");                
    else if (superpoder2 > superpoder1) 
        printf ("\n*** Carta 2 Venceu! ***\n");
    else 
        printf ("\n*** Empate das Cartas! ***\n");        

    break;
   
    default: printf ("*** Escolha de opção invalida! ***\n");
        
    break;
}
    int atributo1, atributo2;
    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;
    float somaCarta1, somaCarta2;

     // Função 1 - selecionar valores do primeiro atributo
    
    printf("\nEscolha o primeiro atributo (1-7): \n");
    scanf("%d", &atributo1);
    
     switch (atributo1) {
        case 1: valor1Carta1 = populacao1; valor1Carta2 = populacao2; 
        break;

        case 2: valor1Carta1 = pontosturisticos1; valor1Carta2 = pontosturisticos2; 
        break;

        case 3: valor1Carta1 = area1; valor1Carta2 = area2; 
        break;

        case 4: valor1Carta1 = pib1; valor1Carta2 = pib2; 
        break;

        case 5: valor1Carta1 = densidadepopulacional1; valor1Carta2 = densidadepopulacional2; 
        break;

        case 6: valor1Carta1 = pibpercapita1; valor1Carta2 = pibpercapita2; 
        break;

        case 7: valor1Carta1 = superpoder1; valor1Carta2 = superpoder2; 
        break;

        default: printf("Opção inválida!\n"); 
        break;
    }

    // Função 2 - selecionar valores do segundo atributo
    
    printf("\nEscolha o segundo atributo (1-7): \n");
    scanf("%d", &atributo2);

    switch (atributo2) {
        case 1: valor2Carta1 = populacao1; valor2Carta2 = populacao2;
        break;

        case 2: valor2Carta1 = pontosturisticos1; valor2Carta2 = pontosturisticos2;
        break;

        case 3: valor2Carta1 = area1; valor2Carta2 = area2;
        break;

        case 4: valor2Carta1 = pib1; valor2Carta2 = pib2; 
        break;

        case 5: valor2Carta1 = densidadepopulacional1; valor2Carta2 = densidadepopulacional2; 
        break;

        case 6: valor2Carta1 = pibpercapita1; valor2Carta2 = pibpercapita2; 
        break;

        case 7: valor2Carta1 = superpoder1; valor2Carta2 = superpoder2; 
        break;

        default: printf("Opção inválida!\n"); 
        break;
    }

    // COMPARAÇÃO DOS DOIS ATRIBUTOS

    int pontosCarta1 = 0, pontosCarta2 = 0;

    // Primeiro atributo
    if (atributo1 == 5) { // Densidade - menor vence
        (valor1Carta1 < valor1Carta2) ? pontosCarta1++ : pontosCarta2++;
    } else {
        (valor1Carta1 > valor1Carta2) ? pontosCarta1++ : pontosCarta2++;
    }

    // Segundo atributo
    if (atributo2 == 5) { // Densidade - menor vence
        (valor2Carta1 < valor2Carta2) ? pontosCarta1++ : pontosCarta2++;
    } else {
        (valor2Carta1 > valor2Carta2) ? pontosCarta1++ : pontosCarta2++;
    }

    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    printf("\n*** RESULTADOS DA COMPARAÇÃO AVANÇADA ***\n");
    printf("%s - Soma dos Atributos: %.2f\n", nomePais1, somaCarta1);
    printf("%s - Soma dos Atributos: %.2f\n", nomePais2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("Carta 1 (%s) venceu!\n", nomePais1);
    } else if (somaCarta2 > somaCarta1) {
        printf("Carta 2 (%s) venceu!\n", nomePais2);
    } else {
        printf("Empate!\n");
    }


    return 0;
}