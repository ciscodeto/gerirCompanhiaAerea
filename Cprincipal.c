#include <stdio.h>
#include "Cestruturas.c"
#include "Cprototipos.c"
#include "Cpilotos.c"
#include "Cvoos.c"

int main() {
    Piloto BDPilotos[TOTAL];
    Voo BDVoos[TOTAL];
    int totPilot = 0;
    int totVoo = 0;

    int opcao_principal, opcao_submenu;
    do {
        printf("_-_-MENU PRINCIPAL-_-_\n");
        printf("1. Pilotos\n");
        printf("2. Voos\n");
        printf("3. Viagens\n");
        printf("4. Relatorios\n");
        printf("5. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d%*c", &opcao_principal);

        switch (opcao_principal) {
            case 1:
                do {
                    printf("\n_-_-SUBMENU PILOTOS-_-_\n");
                    printf("1. Incluir Piloto\n");
                    printf("2. Alterar Piloto\n");
                    printf("3. Excluir Piloto\n");
                    printf("4. Listar Piloto\n");
                    printf("5. Listar Todos\n");
                    printf("6. Voltar ao menu anterior\n");
                    printf("\nEscolha uma opcao: ");
                    scanf("%d%*c", &opcao_submenu);

                    switch (opcao_submenu) {
                        case 1:
                            incluir_piloto(BDPilotos, &totPilot);
                            break;
                        case 2:
                            alterar_piloto(BDPilotos, &totPilot);
                            break;
                        case 3:
                            excluir_piloto(BDPilotos, &totPilot);
                            break;
                        case 4:
                            listar_piloto(BDPilotos, &totPilot);
                            break;
                        case 5:
                            listarTodos_pilotos(BDPilotos, &totPilot);
                            break;
                        case 6:
                            printf("Voltando ao menu anterior...\n");
                            break;
                        default:
                            printf("Opcao invalida.\n");
                    }
                } while (opcao_submenu != 6);
                break;
            case 2:
                do {
                    printf("\n_-_-SUBMENU VOOS-_-_\n");
                    printf("1. Incluir Voo\n");
                    printf("2. Alterar Voo\n");
                    printf("3. Excluir Voo\n");
                    printf("4. Listar Voo\n");
                    printf("5. Listar Todos\n");
                    printf("6. Voltar ao menu anterior\n");
                    printf("\nEscolha uma opcao: ");
                    scanf("%d%*c", &opcao_submenu);

                    switch (opcao_submenu) {
                        case 1:
                            incluir_voo(BDVoos, &totVoo);
                            break;
                        case 2:
                            alterar_voo(BDVoos, &totVoo);
                            break;
                        case 3:
                            excluir_voo(BDVoos, &totVoo);
                            break;
                        case 4:
                            listar_voo(BDVoos, &totVoo);
                            break;
                        case 5:
                            listarTodos_voos(BDVoos, &totVoo);
                            break;
                        case 6:
                            printf("Voltando ao menu anterior...\n");
                            break;
                        default:
                            printf("Opcao invalida.\n");
                    }
                } while (opcao_submenu != 6);
                break;
            case 3:
                    printf("\nSUBMENU VIAGENS ESTA EM DESENVOLVIMENTO...\n");
                break;
            case 4:
                    printf("\nSUBMENU RELATORIOS ESTA EM DESENVOLVIMENTO...\n");
                break;
            case 5:
                printf("Opcao escolhida: Sair\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao_principal != 5);
}