#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5
#define MAX 101

main() {
  int vet[TAM], x;
  srand(time(NULL));
  for(x = 0; x < TAM; x++){
    do{
      vet[x] = rand() % MAX; 
    }while(vet[x] % 3 != 0);
  }
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  getchar();
}