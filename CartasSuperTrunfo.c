//Esse código foi desenvolvido usando Visual Studio Code e em seguida eu o trouxe para a plataforma do git seguindo o tutorial da estácio
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Durante o desenvolvimento do código eu optei por inicializar as variáveis com informações obtidas através de pesquisas no google
    //Mesmo assim desenvolvi a atividade para que o usuário consiga cadastrar e ler com clareza as duas cartas
    //Variaveis da primeira carta, "01"
    char sigla01[10] = "SP";
    char code01[10] = "SP01";
    char cidade01[50] = "Campos_do_Jordão";
    int popula01 = 47000;
    float km01 = 290.52;
    float pib01 =  1276363.74;
    int turist01 = 32;

    //Variáveis da segunda carta, "02"
    char sigla02[10] = "RJ";
    char code02[10] = "RJ01";
    char cidade02[50] = "Itaperuna";
    int popula02 = 101041;
    float km02 = 1106.694;
    float pib02 = 3287189082.02;
    int turist02 = 10;

    //Cadastro das cartas com "scanf"
    //Primeira Carta
    printf ("Vamos cadastrar os dados da nossa primeira carta para o nosso SUPERTRUNFO - PAÍSES!\n");

    printf ("Digite a sigla do ESTADO de origem da cidade desejada:\n");
    scanf ("%s", &sigla01);

    printf ("Dê um código à carta, (exemplo: RJ01)\n");
    scanf ("%s", &code01);

    printf ("Informe o NOME da cidade sem espaços: \n");
    scanf ("%s", &cidade01);

    printf ("População dessa cidade: \n");
    scanf ("%f", &popula01);

    printf ("Em km², informe a área dessa cidade: \n");
    scanf ("%f", &km01);

    printf ("Informe o PIB: \n");
    scanf ("%f", &pib01);

    printf ("Quantos pontos turísticos tem essa cidade: \n");
    scanf ("%d", &turist01);

    //Quebra de linha com direcionamento p/ o usuário
    printf ("\n");
    printf ("Agora vamos para o cadastro da segunda carta!\n\n");

    //Segunda Carta
    printf ("Sigla do ESTADO de origem da cidade desejada: \n");
    scanf ("%s", &sigla02);

    printf ("Código à carta, (exemplo: MG01)\n");
    scanf ("%s", &code02);

    printf ("Informe o NOME da cidade sem espaços: \n");
    scanf ("%s", &cidade02);

    printf ("População dessa cidade: \n");
    scanf ("%f", &popula02);

    printf ("Em km², informe a área dessa cidade: \n");
    scanf ("%f", &km02);

    printf ("Informe o PIB: \n");
    scanf ("%f", &pib02);

    printf ("Quantos pontos turísticos tem essa cidade: \n");
    scanf ("%d", &turist02);

    //OUTRA QUEBRA DE LINHA PARA SEGUIR COM A IMPRESSÃO DOS DADOS COLETADOS
    printf ("\n");
    printf ("Obrigado!!!\n");
    printf ("Aqui estão as duas cartas e suas informações! \n\n");

    //"imprimindo" as informações na tela sobre a carta 01 "São paulo, Campos do Jordão"
    printf ("Primeira Carta:\n");
    printf ("Estado: %s \n", sigla01);
    printf ("Código da carta: %s\n", code01);
    printf ("Nome da cidade: %s\n", cidade01);
    printf ("População: %d\n", popula01);
    printf ("Área: %.02fKm²\n", km01);
    printf ("PIB: R$:%.02f\n", pib01);
    printf ("Númeors de pontos turísticos: %d\n", turist01);
    printf ("\n");

    //"imprimindo" as informações na tela sobre a segunda carta: "Rio de Janeiro, Itaperuna"
    printf ("Segunda Carta:\n");
    printf ("Estado: %s \n", sigla02);
    printf ("Código da carta: %s\n", code02);
    printf ("Nome da cidade: %s\n", cidade02);
    printf ("População: %d\n", popula02);
    printf ("Área: %.02fKm²\n", km02);
    printf ("PIB: R$:%.02f\n", pib02);
    printf ("Númeors de pontos turísticos: %d\n", turist02);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
