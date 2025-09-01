#include <stdio.h> 
#include <string.h>

int main(){
    int idade, opcao; // Idade e opção são inteiros
    char continuar; // Caractere continuar. Ex: "S" ou "N" para a resposta.
    int btd;
    printf("Informe sua idade em anos:\n ");
    scanf("%d", &idade);
    //Faça até
    do {
        printf("\n============Menu de escolhas=================\n");
        printf("      1- Ver idade em meses.\n");
        printf("      2- Ver idade em dias.\n");
        printf("      3- Estimativa de batimentos cardiacos.\n");
        printf("      4- Estimativa de luas cheias.\n");
        printf("      5- Estimativa de copos da agua.\n");
        printf("      Escolha alguma das opcoes acima,\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: //caso opção 1
                printf("Voce tem aproximadamente %d meses de vida.\n", idade * 12);// Ex: 16 * 12
                break; //Quebra de resposta, ou seja, caso 1 finalizado. Após isso será exibida uma mensagem de continuaçao
            case 2: //caso opção 2
                printf("Voce tem aproximadamente %d dias de vida.\n", idade * 365); //Ex: 16 * 365
                break;
            case 3: //caso opção 3
                // Media de 100 mil batimentos cardíacos
                btd = idade * 365 * 100000;
                printf("Voce tem aproximandamente uma media de %d batimentos cardiacos.\n", btd);
                    if (btd < 1){
                        btd = (btd * -1);
                    }else {
                        btd = (btd * 1);
                        }
                printf("Voce tem aproximadamente uma media de %d batimentos cardiacos.\n", btd);
                break;
            case 4: //caso opção 4
                // Uma lua cheia ocorre a cada 29,5 dias
                printf("Voce viu aproximadamente cerca de %d luas cheis.\n", (idade * 365) / 29); // (16 * 365) / 29
                break;
            case 5: //caso opção 5
                // 8 Copos da água por dia
                printf("Voce tomou uma media de %d copos de água até hoje.\n", idade * 365 * 8); // 16 * 365 * 8
                break; 
            default: //Caso não seja nenhuma das opções que o programa possui, por exemplo, 8.
                printf("Escolha inválida.\n");

 

         } 
         printf ("\nDeseja ver mais? (S / N): "); // Se a resposta for "S" ou "s" o programa irá continuar, mas se for "N" ou "n" o programa irá ser encerrado e exibir uma mensagem de agradescimento.
         scanf(" %c", &continuar);


    }   while (continuar == 'S' || continuar == 's');  //O programa irá executar toda a programação dentro de "do" enquanto "continuar" possuir o valor de "S" ou "s".
        printf("\n Obrigado por interagir com a nossa calculadora, volte sempre!\n");
        return 0;

} //Fim de main()