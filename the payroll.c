
#include <stdio.h>
#include <stdlib.h>
//take input from user

int main(void)
{
 //get input from user( name,employee number,tax pin,hours worked)
   char name[20];
   char employee_number[10];
   char tax_pin[10];
   int hours_worked;
   float hourly_rate;
   float income;
   float tax;
   float overtime;
   float total_income;
   float net_income;
   hourly_rate=1000.00;
   tax=0.30;
   overtime=1.5;


   printf("enter your name:");
   scanf("%s",name);
   printf("enter your employee number:");
   scanf("%d",&employee_number);
   printf("enter your tax pin:");
   scanf("%s",tax_pin);
   printf("enter your house worked:");
   scanf("%d",&hours_worked);

   //create if statement to check if hours worked is greater than 40
   if(hours_worked>40)

   {
       //calculate income including overtime
       income=(hours_worked-40)*hourly_rate*overtime;
       //calculate overtime
       overtime=(hours_worked-40)*hourly_rate;
       //calculate tax
       tax=income*tax;
       //calculate total income
       total_income=income-tax;
       //calculate net income
       net_income=total_income-(total_income*0.10);
       //print out results
       printf("\n\n");
       printf("name:%s\n",name);
       printf("employee number:%d\n,employee_number");
       printf("tax pin:%\n",tax_pin);
       printf("hourly rate:%2f\n",hourly_rate);
       printf("normal income:%2f\n",income);
       printf("overtime:%2f\n",total_income);
       printf("net income:%2f\n",net_income);

   }
  else {
    //calculate income
    income=hours_worked*hourly_rate;
    //calculate overtime
    overtime=0;
    //calculate tax
    tax=income*tax;
    //calculate net income
    net_income=income-tax;
    //calculate net income
    net_income=total_income-(total_income*0.10);
    //print out results
    printf("\n\n");
    printf("name:%s\n",name);
    printf("empolyee number:%d\n",employee_number);
    printf("tax pin:%s\n",tax_pin);
    printf("hours worked:%d\n",hours_worked);
    printf("hourly rate:%2f\n",hourly_rate);
    printf("income:%2f\n",income);
    printf("tax:%2f\n",tax);
    printf("overtime:%2f\n",overtime);
    printf("total income:%2f/n",total_income);
    printf("net income:%2f\n",net_income);
  }
}
