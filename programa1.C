#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv){
	int elementos = 0;
	char c = 0;


	while ((c = getopt (argc, argv, "p:")) != -1){
		switch(c){
			case 'p':
				elementos = atoi(optarg);
				break;
			default:
				printf("Argumento invalido\n");
				exit(1);
		}
	}

	float sum =0.0f;
	float max_imc = 0.0f;





	printf("\npromedio IMC: %.1f\n", sum);
	printf("maximo IMC: %.1f\n", max_imc);

	if(elementosn<= 0){
		printf("Numero incorrecto de personas");
		exit(1);
	}
	float arreglo[elementos] = {0};
	for(int i=0; i< elementos; i++){
		float peso, altura;
		printf("Peso: ");
		scanf("%f", &peso);
		if(peso<0){
			printf("Numero Incorrecto");
			exit(1);
		}
		printf("Altura: ");
		scanf("%f", &altura);
		if(altura<0){
			printf("Numero Incorrecto");
			exit(1);
		}
		
	}
	




	




}



