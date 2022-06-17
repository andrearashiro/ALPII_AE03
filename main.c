#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Subrotina para testar se o número do gado já foi digitado
void existeGado(int numeroGado, int matrizGado[42])
{
    int l;
    
	for (l=0; l<42; l++){
    	if(numeroGado == matrizGado[l])
		{
    		printf("O número do gado já foi digitado! no número %d \n", l);
    		system("pause");
    		break;
    		
    		
		}
	}

}

int main()
{
    setlocale(LC_ALL,"Portuguese");
	
    int par, impar,i,j,k, numberGado;
    par = 0;
    impar = 0;
    int gadoPar[42];
    int gadoImpar[42];
    
    
    
    printf("#####Sistema de contagem de gados### \n");
    printf("Por favor digite o número do gado: \n");
    

    for(i=0; i<42; i++){
       
        scanf("%d", &numberGado);
        fflush(stdin);
        
            if((numberGado % 2) != 0){
                
		existeGado(numberGado, gadoImpar); //Chamando a Subrotina para verificar se o gado já foi digitado
				
                printf("O gado %d vai  pro pasto ímpar \n", numberGado);
                             
                gadoImpar[impar] = numberGado;
                impar = impar + 1;
                                                
                //printf("o i é %d, o par é %d \n", i, par);
                                
            }else{
                
		existeGado(numberGado, gadoPar);
				
                printf("O gado %d vai pro pasto par \n", numberGado);
                           
                gadoPar[par] = numberGado;
                par = par + 1;
                                              
                //printf("o i é %d, o ímpar é %d \n", i, impar);
                                
            }
    }
    system("cls");
    
    printf("Os gados pares são:");
    for (j=0; j<par; j++){
       printf("%d - ", gadoPar[j]);
       
   }
   printf("\n Os gados ímpares são:");
    for (k=0; k<impar; k++){
       printf("%d - ", gadoImpar[k]);
    }

   
    
}
