#include <stdio.h>
#include <string.h>

#define Card_Number_Preset "1234567890"

#define KeyWord_Preset "9485"


int main()

{
	char Card_Number[30];
	char KeyWord[30];
	int Opcion, Saldo = 1000;
    int Agregar, Retirar;
	
	int c=1; //Gona increase according to the trys of sig in with a limit of three tries
	
	while (c<=3){
	
		printf("\n\t\t\t SIGN IN \n");
		printf("\n Card Number:");
		scanf("%s",Card_Number);
		
		printf("\n Password:");
		scanf("%s",KeyWord);
		
		if (strcmp(Card_Number, Card_Number_Preset) == 0 && strcmp(KeyWord, KeyWord_Preset) == 0)
		 {
		while (1) {
		        printf("\nBienvenido a su Cajero\n");
		        printf("1. Ingreso en la cuenta\n");
		        printf("2. Retirar\n");
		        printf("3. Salir\n");
		        printf("4. Ver Saldo actual\n");
		        scanf("%i", &Opcion);
		
		        switch (Opcion) {
		            case 1:
		                printf("\nCuánto desea ingresar en cuenta? ");
		                scanf("%i", &Agregar);
		                Saldo += Agregar;
		                printf("Su Saldo total es de: %i\n", Saldo);
		                break;
		
		            case 2:
		                printf("Cuánto desea retirar? ");
		                scanf("%i", &Retirar);
		
		                if (Retirar > Saldo) {
		                    printf("Saldo Insuficiente. Su saldo actual es de: %i\n", Saldo);
		                } else {
		                    Saldo -= Retirar;
		                    printf("El Saldo disponible es de: %i\n", Saldo);
		                }
		                break;
		
		            case 3:
		                // Salir del programa
		                return 0;
		
		            case 4:
		                printf("Su Saldo total es de: %i\n", Saldo);
		                break;
		
		            default:
		                printf("Ingrese una opción válida\n");
		                break;
		        }
        
		}
	}
	else {
		printf("User/password its wrong please try again\n", Card_Number);
        c++;
    	}
    
    if (c > 3){
    	printf("You have reached the limit of attempts, the account number will be blocked for your safety.\n");
    	}
	}
	return 0;
}
