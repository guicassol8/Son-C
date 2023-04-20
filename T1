#include <stdio.h>

/** Guilherme Roth Cassol **/

void main(void) {
  float Cod = 0;
  float Candidato1 = 0;
  float Candidato2 = 0;
  float Candidato3 = 0;
  float VotoB = 0;
  float VotoN = 0;
  int Escolha = 0;
  float VotosT = 0;
  float VotosBN = 0;
  float PercentualBN = 0;
  /** Recolher Votos **/
  while (1) {
    printf("(1) Candidato 1\n(2) Candidato 2\n(3) Candidato 3\n(4) Voto em Branco \n(5) Voto Nulo\n(-1) Encerrar Votacao\n");
    scanf("%d", & Escolha);
    if (Escolha == -1) {
      break;
    }
    switch (Escolha) {
    case 1:
      Candidato1++;
      printf("Voto Computado!\n");
      break;
    case 2:
      Candidato2++;
      printf("Voto Computado!\n");
      break;
    case 3:
      Candidato3++;
      printf("Voto Computado!\n");
      break;
    case 4:
      VotoB++;
      printf("Voto Computado!\n");
      break;
    case 5:
      VotoN++;
      printf("Voto Computado!\n");
      break;
    default:
      printf("Voto Invalido!\n");
      break;
    }
  }
  VotosBN = VotoB + VotoN;
  VotosT = Candidato3 + Candidato2 + Candidato1 + VotosBN;
  PercentualBN = (VotosBN * 100 / VotosT * 100) / 100;
  printf(" Candidato 1: %f \n Candidato 2: %f \n Candidato 3: %f \n Votos em Branco: %f \n Votos Nulos: %f \n", Candidato1, Candidato2, Candidato3, VotoB, VotoN);
  if (VotosBN == 0) {
    printf(" Percentual de Votos em Branco e Nulos: 0.000000%%\n");
  } else printf(" Percentual de Votos em Branco e Nulos: %f%%\n", PercentualBN);
}
