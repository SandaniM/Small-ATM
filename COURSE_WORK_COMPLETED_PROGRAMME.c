#include <stdio.h>
					//variable declaration
	float amount, deposit, withdraw;
	

	int choice, pin ;
	
	char res;
	
int main()

{		
		printf("ENTER YOUR PIN NUMBER:\t"); 	//Used to enter pin no
		scanf("%d",&pin);
		

	 	if (9999 < pin || pin < 1111)		//Checking the range of the pin
		{	int c=1;
			do{					//Checking the no of times when the pin enters
			printf("PLEASE ENTER VALID PIN.\n");
			
			printf("ENTER YOUR PIN NUMBER:");
			scanf("%d",&pin);
			c=c+1;
		}while(c!=3);
			
		}else 
		{
	do

	{							//Used to select the choice

		printf("\n\t\t\t\t\t************** WELCOME TO ATM SERVICE **************\n");

		printf("1. Check Balance\n\n");

		printf("2. Withdraw Cash\n\n");

		printf("3. Deposit Cash\n\n");

		printf("4. Exit\n\n");

		printf("\n\t\tEnter your choice: ");

		scanf("%d",&choice);

		switch (choice)

		{

		case 1:						//To check balance
			 
			system ("cls"); 
			printf("\n\t\t\tYOUR BALANCE IN Rs : %f\n ",amount);
			
			

			break;

		case 2:	
							//To withdraw
							
			system ("cls"); 

			printf("\n ENTER THE AMOUNT TO WITHDRAW:\t");
			
			scanf("%f",&withdraw);
			
			amount = amount - withdraw;
		

			if (withdraw >amount)

			{

				printf("\n\t\t\t\t\t ************** INSUFFICENT BALANCE **************\n");
				
			}

			else

			{

				printf("\n\t\t\t YOUR CURRENT BALANCE IS %.2f\n",amount);
				printf(" \n\t\t\t PLEASE COLLECT CASH.\n");
			}
		

			break;

		case 3:							//To deposite
			system ("cls"); 

			printf("\nENTER THE AMOUNT TO DEPOSIT:\t");

			scanf("%f",&deposit);

                        amount = amount + deposit;

			printf("\n\t\t\t YOUR BALANCE IS: %f\n",amount);

			break;

		case 4:							//To exit
			system ("cls"); 

			printf("\n\t\t\t\t\t ************** THANKS FOR USING ATM **************\n");

			break;

		default:						//To default
			system ("cls"); 

			printf("\n\t\t\t\t\t************** INVALID CHOICE **************");

		}
		fflush(stdin);					//Used to get the response from the user
		
		printf("\n\t\t\t DO U WISH TO HAVE ANOTHER TRANSCATION?(y-yes/n-no):\t");

		scanf("%c",&res);
		
		
	} while (res == 'y');
	
	// Thanking greeeting

	printf("\n\t\t\t\t\t************** THANKS FOR USING OUR ATM SERVICE **************\n");

	}
return 0;
}
