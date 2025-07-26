#include <stdio.h>

int main(){ // Definição das variáveis
    int populacao1, pontoTuristico1, populacao2, pontoTuristico2;
    char estado1, codigoCarta1[3], cidade1[20], estado2, codigoCarta2[3], cidade2[20];
    float area1, PIB1, area2, PIB2;
    
    // Nessa primeira parte, o usuário digita os dados da primeira cidade
    printf("Bem vindo ao Super Trunfo: versão Novato!\nPara iniciarmos, digite uma letra que representa o Estado (de A a H):\n");
    scanf("%c", &estado1);
    
    printf("Agora, digite o código da carta (só vale de 01 a 04):\n");
    scanf("%s", &codigoCarta1);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);
    
    printf("Qual a quantidade da população dessa cidade? \n");
    scanf("%d", &populacao1);
    
    printf("Qual a área da cidade? \n");
    scanf("%f", &area1);
    
    printf("Qual o PIB registrado da cidade? \n");
    scanf("%f", &PIB1);
    
    printf("Quantos pontos turísticos existem na cidade? \n"); 
    scanf("%d", &pontoTuristico1);
    printf("\n");
    
    // O usuário informa os mesmos tipos de dados para a segunda cidade
    printf("Agora informe os dados da segunda carta.\nPara isso, digite uma letra que represente o Estado 2 (de A a H):\n");
    scanf(" %c", &estado2); // o espaço antes de %c é para corrigir o problema do Enter pular para a pergunta seguinte. Pela minha pesquisa, \n fica memorizado no buffer, causando esse bug.
    
    printf("Agora, digite o código da carta (só vale de 01 a 04):\n");
    scanf("%s", &codigoCarta2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    
    printf("Qual a quantidade da população dessa cidade? \n");
    scanf("%d", &populacao2);
    
    printf("Qual a área da cidade? \n");
    scanf("%f", &area2);
    
    printf("Qual o PIB registrado da cidade? \n");
    scanf("%f", &PIB2);
    
    printf("Quantos pontos turísticos existem na cidade? \n");
    scanf("%d", &pontoTuristico2);
    printf("\n");
    
    printf("DADOS DA CARTA 1:\nEstado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigoCarta1); // "%c%s" une a informação anterior com a atual, formando o código da carta, semelhante a uma concatenação.
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // "%.2f" limita em duas casas decimais
    printf("PIB: %.2f milhões de reais\n", PIB1);
    printf("Quantidade de pontos turísticos: %d\n", pontoTuristico1);
    printf("\n"); // Pula uma linha para deixar a leitura mais organizada
    
    printf("DADOS DA CARTA 2:\nEstado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", PIB2);
    printf("Quantidade de pontos turísticos: %d\n", pontoTuristico2);
    printf("\n");
}
