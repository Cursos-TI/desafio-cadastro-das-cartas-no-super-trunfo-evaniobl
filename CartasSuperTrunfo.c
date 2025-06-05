//Esse código foi desenvolvido usando Visual Studio Code e em seguida eu o trouxe para a plataforma do git seguindo o tutorial da estácio
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Durante o desenvolvimento do código eu optei por inicializar as variáveis com informações obtidas através de pesquisas no google com exceção do PIB 
    //Mesmo assim desenvolvi a atividade para que o usuário consiga cadastrar e ler com clareza as duas cartas
    //Variaveis da primeira carta, "01"
    char sigla01[10] = "SP";
    char code01[10] = "SP01";
    char cidade01[50] = "Campos_do_Jordão";
    int popula01 = 46974; // 1
    float km01 = 290.52; // 2
    double pib01 =  1449808280.00; // 3
    int turist01 = 32; // 4
    float densidadepopu01 = (float) popula01 / km01; // 5
    float pibpercap01 = (float) pib01 / popula01;
    float inversodensidade01 = (float) popula01 * km01;
    float superpoder01 = (float) popula01 + km01 + pib01 + turist01 + pibpercap01 + inversodensidade01;
  

    //Variáveis da segunda carta, "02"
    char sigla02 [10] = "RJ";
    char code02[10] = "RJ01";
    char cidade02[50] = "Itaperuna";
    int popula02 = 101041;
    float km02 = 1106.69;
    double pib02 =  3287189082.02;
    int turist02 = 10;
    float densidadepopu02 = (float) popula02 / km02;
    float pibpercap02 = (float) pib02 / popula02;
    float inversodensidade02 = (float) popula02 * km02;
    float superpoder02 = (float) popula02 + km02 + pib02 + turist02 + pibpercap02 + inversodensidade02;
    
    float escolha1 = 0;
    float escolha2 = 0; //variáveis para agregar valores de outras variáveis sem permitir repetição de stts
    double soma02 = 0;
    double soma01 = 0; //variáveis para para somar as opções escolhidas

    /*
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
    printf ("PIB: %.02f Bilhões de Reais\n", pib01);
    printf ("Númeors de pontos turísticos: %d\n", turist01);
    printf ("Densidade Populacional: %.02fhab/Km²\n", densidadepopu01);
    printf ("PIB per Capita: %.02fReais\n", pibpercap01);
    printf ("nivel do superpoder: %.2f \n", superpoder01);
    printf ("\n");

    //"imprimindo" as informações na tela sobre a segunda carta: "Rio de Janeiro, Itaperuna"
    printf ("Segunda Carta:\n");
    printf ("Estado: %s \n", sigla02);
    printf ("Código da carta: %s\n", code02);
    printf ("Nome da cidade: %s\n", cidade02);
    printf ("População: %d\n", popula02);
    printf ("Área: %.02fKm²\n", km02);
    printf ("PIB: %.02f Bilhões de Reais\n", pib02);
    printf ("Númeors de pontos turísticos: %d\n", turist02);
    printf ("Densidade Populacional: %.02fhab/Km²\n", densidadepopu02);
    printf ("PIB per Capita: %.02fReais\n", pibpercap02);
    printf ("nivel do superpoder: %.2f \n", superpoder02);
    printf ("\n");
    printf ("\n");
*/

    printf ("Bem vindo ao Super Trunfo! \n\n");
    int opcao; // para usar com switch
    printf ("MENU!\n");             //MENU INTERATIVO PARA ESCOLHA
    printf ("(1) Iniciar jogo\n");
    printf ("(2) Regras do jogo\n");
    printf ("(3) Sair do jogo\n\n");
    printf ("Opção selecionada:");
    scanf ("%d", &opcao);
    printf ("\n");
    switch (opcao)
    {
    case 1:
        printf ("Vamos começar!\n\n"); // MAIS MENU PARA CONTINUAR A INTERAÇAO
        printf ("Nós temos duas cartas e você poderá escolher dois atributos DIFERENTES para serem somados!\n\n");
        printf ("(1) - População\n");
        printf ("(2) - Área\n");
        printf ("(3) - PIB\n");
        printf ("(4) - Pontos Turísticos\n");
        printf ("(5) - Densidade Populacional\n\n");

        // ESCOLHER OS ATRIBUTOS DAS CARTAS
        printf ("Sua primeira escolha é: "); 
        scanf ("%f", &escolha1);
        printf ("Agora sua segunda escolha é: ");
        scanf ("%f", &escolha2);
        
        // EVITAR QUE ESCOLHAS IMPREVISTAS ACONTEÇAM USANDO "OU" LÓGICO NAS CONDIÇOES ADEQUADAS
        if (escolha1 == escolha2 || escolha1 <1 || escolha1 >5 || escolha2 <1 || escolha2 >5) {
            printf ("Opção inválida, por favor selecione números referente aos atributos das cartas sem que se repitam\n");
        }

        //SOMANDO O *****primeiro***** ATRIBUTO À VARIÁVEL QUE VAI SER CONSIDERADA O "VALOR DA *****PRIMEIRA***** CARTA" AO FINAL DO JOGO
        if      (escolha1 == 1) soma01 += (double)popula01;
        else if (escolha1 == 2) soma01 += (double)km01;
        else if (escolha1 == 3) soma01 += (double)pib01;
        else if (escolha1 == 4) soma01 += (double)turist01;
        else if (escolha1 == 5) soma01 += (double)inversodensidade01;
        
        //SOMANDO O *****segundo***** ATRIBUTO À VARIÁVEL QUE VAI SER CONSIDERADA O "VALOR DA *****PRIMEIRA***** CARTA" AO FINAL DO JOGO
        if      (escolha2 == 1) soma01 += (double)popula01;
        else if (escolha2 == 2) soma01 += (double)km01;
        else if (escolha2 == 3) soma01 += (double)pib01;
        else if (escolha2 == 4) soma01 += (double)turist01;
        else if (escolha2 == 5) soma01 += (double)inversodensidade01;

        //*****primeiro atributo***** *****SEGUNDA CARTA*****
        if      (escolha1 == 1) soma02 += (double)popula02;
        else if (escolha1 == 2) soma02 += (double)km02;
        else if (escolha1 == 3) soma02 += (double)pib02;
        else if (escolha1 == 4) soma02 += (double)turist02;
        else if (escolha1 == 5) soma02 += (double)inversodensidade02;

        //*****segundo atributo***** *****SEGUNDA CARTA*****
        if      (escolha2 == 1) soma02 += (double)popula02;
        else if (escolha2 == 2) soma02 += (double)km02;
        else if (escolha2 == 3) soma02 += (double)pib02;
        else if (escolha2 == 4) soma02 += (double)turist02;
        else if (escolha2 == 5) soma02 += (double)inversodensidade02;
        
        // exibindo e comparando para cada situação
        printf ("\nAtributos escolhidos:\n\n");
        printf ("Carta 1: %s, (%s)\n", cidade01, sigla01);
        if      (escolha1 == 1) printf ("1 - População: %d \n", popula01); // ESCOLHA 01   
        else if (escolha1 == 2) printf ("1 - Área: %.2f \n", km01);
        else if (escolha1 == 3) printf ("1 - PIB: %.2f \n", pib01);
        else if (escolha1 == 4) printf ("1 - Pontos Turisticos: %d \n", turist01);
        else if (escolha1 == 5) printf ("1 - Densidade Populacional: %.2f \n", densidadepopu01);

        if      (escolha2 == 1) printf ("2 - População: %d \n", popula01); // ESCOLHA 02    
        else if (escolha2 == 2) printf ("2 - Área: %.2f \n", km01);
        else if (escolha2 == 3) printf ("2 - PIB: %.2f \n", pib01);
        else if (escolha2 == 4) printf ("2 - Pontos Turisticos: %d \n", turist01);
        else if (escolha2 == 5) printf ("2 - Densidade Populacional: %.2f \n", densidadepopu01);
        printf ("3 - SOMA: %.2f \n", soma01);

        // SEGUNDA CARTA, mesmo processo
        printf ("\nCarta 2: %s, (%s)\n", cidade02, sigla02);
        
        if      (escolha1 == 1) printf ("1 - População: %d \n", popula02);// ESCOLHA 01    
        else if (escolha1 == 2) printf ("1 - Área: %.2f \n", km02);
        else if (escolha1 == 3) printf ("1 - PIB: %.2f \n", pib02);
        else if (escolha1 == 4) printf ("1 - Pontos Turisticos: %d \n", turist02);
        else if (escolha1 == 5) printf ("1 - Densidade Populacional: %.2f \n", densidadepopu02);

        if      (escolha2 == 1) printf ("2 - População: %d \n", popula02);// ESCOLHA 02
        else if (escolha2 == 2) printf ("2 - Área: %.2f \n", km02);
        else if (escolha2 == 3) printf ("2 - PIB: %.2f \n", pib02);
        else if (escolha2 == 4) printf ("2 - Pontos Turisticos: %d \n", turist02);
        else if (escolha2 == 5) printf ("2 - Densidade Populacional: %.2f \n", densidadepopu02);
        printf ("3 - SOMA: %.2f \n", soma02);


        printf ("\nVENCEDORES DAS CATEGORIAS!!\n\n"); 

        // quero criar textos específicos para serem mostrados como resultado de forma clara
        if (escolha1 == 1) {
            if (popula01 > popula02)        printf ("1 - POPULAÇAO: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (popula01 < popula02)   printf ("1 - POPULAÇAO: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                            printf ("EMPATE!!\n");
        }
        if (escolha1 == 2) {
            if (km01 > km02)        printf ("1 - ÁREA: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (km01 < km02)   printf ("1 - ÁREA: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                    printf ("EMPATE!!\n");
        }
        if (escolha1 == 3) {
            if (pib01 > pib02)      printf ("1 - PIB: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (pib01 < pib02) printf ("1 - PIB: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                    printf ("EMPATE!!\n");
        }
        if (escolha1 == 4) {
            if (turist01 > turist02)      printf ("1 - PONTOS TURISTICOS: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (turist01 < turist02) printf ("1 - PONTOS TURISTICOS: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                          printf ("EMPATE!!\n");
        }
        if (escolha1 == 5) {
            if (densidadepopu01 < densidadepopu02)      printf ("1 - DENSIDADE POPULACIONAL: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (densidadepopu01 > densidadepopu02) printf ("1 - DENSIDADE POPULACIONAL: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                                        printf ("EMPATE!!\n");
        }

        // AGORA PARA A ESCOLHA 2
        if (escolha2 == 1) {
            if (popula01 > popula02)        printf ("2 - POPULAÇAO: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (popula01 < popula02)   printf ("2 - POPULAÇAO: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                            printf ("EMPATE!!\n");
        }
        if (escolha2 == 2) {
            if (km01 > km02)        printf ("2 - ÁREA: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (km01 < km02)   printf ("2 - ÁREA: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                    printf ("EMPATE!!\n");
        }
        if (escolha2 == 3) {
            if (pib01 > pib02)      printf ("2 - PIB: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (pib01 < pib02) printf ("2 - PIB: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                    printf ("EMPATE!!\n");
        }
        if (escolha2 == 4) {
            if (turist01 > turist02)      printf ("2 - PONTOS TURISTICOS: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (turist01 < turist02) printf ("2 - PONTOS TURISTICOS: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                          printf ("EMPATE!!\n");
        }
        if (escolha2 == 5) {
            if (densidadepopu01 < densidadepopu02)      printf ("2 - DENSIDADE POPULACIONAL: Carta 1 - %s (%s)\n", cidade01, sigla01);
            else if (densidadepopu01 > densidadepopu02) printf ("2 - DENSIDADE POPULACIONAL: Carta 2 - %s (%s)\n", cidade02, sigla02);
            else                                        printf ("EMPATE!!\n");
        }
                // texto para soma
        if (soma01 > soma02) printf ("3 - SOMA: Carta 1 - %s (%s)\n", cidade01, sigla01);
        else if (soma01 < soma02) printf ("3 - SOMA: Carta 2 - %s (%s)\n", cidade02, sigla02);
        else printf ("EMPATE!!\n");

        break;
    case 2: //REGRAS - SIMPLES
        printf ("Regras! \n\n");
        printf ("1º - O jogador deve escolher duas (2) dentre as cinco (5) opções de atributos das cidades/cartas \n");
        printf ("2º - Esses atributos NÃO podem se repetir e vão se somar \n");
        printf ("3º - O resultado da SOMA será comparado com o resultado da SOMA dos mesmos atributos da outra carta \n");
        printf ("4º - O vencedor será a carta que atingir pontuações mais alta nas SOMAS \n");
        printf ("5º (especial) - o atributo Densidade Demográfica tem a condição de vitória invertida \n");
        printf ("a Densidade Demográfica menor tem mais valor para a soma\n");
    case 3:
        printf ("Encerrando...\n");
        break;
    default:
        printf ("Opção inválida, por favor tente novamente\n");
        return 1;
    }
    
    
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
