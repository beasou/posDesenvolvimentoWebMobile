#include <stdio.h>

int main() {
    float renda, alimentacao, contas, transporte, lazer, outros, totalGastos, saldo;

    printf("Digite sua renda mensal: R$ ");
    scanf("%f", &renda);

    printf("Gastos com alimentação: R$ ");
    scanf("%f", &alimentacao);

    printf("Gastos com contas fixas: R$ ");
    scanf("%f", &contas);

    printf("Gastos com transporte: R$ ");
    scanf("%f", &transporte);

    printf("Gastos com lazer: R$ ");
    scanf("%f", &lazer);

    printf("Outros gastos: R$ ");
    scanf("%f", &outros);

    totalGastos = alimentacao + contas + transporte + lazer + outros;
    saldo = renda - totalGastos;

    printf("\nResumo Financeiro:\n");
    printf("Total de gastos: R$ %.2f\n", totalGastos);
    printf("Saldo final: R$ %.2f\n", saldo);

    if (saldo > 0) {
        printf("Situação: SOBRANDO dinheiro. Parabéns!\n");
    } else if (saldo == 0) {
        printf("Situação: EQUILIBRADO. Cuidado para não gastar mais.\n");
    } else {
        printf("Situação: NEGATIVO. Reveja seus gastos!\n");
    }

    return 0;
}
