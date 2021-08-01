#include<stdio.h>

void main()
{
	/*Programmer Name:Muhammad Saad
	  Reg.No:20MDELE163          || */
  	 
	printf("Programmer Name : Muhammad Saad\nRegistration No : 20MDELE163\n\n");
	
	char ch;
	printf("plz enter a character:\n");
	scanf("%c",&ch);
	
	if(isalpha(ch)!=0)
	printf("The character %c is an Alphabet",ch);
	else if(isdigit(ch)!=0)
	printf("The character %c is a number",ch);
	else
	printf("you entered invalid character");

}                                                                   //End of Main


