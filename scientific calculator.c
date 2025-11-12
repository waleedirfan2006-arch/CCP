#include <stdio.h>
#include <math.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float power(float base, float exp);
long long factorial(int n);
float squareRoot(float n);

int main()
{
    int choice;
    float num1, num2;
    int n;

    while(1) 
    {
        printf("\n\tWelcome to Scientific Calculator\nPRESS:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Factorial\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 8)
        {
            printf("Exiting... Bye!\n");
            break;
        }

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("Result = %f\n", add(num1,num2));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("Result = %f\n", subtract(num1,num2));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("Result = %f\n", multiply(num1,num2));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f",&num1,&num2);
                if(num2==0)
                    printf("INVALID:Can't divide by zero!\n");
                else
                    printf("Result = %f\n", divide(num1,num2));
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%f %f",&num1,&num2);
                printf("Result = %f\n", power(num1,num2));
                break;
            case 6:
                printf("Enter a positive integer: ");
                scanf("%d",&n);
                if(n < 0)
                    printf("Error: factorial not defined for negatives\n");
                else
                    printf("Result = %d! = %lld\n", n, factorial(n));
                break;
            case 7:
                printf("Enter a number: ");
                scanf("%f",&num1);
                if(num1 < 0)
                    printf("Error: Negative number!\n");
                else
                    printf("Result = %.2f\n", squareRoot(num1));
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

float power(float base, float exp)
{
    return powf(base, exp);
}

long long factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

float squareRoot(float n)
{
    return sqrtf(n);
}
