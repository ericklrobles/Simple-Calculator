#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
 float num1, num2, result;
 char operator, cont;

 printf("Enter the operator you would like to use today (+,-,*,/)\n");
 scanf(" %c", &operator);

 printf("Enter two numbers you would like to use with the operator that you chose\n");
 scanf("%f", &num1);
 scanf("%f", &num2);
 
  while(1){
    if (operator != '-'&& operator !='+'&& operator!= '*'&& operator != '/'){
    printf("Invalid Operator Please try again (+,-,*,/)\n");
    break;
    }
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

  }if (operator == '/' && num2 == 0){
    printf("Cannot divide by zero.\n");
    break;
}

  printf("Do you want to continue y/n\n");
  scanf(" %c", &cont);
  if(cont == 'n' || cont == 'N'){
    break;
  }
 
  }
 return 0;
}
