#include<stdio.h>
void main()
{
	/*Programmer Name:Muhammad Saad
	  Reg.No:20MDELE163         || */
  	 
	printf("Programmer Name : Muhammad Saad\nRegistration No : 20MDELE163\n\n");

    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);
    
    if(ch>='a' && ch<='z')
    {
    	ch = ch - 32;
    	printf("The UpperCase Alphabet is : %c",ch);
	}
	
	else if(ch>='A' && ch<='Z')
	{
		ch = ch + 32;
		printf("The LowerCase Alphabet is : %c",ch);
	}
	
	else
	printf("You entered invalid character...");

}                           //End of Main



