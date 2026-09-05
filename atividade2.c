#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    float valor = 950.0;
    int opcao;
    float deposito;
    float tirar;
    int encerrar;
    bool confirmar;

    printf("Bem vindo ao nosso banco\nEis o nosso PDV, BOA SORTE\nmenu de opcoes\n");
    printf("Escolha apenas numeros\n");
    printf("1-Consultar saldo\n.");
    printf("2-Depositar\n");
    printf("3-Sacar\n");
    printf("4-Encerrar\n");
    scanf("%d", &opcao);

    if (opcao ==1){
        printf("%.2f\n", valor);

    }
    if (opcao == 2){
        printf("Digite quanto voce quer depositar");
        scanf ("%f", &deposito);
        valor = valor + deposito;
    }
    if (opcao == 3){
        printf("Quanto voce quer retirar?\n");
        scanf("%f", & tirar);
        while (tirar > valor){
            printf("Valor excede saldo presente.\n Por favor, diga um valor compativel com o\n que tem na conta.");
            scanf("%f", &tirar);
        }
            valor = valor - tirar;
    }

    if (opcao == 4){
            printf("tem certeza que quer sair?(1 para continuar ou 0 para encerrar.)\n");
            scanf (" %d", &encerrar);
            if (encerrar == 1){
                confirmar = false;
                while (confirmar == false){
                    printf("Bem vindo ao osso banco\nEis o nosso PDV, BOA SORTE\nmenu de opcoes\n");
                    printf("Escolha apenas numeros\n");
                    printf("1-Consultar saldo\n.");
                    printf("2-Depositar\n");
                    printf("3-Sacar\n");
                    printf("4-Encerrar\n");
                    scanf("%d", &opcao);
                }
            }else if (encerrar == 0){
            printf("Confirmado saida do sistema, obrigado!");
            }

        }

        return 0;
    }
