
#include <stdio.h> // Biblioteca Padrão.
#include <stdlib.h> // Biblioteca de Funções Utilitárias.
#include <math.h> // Biblioteca Matemática para usar a função pow(Potenciação).
 
int main() {
    char Opc; // Váriavel para armazenação as opções das operações.
    double N1, N2, Res; // Váriavel para os dois valores e os resultados das operações.
    int Cont = 1; // Váriavel para Continuar.
    
    while (Cont == 1) // Loop da calculadora para escolha da Opção.
    {
        printf("\nComandos disponíveis:\n"); // Menu de opções de Comandos.
        printf("(+) Adição\n");
        printf("(-) Subtração\n");
        printf("(*) Multiplicação\n");
        printf("(/) Divisão\n");
        printf("(^) Potenciação\n");
        printf("(X) Finalizar\n"); // x maiúsculo ou minúsculo finalizam o programa.
 
        printf("Digite a operação desejada: "); // Escolha da operação para trabalhar.
        scanf(" %c", &Opc); // Espaço antes de %c evita leitura de caracter após um núimero para não dar erro.
 
        // Verificação da escolha do usuário, se é válida ou não.
        if (Opc != '+' && Opc != '-' && Opc != '*' && Opc != '/' && Opc != '^' && Opc != 'X' && Opc != 'x')
        {
            printf("Erro: Opção inválida.\n");
            continue; // Retorna ao início do Loop sem encerrar o programa.
        }
 
        if (Opc == 'X' || Opc == 'x') // Encerra o programa se o usário escolher a opção "x/X".
        {
            printf("Finalizando o programa.\n");
            break; // Sai do Loop.
        }
        // Solicita ao usuário dois valores para executar o programa.
        printf("Digite o primeiro número: ");
        scanf("%lf", &N1);
 
        printf("Digite o segundo número: ");
        scanf("%lf", &N2);
 
        switch (Opc)  // Estrutura de troca de operações escolhidas.
        {
            case '+':
                Res =N1 + N2;
                printf("Resultado da Adição: %.2lf\n", Res);
                break;
            case '-':
                Res = N1 - N2;
                printf("Resultado da Subtração: %.2lf\n", Res);
                break;
            case '*':
                Res = N1 * N2;
                printf("Resultado da Multiplicação: %.2lf\n", Res);
                break;
            case '/':
                if (N1 == 0) // Verifica se o 1º divisor é zero.
                {
                printf("Erro: Divisão por zero não é permitida.\n");
                }
                else if (N2 == 0) // Verifica se o 2º divisor é zero.
                {
                printf("Erro: Divisão por zero não é permitida.\n");
                }
                else
                {
                Res = N1 / N2;
                printf("Resultado da Divisão: %.2lf\n", Res);
                }
                break;
            case '^':
                Res = pow(N1, N2); // Utiliza da Biblioteca "#include <math.h>" para realizar a operação de Potenciação.
                printf("Resultado da Potenciação: %.2lf\n", Res);
                break;
        }
 
                printf("Deseja continuar? (1 = Sim / 0 = Não): "); // Opção de escolha do usuário, se deseja continuar ou não.
                scanf("%d", &Cont);
    }
 
    return 0; // Fim do Programa.
}
