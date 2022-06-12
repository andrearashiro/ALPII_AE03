#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Declarando a função fora do escopo da função main

int identificarDivisivelPor3(int matrizA[][5]){ //Dentro do parametro da função, a variável recebeu o mesmo nome da matriz, adicionando o A
int line, column;

	printf("Os números da matriz são: \n");
	for(line = 0; line<5; line++){
		for(column = 0; column<5; column++){
			
			printf("[%d]", matrizA[line][column]);
		}
		printf("\n");		
	}
	
	for(line = 0; line<5; line++){ 			//Verifica se o número é divisível por 3 e imprime o resultado
		for(column = 0; column<5; column++){
			if(matrizA[line][column] % 3 == 0){
				printf("O número %d é divisível por 3, e está na linha %d e coluna %d \n", matrizA[line][column], line+1, column+1);
				printf("--------------------------------------------------------- \n");
			}
			
		}			
	}
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}}; 
                       
    identificarDivisivelPor3(matriz); //Chamando a função passando como parametro a matriz
    
	
	return 0;
	}
