#include <stdio.h> // Biblioteca padrão para Entrada e Saída.
 
int main()
{
    // Exibição dos Valores de Fichas Disponíveis.
    printf("FICHAS : R$5,00, R$10,00, R$20,00, R$50,00, R$100,00");
    
    // valor_total: Valor que o Usuário Deseja Inserir.
    //valor_inicial: Armazena o Valor Original. 
    //total_fichas: Total de Fichas Emitidas.
    int valor_total, valor_inicial, total_fichas; 
    // Contadores para cada Valor de ficha.
    int f5 = 0 ,f10 = 0,f20 = 0,f50 = 0,f100 = 0;

    
   // Loop para assegurar que o Valor é positivo e múltiplo de 5.
   do{
    if(valor_total <= 0 || valor_total % 5 != 0)
    {
        // Mensagem de Auxílio para o Usuário.
        printf("\n\nInsira o numero de fichas que voce deseja:\n\n");
        scanf("%d",&valor_total);
        // Mensagem caso o Usuário Insira um valor que não seja Mútiplo de 5.
        printf("\nValor invalido! Insira um novo valor.\n");
       
    }
    // Condição para caso o valor for menor ou igual a 0, ou não for múltiplo de 5.
     }while(valor_total <= 0 || valor_total % 5 != 0);
    
    
        valor_inicial = valor_total;
        while(valor_total >= 100)
        {
        // Processa as Fichas de Valor 100.
        f100++; 
        valor_total -=100;
        
        } 
        // Processa as Fichas de Valor 50.
        while(valor_total >= 50)
        {
        
        f50++; 
        valor_total -=50;
        
        }
        // Processa as Fichas de Valor 20.
        while(valor_total >= 20)
        {
        
        f20++; 
        valor_total -=20;   
        
        }
        // Processa as Fichas de Valor 10.
        while(valor_total >= 10)
        {

        f10++; 
        valor_total -=10;
        
        }
        // Processa as Fichas de Valor 5.
        while(valor_total >= 5)
        {
            
        f5++; 
        valor_total -=5;
        }
    // Calcula o Total de Fichas Emitidas.
    total_fichas = f5+f10+f20+f50+f100;
    
    // Exibe a Quantidade Emitida de cada Valor.
    printf ("Fichas emitidas: \n");
    printf ("Ficha de 100: %d \n", f100);
    printf ("Ficha de 50: %d\n", f50);
    printf ("Ficha de 20: %d\n", f20);
    printf ("Ficha de 10: %d\n", f10);
    printf ("Ficha de 5: %d\n\n", f5);
 
    // Exibe o Total de Fichas e o Valor inserido pelo Usuário.
    printf("Total de Fichas: %d\n", total_fichas);
    printf("Valor total recebido pela máquina: %d\n\n", valor_inicial);
    // MEnsagem Final de Sucesso.
    printf("Compra feita com sucesso!");

    
return 0; // Encerra o Programa.
}