#include <stdio.h>
#include <stdlib.h>

int buscaBinariaRecursiva(int *vet, int chave, int inicio, int fim) {    // "Busca Bin�ria Recursiva"
	
	int meio;
	
	if(inicio <= fim) {
		meio = (inicio + fim) / 2;
		
	if(chave == vet[meio])                                  // Condi��es do uso da "Busca Bin�ria Recursiva"
		return meio;
		
	else {
		if (chave < vet[meio])
			return buscaBinariaRecursiva(vet, chave, inicio, meio - 1);
			
		else
			buscaBinariaRecursiva(vet, chave, meio + 1, fim);
			
	}

	}
	
	return -1; // Se o elemento n�o for encontrado
	
}

int buscaBinariaIterativa(int *vet, int chave, int fim) { 
	
	int inicio = 0;
	int meio = (inicio + fim) / 2;
	
	while(inicio <=fim) {
		
		if(chave == vet[meio])
			return meio;
			
		else {                                 // Condi��es do uso da "Busca Bin�ria Iterativa"
			if (chave < vet[meio])
				fim = meio -1;
				
		else
			inicio = meio +1;
			
	}
	
	meio = (inicio + fim) / 2;
	
	}
	
	return -1;
}


	int main() {
	
	int vet [10] = {16,17,20,39,44,52,58,59,67,70};
	int valor, op;
	
	do {
	
		printf("Digite um valor para ser buscado\n\n");
		scanf("\n%d", &valor);
	
	// printf("\nResultado: %d\n", buscaBinariaRecursiva(vet, valor, 0, 9));
	
	// printf("\nResultado: %d\n", buscaBinariaIterativa(vet, valor, 9));
	
	// Para usar a "Busca Bin�ria Recursiva" ou a "Busca Bin�ria Iterativa" tem que deixar a outra como coment�rio
		
		printf("\n0 - Sair\n1  - Nova Busca\n");
		scanf("%d", &op);
		
	} while(op != 0);
	

	return 0;
	
}
