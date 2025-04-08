#include <stdio.h>
int main(){
	int ingr, opcion;
	printf("Quieres que la pizza sea vegetariana?\nEscribe 1 (si) o 2 (no): ");
	scanf("%d",&opcion);
	if(opcion != 1 && opcion != 2)
		printf("Ingresa una opcion valida");
	else{
		switch(opcion){
			case 1:
				printf("Que ingrediente quieres ?\n");
				printf("1-Pimiento\n2-Tofu\n\nEscribe el numero del ingrediente: ");
				break;
			case 2:
				printf("Que ingrediente prefieres agregar?\n");
				printf("1-Pepperoni\n2-Jamon\n3-Salmon\n\nEscribe el numero del ingrediente: ");
			break;
		}

		scanf("%d",&ingr);
		if(ingr == 1 && opcion == 1){
			printf("\nPizza vegetariana\nIngredientes: ");
			printf("Pimiento, Mozzarella y Tomate.");
		}

		else if(ingr == 2 && opcion == 1){
			printf("\nPizza vegetariana\nIngredientes: ");
			printf("Tofu, Mozzarella y Tomate.");
		}

		else if(ingr == 1 && opcion == 2){
			printf("\nPizza NO vegetariana\nIngredientes: ");
			printf("Peppperoni, Mozzarella y Tomate.");
		}

		else if(ingr == 2 && opcion == 2){
			printf("\nPizza no vegetariana\nIngredientes: ");
			printf("Jamon, Mozzarella y Tomate.");
		}

		else if(ingr == 3 && opcion == 2){
			printf("\nPizza no vegetariana\nIngredientes: ");
			printf("Salmon, Mozzarella y Tomate.");
		}

		else{
			printf("\nIngresaste un dato invalido.\nPor lo que tu pizza ");
			printf("solo tendra Mozzarella y Tomate.");
		}
	}
}
