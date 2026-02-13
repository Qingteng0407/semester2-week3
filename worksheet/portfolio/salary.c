
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Qingteng Zhang
 * ID: 201821913
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float NI_rate = 0.08;  
   float Tax_rate = 0.15;
    // calculate the deductions and final take-home salary
   float NI_contribution = salary * NI_rate;
   float salary_after_NI = salary - NI_contribution;

// The first £12,500 of salary is tax-free,calculate the taxable amount
   float taxable_amount;
   if (salary_after_NI > 12500) {
       taxable_amount = salary_after_NI - 12500;
   } else {
       taxable_amount = 0;
   }
   float tax_contribution = taxable_amount * Tax_rate;
   float take_home_salary = salary_after_NI - tax_contribution;
   
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }