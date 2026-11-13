//User defined function

# include <stdio.h>

//function prototype
// float calculateTotal(float price , int quantity);
// function declaration
float calculateTotal(float price , int quantity){
float total_cost;
total_cost=price * quantity; 
return total_cost;
}
	
	int main(){
		float cost , total_cost;
		int quantity;
		printf ("Enter the price :");
		scanf("%f", & cost);
		
		printf("Enter quantity purchased :");
		scanf("%d", & quantity);
		// function call
		total_cost= calculateTotal(cost , quantity);
		printf("The total cost is Ksh.%.2f",total_cost);
		return 0;
	}
