#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
 float num1, num2, result;
 char operator;

 printf("Enter the operator you would like to use today (+,-,*,/)\n");
 scanf(" %c", &operator);

 printf("Enter two numbers you would like to use with the operator that you chose\n");
 scanf("%f", &num1);
 scanf("%f", &num2);
 

 if (operator == '+'){
  result = (num1 + num2);
  printf("%.2f", result);
 }
  
  if (operator == '-'){
    result = (num1 - num2);
    printf("%.2f", result);
  }

  if (operator == '*'){
    result = (num1 * num2);
    printf("%.2f", result);
  }

  if (operator == '/'){
    result = (num1/num2);
    printf("%.2f", result);
  }
 
 return 0;
}
