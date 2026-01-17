/******************************************************************************

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
int main() 
{
    int v1[3], v2[3], v3[6], i = 0, j = 0, k = 0; //Declaração das variáveis.
    
    printf ("Digite 6 números inteiros para serem organizados no terceiro vetor em fileira:\n\n");
 
    for(i = 0; i < 3; i++) //Define valor da variável v1.
    {
    scanf("%d", &v1[i]);
    }
    
    for(i = 0; i < 3; i++) //Define valor da varável v2.
    {
    scanf("%d", &v2[i]);
    }
    
    i = 0; j = 0; k = 0; //Iguala as variáveis à zero.
   
    
    while(i<3) //Copiando os valores do v1 para o v3.
    {
        v3[k++] = v1[i++];
    }
    
    while(j<3) //Copiando os valores do v2 para o v3.
    {
        v3[k++] = v2[j++];
    }
 
 printf ("Vetor ordenado: ");
    for(i = 0; i < 6; i++) 
    {
    printf("%d ", v3[i]); //Imprime os 6 valores dos vetores (v3).
    }
 return 0;
}