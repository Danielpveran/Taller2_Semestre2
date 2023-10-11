#include <stdio.h>

int main(){
	
	int Opcion,Saldo=1000;
	float Agregar;
	
		printf ("\tBienvanido a su Cajero");//el \t deja espacios
		printf("\n1.Ingreso en la cuenta");
		printf("\n2.Retirar");
		printf("\n3.Salir");
		printf("\n3.Ver saldo actual");
		scanf("%i",&opcion);
		 
		 switch(opcion){
		 	
		 	case 1: //agregar a cuenta
		 	}
			 	printf("\nCuanto desea ingresar en cuenta?.");
			 	scanf("%f",&Agregar);
			 	saldo += agregar;
			 	printf("Su saldo total es de: %.2f",saldo);
		 	break;
		 	
		 	case 2:
		 		printf("Cuanto desea retirar?")
		 		scanf("%f"&Retirar);
		 	 
		 	 	if (Retirar > Saldo){
		 	 	printf("Saldo Insuficiente ",saldo);
		 	 	}
		 	 	
		 	 	else{
		 	 		saldo -= retirar;
		 	 		printf("El saldo disponible es de: %.2f",Saldo)
		 	 	}
		 		
		 	case 3:
		 		break;
		 	break
		 	
		 	case 4;
		 	 printf("Su saldo total es de: %f",saldo)
		 	break;
		 	
			default: //// este Código se ejecuta si ninguno de los casos anteriores coincide con expresion siendo similar al else
		 }
		
	
	return 0;
}
