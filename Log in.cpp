#include <stdio.h>
#include <string.h>

#define Card_Number_Preset "1234567890"

#define KeyWord_Preset "9485"


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
		
		if (strcmp(Card_Number, Card_Number_Preset) == 0 && strcmp(KeyWord, KeyWord_Preset) == 0)
		 {
        printf("correcto\n", Card_Number);
        
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
