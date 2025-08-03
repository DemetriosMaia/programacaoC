#include <stdio.h>

int main(){ // Definição das variáveis
    int pontoTuristico1, pontoTuristico2, carta;
    unsigned long int populacao1, populacao2; // nesse formato para acomodar números maiores
    char estado1, codigoCarta1[3], cidade1[20], estado2, codigoCarta2[3], cidade2[20];
    float area1, PIB1, densidade1, perCapita1, area2, PIB2, densidade2, perCapita2, superPoder1, superPoder2;
    
    // Nessa primeira parte, o usuário digita os dados da primeira cidade
    printf("Bem vindo ao Super Trunfo: versão MESTRE!\nPara iniciarmos, digite uma letra que representa o Estado (de A a H):\n");
    scanf("%c", &estado1);
    
    printf("Agora, digite o código da carta (só vale de 01 a 04):\n");
    scanf("%s", &codigoCarta1);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);
    
    printf("Qual a quantidade da população dessa cidade? \n");
    scanf("%lu", &populacao1);
    
    printf("Qual a área da cidade? \n");
    scanf("%f", &area1);
    
    printf("Qual o PIB registrado da cidade? \n");
    scanf("%f", &PIB1);
    
    printf("Quantos pontos turísticos existem na cidade? \n"); 
    scanf("%d", &pontoTuristico1);
    printf("\n");
    
    densidade1 = populacao1 / area1; // calcula a densidade demográfica;
    
    perCapita1 = PIB1 / populacao1; // calcula a renda perCapita;
    
    superPoder1 = populacao1 + area1 + PIB1 + pontoTuristico1 + perCapita1 - densidade1; // Quanto menor a densidade populacional, maior o "Poder", motivo de ser subtraído do valor do super poder
    
    // O usuário informa os mesmos tipos de dados para a segunda cidade
    printf("Agora informe os dados da segunda carta.\nPara isso, digite uma letra que represente o Estado 2 (de A a H):\n");
    scanf(" %c", &estado2); // o espaço antes de %c é para corrigir o problema do Enter pular para a pergunta seguinte. Pela minha pesquisa, \n fica memorizado no buffer, causando esse bug.
    
    printf("Agora, digite o código da carta (só vale de 01 a 04):\n");
    scanf("%s", &codigoCarta2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    
    printf("Qual a quantidade da população dessa cidade? \n");
    scanf("%lu", &populacao2);
    
    printf("Qual a área da cidade? \n");
    scanf("%f", &area2);
    
    printf("Qual o PIB registrado da cidade? \n");
    scanf("%f", &PIB2);
    
    printf("Quantos pontos turísticos existem na cidade? \n");
    scanf("%d", &pontoTuristico2);
    printf("\n");
    
    densidade2 = populacao2 / area2;
    
    perCapita2 = PIB2 / populacao2;
    
    superPoder2 = populacao2 + area2 + PIB2 + pontoTuristico2 + perCapita2 - densidade2;
    
    int maiorPopulacao = populacao1 > populacao2;
    int maiorArea = area1 > area2;
    int maiorPIB = PIB1 > PIB2;
    int maiorPonto = pontoTuristico1 > pontoTuristico2;
    int maiorPercapita = perCapita1 > perCapita2;
    int menorDensidade = densidade1 < densidade2;
    int superPoder = superPoder1 > superPoder2;
    
    printf("DADOS DA CARTA 1:\nEstado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigoCarta1); // "%c%s" une a informação anterior com a atual, formando o código da carta, semelhante a uma concatenação.
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1); // "%.2f" limita em duas casas decimais
    printf("PIB: R$%.2f\n", PIB1);
    printf("Quantidade de pontos turísticos: %d\n", pontoTuristico1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade1);
    printf("Renda perCapita: R$%.2f\n", perCapita1);
    printf("\n"); // Pula uma linha para deixar a leitura mais organizada
    
    printf("DADOS DA CARTA 2:\nEstado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", PIB2);
    printf("Quantidade de pontos turísticos: %d\n", pontoTuristico2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade2);
    printf("Renda perCapita: R$%.2f\n", perCapita2);
    printf("\n");
    
    // Bloco de comparações para verificação da carta vitoriosa. Os maiores valores vencem, exceto a densidade populacional;
    printf("RESULTADO DAS COMPARAÇÕES\nPopulação: Carta %d venceu (resultado: %d)\n", carta = 2 - maiorPopulacao, maiorPopulacao);
    printf("Área: Carta %d venceu (resultado: %d)\n", carta = 2 - maiorArea, maiorArea);
    printf("PIB: Carta %d venceu (resultado: %d)\n", carta = 2 - maiorPIB, maiorPIB);
    printf("Quantidade de pontos turísticos: Carta %d venceu (resultado: %d)\n", carta = 2 - maiorPonto, maiorPonto);
    printf("Densidade populacional: Carta %d venceu (resultado: %d)\n", carta = 2 - menorDensidade, menorDensidade);
    printf("Renda perCapita: Carta %d venceu (resultado: %d)\n", carta = 2 - maiorPercapita, maiorPercapita);
    printf("Super Poder: Carta %d venceu (resultado: %d)\n", carta = 2 - superPoder, superPoder);
}
