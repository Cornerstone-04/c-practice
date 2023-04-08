#include <stdio.h>
#include <math.h>

int main()
{
    int account_number, mortgage_term, total_months;
    float mortgage_amount, interest_rate, total_interest, total_amount, monthly_payment;

    printf("Enter account number: ");
    scanf("%d", &account_number);

    printf("Enter mortgage amount: ");
    scanf("%f", &mortgage_amount);

    printf("Enter mortgage term in years: ");
    scanf("%d", &mortgage_term);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    total_interest = mortgage_amount * interest_rate * mortgage_term;
    total_amount = mortgage_amount + total_interest;
    total_months = mortgage_term * 12;
    monthly_payment = round(total_amount / total_months);

    printf("Account Number: %d\n", account_number);
    printf("Total Amount Payable: $%.2f\n", total_amount);
    printf("Monthly Payment: $%.0f\n", monthly_payment);

    return 0;

    total_interest = mortgage_amount * interest_rate * mortgage_term;
    total_amount = mortgage_amount + total_interest;
    total_months = mortgage_term * 12;
    monthly_payment = round(total_amount / total_months);
}
