#include<stdio.h>
#include<string.h>

int main()
{	
    int lenFlag = 0, uppFlag = 0, lowFlag = 0, numFlag = 0, specialFlag = 0;
	char password[20];
	int i;
	
	printf("Enter the password : ");
	scanf("%s", password);
	
	if(strlen(password) > 10){
		lenFlag = 1;
	}
	for(i = 0; i < strlen(password); i++){
		if(password[i] >= 65 && password[i] <= 90){
			// uppercase
			uppFlag++;
		}
		if(password[i] >= 97 && password[i] <= 122){
			// lowercase                  
			lowFlag++;
		}
		if(password[i] >= 48 && password[i] <= 57){
			// number
			numFlag++;
		}
		if(password[i] == '@' || password[i] == '&'|| password[i] == '$'){
			// special character
			specialFlag++;
		}
	}	
	if(lenFlag == 1 && uppFlag > 0 && lowFlag > 0 && numFlag > 0 && specialFlag > 0){
		printf("\nValid password.");
	}else{
		printf("\nInvalid password");
	}	
	return 0;
}
