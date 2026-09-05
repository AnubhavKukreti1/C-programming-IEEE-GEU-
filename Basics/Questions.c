#include <stdio.h>

// 1. Print "Hello World".
void one()
{
    printf("Hello World\n");
}


// 2. Create an int variable called age and print it.
void two()
{
    int age = 25;
    printf("Age: %d\n", age);
}


// 3. Create a char variable called grade and print it.
void three()
{
    char grade = 'A';
    printf("Grade: %c\n", grade);
}


// 4. Take two integers from the user and print their sum.
void four()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;

    printf("Sum: %d\n", sum);
}


// 5. Take two integers and print:
//    Sum
//    Difference
//    Multiplication
//    Division
//    Remainder
void five()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);

    if (num2 != 0)
    {
        printf("Division: %.2f\n", (float)num1 / num2);
        printf("Remainder: %d\n", num1 % num2);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }
}


// 6. Take a decimal number and print it with 2 decimal places.
void six()
{
    float decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%f", &decimalNumber);

    printf("Decimal number: %.2f\n", decimalNumber);
}


// 7. Take a character from the user and print it.
void seven()
{
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("You entered: %c\n", character);
}


// 8. Take two integers and calculate their average using type casting.
void eight()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    float average = (float)(num1 + num2) / 2;

    printf("Average: %.2f\n", average);
}


int main()
{
    one();
    two();
    three();
    four();
    five();
    six();
    seven();
    eight();

    return 0;
}
