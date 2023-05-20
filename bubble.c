//BUBBLESORT

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubblesort( int *v, int tam){
	for ( int j = 0; j < tam-1; j++){		//varrer o vetor realizando as comparações e as trocas
		bool troca = false;			//verifica se está ordenado
		for ( int i = 0; i < tam-j-1; i++){
			if ( v[i] > v[i+1] ){
				int aux = v[i];
				    v[i] = v[i+1];
				    v[i+1]= aux;
				    troca = true;
			}
		}
		
			if ( troca == false)
				return;
	}
}

void ImprimeVetor(int V[], int tam) {
    printf("[%d", V[0]);
    int i;
        for (i = 1; i < tam; i++) {
            printf(", %d",V[i]);
        }
    printf("]\n");
}	

int main(){

    int v[] = {5,31,4,8,1,0,7,11,23,3};
    int n = 10;
        
        bubblesort ( v, n);
        ImprimeVetor ( v , n);
        
         return 0;

}

	



















