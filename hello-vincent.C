// Variables and Data
# include <stdio.h>

int main()
{
    //declare variables
    float height;
    double bankbalance;
    char phonenumber[20];

    printf("Enter your height in meters:\t");
    scanf("%f", &height);

    printf("Enter your bank balance in Kenya Shillings:\t");
    scanf("%lf", &bankbalance);

    printf("Enter your Phone Number :\t");
    scanf("%19s", phonenumber);

    printf("Height: %.2f meters \n", height);
    printf("Bank Balance:Ksh %.2f\n", bankbalance);
    printf("Phone Number:%s\n", phonenumber);

    return 0;
}
