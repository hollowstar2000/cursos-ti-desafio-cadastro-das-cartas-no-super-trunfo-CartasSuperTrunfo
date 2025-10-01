#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        
    //AS linhas abaixo determinam as variáveis a serem utilizadas para a Carta 1 e seus tipos.

        char estado[5];
        char codigo[5];
        char cidade[5];
        int populacao;
        float area;
        float pib;
        int pturisticos;
        float densidade;
        float pibpercap;


    //As linhas abaixo determinam as variáveis a serem utilizadas para a Carta 2 e seus tipos.

        char estado2 [5];
        char codigo2[5];
        char cidade2[5];
        int populacao2;
        float area2;
        float pib2;
        int pturisticos2;
        float densidade2;
        float pibpercap2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //As linhas abaixo criam o código que coletará os dados para a Carta 1 e os atribuirá às devidas variáveis.    
    
    printf("INSIRA OS DADOS PARA A CARTA 1 \n");    

        printf ("Digite o Estado: ");
            scanf ("%s", &estado);
        printf ("Digite o Código: ");
            scanf ("%s", &codigo);
        printf ("Digite a cidade: ");
            scanf ("%s", &cidade);  
        printf ("Digite a População: ");
            scanf ("%d", &populacao);
        printf ("Digite a Área: ");
            scanf ("%f", &area );
        printf ("Digite o PIB: ");
            scanf ("%f", &pib );    
        printf ("Informe Número de Pontos Turístico:");
            scanf ("%i", &pturisticos);

    
    //As linhas abaixo criam o código que coletará os dados para a Carta 2 e os atribuirá às devidas variáveis
    printf("\n\n INSIRA OS DADOS PARA CARTA 2 \n");        

        printf ("Digite o Estado: ");
            scanf ("%s", &estado2);
        printf ("Digite o Código: ");
            scanf ("%s", &codigo2);
        printf ("Digite a cidade: ");
            scanf ("%s", &cidade2);  
        printf ("Digite a População: ");
            scanf ("%d", &populacao2);
        printf ("Digite a Área: ");
            scanf ("%f", &area2 );
        printf ("Digite o PIB: ");
            scanf ("%f", &pib2 );    
        printf ("Informe Número de Pontos Turístico: ");
            scanf ("%d", &pturisticos2);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //As linhas abaixo deifinem o código destinado á apresentação da Carta 1.    
    
    printf ("\n\n CARTA 1 \n");   
        
        printf ("Estado: %c\n", estado);
        printf ("Código:  %s\n", codigo);
        printf ("Nome da Cidade:  %s\n", cidade);
        printf ("População:  %i\n", populacao);
        printf ("Área:  %.2f Km²\n", area);
        printf ("PIB:  %.2f Bilhões de Reais\n", pib);
        printf ("Número de Pontos Turísticos:  %i\n", pturisticos);
        
        pib = pib*1000000000; //converte o PIB em bilhões
        densidade=populacao/area; //Calcula a densidade populacional
        pibpercap=pib/populacao; //Calcula o Pib per capita
        
        printf ("Densidade Populacional:   %.2f hab/km2 \n", densidade);
        printf ("PIB Per Capita:  %.2f Reais \n", pibpercap);
    
    //As linhas abaixo definem o código destinado a apresentação da Carta 2    
    printf("\n\n CARTA2\n");

        printf ("Estado:  %c\n", estado2);
        printf ("Código:  %s\n", codigo2);
        printf ("Nome da Cidade:  %s\n", cidade2);
        printf ("População:  %i\n", populacao2);
        printf ("Área:  %.2f Km²\n", area2);
        printf ("PIB:  %.2f Bilhões de Reais\n", pib2);
        printf ("Número de Pontos Turísticos:  %i\n", pturisticos2);

        pib2 = pib2*1000000000; //converte o PIB em bilhões
        densidade2=populacao2/area2; //Calcula a densidade populacional
        pibpercap2=pib2/populacao2; //Calcula o Pib per capita
        

        printf ("Densidade Populacional:   %.2f hab/km2 \n", densidade2);
        printf ("PIB Per Capita:  %.2f Reais \n", pibpercap2);
    
    return 0;
}
