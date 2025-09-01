#include <stdio.h>

int main() { //inicio
    int escolha;

    printf("Escolha sua classe:\n");
    printf("1- Cavaleiro\n");
    printf("2- Assassino\n");
    printf("3- Mago\n");
    printf("4- Necromante\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Voce escolheu o Cavaleiro:\n");
            printf("Atributos:\n");
            printf("Defesa: 100\n");
            printf("Ataque: 80\n");
            printf("Vida: 70\n");
            printf("SPA: 5s\n");
            printf("Passiva: Furia de Argos --> Ataques fortes atordoam os inimigos\n");
            printf("Potencial: ?\n");
            break;
        case 2:
            printf("Voce escolheu o Assassino:\n");
            printf("Atributos:\n");
            printf("Defesa: 50\n");
            printf("Ataque: 90\n");
            printf("Vida: 40\n");
            printf("SPA: 2s\n");
            printf("Passiva: Sombras Corrosivas --> Ataques causam sangramento --> Atacar inimigos com sangramento aumenta o dano\n");
            printf("Potencial: ?\n");
            break;
        case 3:
            printf("Você escolheu o Mago:\n");
            printf("Atributos:\n");
            printf("Defesa: 30\n");
            printf("Ataque: 60\n");
            printf("Vida: 80\n");
            printf("SPA: 3s\n");
            printf("Passiva: Magia Espectral --> O mago pode fazer ate 3 clones de si, cada um com metade de todos os atributos do mago\n");
            printf("Potencial: ?\n");
            break;
        case 4:
            printf("Voce escolheu o Necromante:\n");
            printf("Atributos:\n");
            printf("Defesa: 50\n");
            printf("Ataque: 85\n");
            printf("Vida: 80\n");
            printf("SPA: 4.5s\n");
            printf("Passiva: ???\n");
            printf("Potencial: ???\n");
            break;
        default:
            printf("Opçao invalida. Tente novamente.\n");
            break;
    }
    

    return 0;
}


