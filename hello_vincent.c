// User defined function

#include <stdio.h>

// function prototype
// float calculateBill(float unit , int cost);

// function declaration
float calculateBill(float unit , int cost){
float bill_price;
bill_price = unit * cost; 
return bill_price;
}

	int main(){
		float unit , bill_price;
		int cost;
		printf ("Enter cost per unit");
		scanf("%f", & cost);
		
		printf("Enter number of units consumed");
		scanf("%d", & unit);
		
		// function call
		bill_price= calculateBill(unit , cost);
		
		printf ("The total Bill is Ksh.%.2f",bill_price);
		return 0;
}
