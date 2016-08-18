#include<stdio.h>
 
int maiorDiferenca(int vetor[], int tamanho);


int main()
{
  int vetor[] = {1000, 2, 6, 8000, 100};
  int tamanho = sizeof(vetor)/sizeof(vetor[0]);
  printf("Diferenca Maxima:%d\n",  maiorDiferenca(vetor, tamanho));
  getchar();
  return 0;
}


int maiorDiferenca(int vetor[], int tamanho)
{
  int maiorDiferenca = vetor[1] - vetor[0];
  int menorElemento = vetor[0];
  int i;
  for(i = 1; i < tamanho; i++)
  {       
    if(vetor[i] - menorElemento > maiorDiferenca)                               
      maiorDiferenca = vetor[i] - menorElemento;
    if(vetor[i] < menorElemento)
         menorElemento = vetor[i];                     
  }
  return maiorDiferenca;
}    
 
