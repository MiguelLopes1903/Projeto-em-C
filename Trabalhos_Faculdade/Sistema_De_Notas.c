#include <stdio.h> // Biblioteca padr�o.

#include <stdio.h> // Biblioteca padr�o.
#include <stdlib.h> // Biblioteca para funcao rand(). 
#include <time.h> // Biblioteca usada para manipular tempo.

// L� a nota dos alunos e armazena no vetor.
void lerNotas(float notas[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        // Gera uma nota aleat�ria de 0.0 a 10.0 com uma casa decimal.
        notas[i] = (float)(rand() % 101) / 10; 
        // Mostra a nota individual de cada aluno.
        printf("Digite a nota do aluno %d:\n ", i + 1); 
        printf("%.2f\n",notas[i]);
        
    }
}
// Calculo e retorno da m�dia geral da turma.
float calcularMedia(float notas[], int n)
{
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i]; // Soma total das notas.
    }
    return soma / n; // Retorna m�dia.
}
// Conta a quantidade de alunos aprovados com notas >= 6.
int contarAprovados(float notas[], int n) 
{
    int aprovados = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] >= 6.0) {
            aprovados++; // Contador de aprovados.
        }
    }
    return aprovados;
}

int main() {
    int n;  // N�mero de Alunos.
    int continuar;  // Controle de repeti��o.
    
    //Mensagem de Boas Vindas.
    printf("??-?????????? BEM-VINDO(A) AO SISTEMA DE NOTAS DOS ALUNOS! ??????????-??\n\n"); 

    srand(time(NULL)); // Comando para gerar aleat�rios.

    do { // Solicita ao usu�rio o n�mero de alunos para executar o c�digo.
        
        do {
            printf("Digite o n�mero de alunos (m�x 50): ");
            scanf("%d", &n);
            if (n > 50)
      {
          printf("\n************** N�mero m�ximo de alunos atingido! **************\n\n");
      }
      // Regula para que o n�mero de alunos esteja entre 1 a 50.
        } while (n < 1 || n > 50); 

        
        float notas[n]; // Vetor para armazenar as notas.

        lerNotas(notas, n); // Leitor das notas armazenadas.

        float media = calcularMedia(notas, n); // Calculo da m�dia geral da turma.

        int aprovados = contarAprovados(notas, n); // Exibe o n�mero de alunos aprovados.

        printf("Notas digitadas:\n"); // Imprimi os resultados.
        for (int i = 0; i < n; i++) 
        {
            printf("%.2f\n",notas[i]);
        }
        printf("\n");

        printf("M�dia da turma: %.2f\n", media);
        printf("N�mero de alunos aprovados: %d\n", aprovados);

        // Pergunta ao usu�rio se deseja continuar e processar outra turma
        printf("Deseja avaliar a pr�xima turma? (1-Sim / 0-N�o): ");
        scanf("%d", &continuar);

    // Estrutura de repeti��o que ir� executar o c�digo at� o usu�rio interromper.
    } while (continuar == 1);  
      
    
    return 0; // Encerra o programa.
}



