#include <stdio.h>

int main()
{
  float notas[4];
  float media[10];
  float resultadoDaMedia = 0;
  float somatorioDasNotas = 0;
  int n, a;
   
  for(a = 0; a < 3; a++)
  {
    printf("Informe as notas do %i° aluno", a + 1);
   
    for(n = 0; n < 4; n++)
    {
      printf("\nNota %d: ", n + 1);
      scanf("%f", &notas[n]);
      somatorioDasNotas += notas[n];
      printf("\n%f", somatorioDasNotas);
    }
    media[a] += somatorioDasNotas / n;
    printf("\n%f", media[a]);
    somatorioDasNotas = 0;
  }

  for(a = 0; a < 10; a++) 
  {
    if(media[a] >= 7) 
    {
      printf("A media do %d aluno e: %.1f\n", a+1, media[a]);
    } 
  }
  return 0;
}