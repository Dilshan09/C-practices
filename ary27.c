#include<stdio.h>

#define MAX_SIZE 5

int main(){

//declare the array
const int max_col=5,max_row=4;
double sales[max_row][max_col];

//declare variables for the for loop
int i;
int j;

for(i=0; i<max_row; i++)

for(j=0; j<max_col;j++)

sales[i][j] = 0.0;

//declare variables for user inputs 
int salesperson;
double total_sales;
int product;

//prompts the user to input the salesperson,product and the total sales of the each sale person
printf("Enter the Sales Person Number, Product, and Total Sales For Each Person:\n");
printf("Enter 0 for the salesperson to end input.\n");
scanf("%d", &salesperson);  //read and stoer the user inputs to the arrays

//declare a while loop
while(salesperson!=0){
scanf("%d %lf", &product, &total_sales);
sales[salesperson][product] = total_sales;
scanf("%d", &salesperson);

}

double total[max_col];

for(i=0; i<max_col; i++)
total[i] = 0.0;

printf("\nThe Total Sales for  Each Sales Person are Displayed at the end of the each row, and the total sales for each product are displayed at the bottom of each column.\n");

printf("\n%-4c", ' ');

for(i=0; i<max_col; i++)

printf("%4d\t",i);

printf("\n");

for(i=0; i<max_row; i++){

printf("%-4d", i);

double tot=0.0;

for(j=0; j<max_col; j++){

printf("%.2lf\t", sales[i][j]);

tot+=sales[i][j];
total[j]+=sales[i][j];

}

printf("%.2f\n", tot);

}

printf("%-4c", ' ');

for(i=0; i<max_col; i++)

printf("%.2lf\t", total[i]);

printf("\n");

return 0;
}

