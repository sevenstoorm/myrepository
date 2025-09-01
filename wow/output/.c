#include <stdio.h>
#include <string.h>

// Funções dos dispositivos inteligentes
void controleportao() { //controle do portao
    int abrir;
    printf("Abrir portão? (1- Sim / 0- Não): ");
    scanf("%d", &abrir);
    if (abrir)
        printf("Portão abrindo.....\n");
    else
        printf("Portão permanece fechado\n");
}

void fechaduracomsenha() { //fechadura principal com senha
    int senha;
    printf("Digite a senha da porta: ");
    scanf("%d", &senha);
    if (senha == 19234)
        printf("Porta destrancada\n");
    else
        printf("Senha incorreta, acesso negado.\n");
}

void luzporpalmas() { //luz com base na quantia de palmas
    int palmas;
    printf("Caso queira acender ou apagar a luz, bata duas palmas: ");
    scanf("%d", &palmas);
    if (palmas == 2)
        printf("Luz alternada\n");
    else
        printf("Sem alterações na luz\n");
}

void comandoporvoz() { //comando de voz
    char comando[50];
    printf("Digite um comando por voz (ex: 'me lembre de comprar leite'): ");
    scanf(" %[^\n]", comando);
    printf("Comando de voz reconhecido: %s\n", comando);
}

void geladeirainteligente() { //geladeira
    printf("Temperatura da geladeira: 4°C\n");
    printf("Alimentos dentro do prazo de validade.\n");
}

void arcondicionado() { //ar condicionado
    int tempa;
    printf("Temperatura do ambiente atual: ");
    scanf("%d", &tempa);
    if (tempa > 25)
        printf("Ligando o ar condicionado.\n");
    else
        printf("Temperatura agradável. Ar condicionado desligado.\n");
}

void sercureserv() { //sercureserv, segurança
    printf("Secure Serv ligado: Alarmes e monitoramento 24h ativados.\n");
}

void roboaspirador() { //robo aspirador
    int sujeira;
    printf("A casa está suja? (1- Sim / 0- Não): ");
    scanf("%d", &sujeira);
    if (sujeira)
        printf("Iniciando modo limpeza. Tempo estimado: 2 horas.\n");
    else
        printf("Casa limpa. Robô desligado.\n");
}

void cafeteirainteligente() { //cafeteira
    int horario;
    printf("Digite o horário para o café (formato 24h - ex: 7 para 7h00): ");
    scanf("%d", &horario);
    printf("Horário programado: %d:00. Café será preparado.\n", horario);
}

void luzcombasenaluminosidade() { //luz com base no grau de luminosidade
    int luminosidade;
    printf("Porcentagem de luz no ambiente (0 a 100): ");
    scanf("%d", &luminosidade);
    if (luminosidade < 30)
        printf("Luminosidade baixa. Ligando a luz...\n");
    else
        printf("Ambiente claro. Luz desligada.\n");
}

void luzcombasenomovimento() { //luz com base no movimento
    int movimento;
    printf("Foi detectado movimento? (1- Sim / 0- Não): ");
    scanf("%d", &movimento);
    if (movimento)
        printf("Movimento detectado. Acendendo a luz...\n");
    else
        printf("Sem movimento. Luz permanece desligada.\n");
}
// O comando void serve como um separador de funções fora do código, com cada aparelho tendo sua função
// O void separa as funções e códigos do código principal

int main() {
    int opcao;

    do { //menu de opções
        printf("\n-- Menu da Casa Inteligente --\n");
        printf("1. Controle do portão\n");
        printf("2. Fechadura com senha\n");
        printf("3. Luz com duas palmas\n");
        printf("4. Alexa (comando de voz)\n");
        printf("5. Geladeira inteligente\n");
        printf("6. Ar condicionado inteligente\n");
        printf("7. Secure Serv\n");
        printf("8. Robô aspirador inteligente\n");
        printf("9. Cafeteira inteligente\n");
        printf("10. Luz com base na luminosidade\n");
        printf("11. Luz com base em movimento\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) { //modo escolha 
            case 1: controleportao(); break;
            case 2: fechaduracomsenha(); break;
            case 3: luzporpalmas(); break;
            case 4: comandoporvoz(); break;
            case 5: geladeirainteligente(); break;
            case 6: arcondicionado(); break;
            case 7: sercureserv(); break;
            case 8: roboaspirador(); break;
            case 9: cafeteirainteligente(); break;
            case 10: luzcombasenaluminosidade(); break;
            case 11: luzcombasenomovimento(); break;
            case 0: printf("Encerrando o sistema...\n"); break;
            default: printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0); // enquanto diferente de 0
// O comando case vai ser para a escolha de cada aparelho, executando os comandos separadamente em void.
// Ex: Se eu selecionar a cafeteira, ele vai abrir o void da cafeteira, executando seus respectivos comandos e funções.
    return 0;
}



//[...] → Indica um conjunto de caracteres permitidos.

//^\n → Significa "qualquer caractere exceto a quebra de linha".

//O espaço antes do % (" %[^\n]") → Serve para ignorar espaços em branco anteriores, como \n deixado pelo Enter anterior.


