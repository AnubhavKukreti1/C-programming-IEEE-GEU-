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

// 9. Check whether a number is positive, negative, or zero

void nine() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number > 0) 
    {
        printf("The number is positive.\n");
    } 
    else if (number < 0) 
    {
        printf("The number is negative.\n");
    } 
    else 
    {
        printf("The number is zero.\n");
    }
}

// 10. Check whether a number is even or odd
// Question: Take an integer and check whether it is even or odd.


void ten()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

// 11. Find the greater of two numbers
// Question: Take two integers and print the larger number.


void eleven()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("Greater: %d\n", num1);
    }
    else if (num2 > num1)
    {
        printf("Greater: %d\n", num2);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }
}


// 12. Find the smallest of three numbers.
// Take three integers and print the smallest number.
void twelve()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        printf("Smallest: %d\n", a);
    }
    else if (b <= a && b <= c)
    {
        printf("Smallest: %d\n", b);
    }
    else
    {
        printf("Smallest: %d\n", c);
    }
}

// 14. Check whether a person is eligible to vote.
// Assume the voting age is 18.
void fourteen()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }
}



int main()
{
    one();
    two();
    three();
    four();
    five();
    six();
    fourteen();
    seven();
    eight();
    nine();
    ten();
    eleven();
    twelve();
    return 0;
}
