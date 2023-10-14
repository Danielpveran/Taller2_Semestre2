#include <stdio.h>
#include <string.h>

#define Card_Number "1234567890"

#define KeyWord "9485"


int main()
{
	char Card_Number[30];
	char KeyWord[30];
	
	int c=1; //Gona increase according to the trys of sig in with a limit of three tries
	
	while (c<=3){
	
		printf("\n\t\t\t SIGN IN \n");
		printf("\n Card Number:");
		scanf("%s",Card_Number);
		
		printf("\n Password:");
		scanf("%s",KeyWord);
		
		if (strcmp(usuario, USUARIO) == 0 && strcmp(contrasena, CONTRASENA) == 0)
		 {
        printf("correcto\n", usuario);
		}
	 else {
	 	printf("User/password its wrong please try again\n", usuario);
        c+1;
    	}
	}
	return 0;
}
