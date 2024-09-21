//final exam
//Nevaiha Adams
//11/4/2023

#include<stdio.h>

float calculateTax(float subtotal) 
{
	float salesTax = 0.06;
    return subtotal * salesTax;
}

float calculateTotal(float subtotal, float tax) 
{
    return subtotal + tax;
}
int main() 
{
	
	
    char welcomeMessage[] = "Welcome to Hansen's Discount Supermarket!";
    float prices[100];
    int itemNum, i;
    
    float subtotal = 0;
    float price;
    puts(welcomeMessage);
    
    printf("How many items do you have to scan: ");
    scanf("%d", &itemNum);
    
    printf("\n\nWe are sorry the scanner is broken at the moment.\nPlease enter your prices manually.\n");
    
    for(i = 0; i < itemNum; i++) 
	{
        do 
		{
            printf("\nWhat is the price of your product: ");
            scanf("%f", &price);
            
            if (price > 10.00) 
			{
                printf("\nInvalid price, be sure to enter a price under $10.00.\nEnter a valid price: ");
                scanf("%f", &price);
            }
        } 
		while(price > 10.00);
        prices[i] = price;
        subtotal += price;
    }
    
    float tax = calculateTax(subtotal);
    float total = calculateTotal(subtotal, tax);
    
    printf("\nYour total is: %.2f\n", subtotal);
    printf("Tax: %.2f\n", tax);
    printf("\nYour grand total including tax is: %.2f\nHave a great day!", total);
    
    return 0;
}
