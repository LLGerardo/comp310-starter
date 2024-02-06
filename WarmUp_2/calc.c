#include <stdio.h>  

int main()  
{  
int num1, num2;   
int sum, diff, prod, quot;  
float div;   

printf("Input any two numbers separated by comma : ");   
scanf("%d,%d", &num1, &num2);   
sum = num1 + num2;   
diff = num1 - num2;   
prod = num1 * num2;  
quot = (float)num1 / num2; 

printf("Sum: %d\n", sum);   
printf("Difference: %d\n", diff);   
printf("Product: %d\n", prod); 
printf("Quotient: %f\n", quot);   
return EXIT_SUCCESS;     
}
