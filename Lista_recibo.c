#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int produto;
    char nome[50];
    int idade;
    float saldo_dispon;
    float preco_produto;
    int quant_desejada;
    float custo_total;
    printf("Ola, caro cliente, bem vindo ao  nosso restaurante\n\t\tSinta-se a vontade.\n");

    printf("Digite o nome do cliente \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Digite agora a sua idade.\n");
    scanf("%i",&idade);
    printf("Ola. Sinta-se a vontade!\nPode escolher seus itens no Menu abaixo.\n\tEscolha apenas numeros\n");
    printf("1-Agua \t-- 1,69\n");
    printf("2-Cerveja -- 10,00\n");
    printf("3-Camarao -- 80,00\n");
    printf("4-Carne -- 80,00\n");
    scanf("%i", & produto);
    if (produto == 1){
        preco_produto = 1,69;
        }
        else if (produto == 2){
            preco_produto = 10.00;
        }else if(produto == 3){
        preco_produto = 80.00;
        }else if (produto == 4){
                  preco_produto = 80.00;
                  }
    printf("Diga agora a quantidade desejada.\n");
    scanf("%i", &quant_desejada);
    printf("Digite o saldo que ele tem disponivel.\n");
    scanf("%f", &saldo_dispon);
    custo_total = preco_produto * quant_desejada;

    if (saldo_dispon > custo_total && idade > 18){
            printf("\tRECIBO\n");
            printf("Nome: \t%s\n", nome);
            printf("Idade: \t%i\n", idade);
            printf("Idade do cliente permite que ele compre produtos restritos.\n");
            printf("Cliente possui saldo suficiente para compra.\n");
            printf("O custo total do cliente foi: %.2f\n", custo_total);
    }
    if (saldo_dispon < custo_total && idade < 18){
            if (produto == 2){
                    printf("\tRECIBO\n");
            printf("Nome: \t%s\n", nome);
            printf("Idade: \t%i\n", idade);
            printf("Idade do cliente não permite que ele compre\n produtos restritos.\n");
            printf("Cliente não possui saldo suficiente para compra.\n");
            printf("Não é permitido a cliente fazer essa compra!\n");
            } else{
                printf("\tRECIBO\n");
                printf("Nome: \t%s\n", nome);
            printf("Idade: \t%i\n", idade);
            printf("Idade do cliente permite que ele compre \nprodutos restritos.\n");
            printf("Cliente não possui saldo suficiente para compra.\n");
            printf("Não é permitido a cliente fazer essa compra!\n");
    }
    }
    if (saldo_dispon > custo_total && idade < 18){
        if (produto == 2){
                printf("\tRECIBO\n");
          printf("Nome: \t%s\n", nome);
            printf("Idade: \t%i\n", idade);
            printf("Idade do cliente nao permite que ele compre\n produtos restritos.\n");
            printf("Cliente possui saldo suficiente para compra.\n");
            printf("Não e permitido a cliente fazer essa compra!\n");
    }else {
        printf("\tRECIBO\n");
            printf("Nome: \t%s\n", nome);
            printf("Idade: \t%i\n", idade);

            printf("Cliente possui saldo suficiente para compra.\n");
            printf("O custo total do cliente foi: %.2f\n", custo_total);
    }
        }

    if (saldo_dispon < custo_total || idade < 18){
            printf("\tRECIBO\n");
            printf("Nome: \t%s\n", nome);
            printf("Idade: \t%i\n", idade);
            printf("Idade do cliente não permite que ele compre produtos restritos.\n ou cliente possui saldo suficiente para compra.\n");

            printf("O custo total do cliente foi: %.2f\n", custo_total);
    }

    return 0;
}
