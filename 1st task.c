#include <stdio.h>
int main()
{
	float currency; 
	printf(" CURRENCY CONVERTER FROM USD TO EGP\n"); 
	printf("plese, enter your currency."); 
	scanf("%f", & currency); 
	currency = currency * 15.69;
	printf("%.2f", currency);
}
