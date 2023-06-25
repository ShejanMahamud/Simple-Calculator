#include<stdio.h>
int main(){
    double num1,num2,result;
    char sign;

    printf("Enter First Number: ");
    scanf(" %lf", &num1);

    printf("Enter Second Number: ");
    scanf(" %lf", &num2);

    printf("Enter Character (+, -, *, or /): ");
    scanf(" %c", &sign);

    switch(sign){
    case '+' :
        result = num1 + num2;
        printf("Addition of two number is: %.2lf", result);
        break;

    case '-' :
        result= num1 - num2;
        printf("Substraction of two number is: %.2lf", result);
        break;


    case '*' :
        result= num1 * num2;
        printf("Multiplication of two number is: %.2lf", result);
        break;

    case '/' :
        if(num2!=0){
            result=num1/num2;
            printf("Division of two number is: %.2lf", result);
        }else{
            printf("Num2 can't be 0");
        }
        break;

        default:
            printf("Invalid characters!");

    }
}
