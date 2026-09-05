Sure — here is the same material formatted as a **Markdown file (`AboutC.md`)**.

 AboutC.md

# C Programming — Basics

 ## 1\. What is C?

 C is a programming language used to create software that can interact closely with computer memory and hardware.

 C is commonly used for:

 - Operating systems
- Embedded systems
- Drivers
- Compilers
- System software
- High-performance applications

---

 ## 2\. Basic Structure of a C Program

 The basic structure of a C program is:

```
#include <stdio.h>

int main()
{
    // Your code goes here

    return 0;
}
```

---

 ## 3\. `#include <stdio.h>`

```
#include <stdio.h>
```

 This tells the compiler to include the **Standard Input/Output library**.

 It provides functions such as:

```
printf()
scanf()
```

 For now, think of `#include` as:

 > "I want to use functionality provided by this library."

---

 ## 4\. `main()`

 `main()` is the starting point of a C program.

 When a C program runs, execution starts from the `main()` function.

```
int main()
{
    // Program execution starts here
}
```

 The `int` before `main()` means that the function returns an integer.

 Usually we use:

```
return 0;
```

 This means the program finished successfully.

---

 ## 5\. Statements and Semicolon

 Most C statements end with a semicolon `;`.

 Example:

```
int age = 20;

printf("Hello");

return 0;
```

 The semicolon tells the compiler that the statement has ended.

 ### Example

 Incorrect:

```
int age = 20
```

 Correct:

```
int age = 20;
```

---

 ## 6\. Comments

 Comments are ignored by the compiler. They are used to explain code.

 ### Single-line comment

```
// This is a comment
```

 Example:

```
int age = 20; // Store the age
```

 ### Multi-line comment

```
/*
   This is a
   multi-line comment
*/
```

---

 ## 7\. Variables

 A variable is a named location used to store data.

 Example:

```
int age = 20;
```

 Here:

 - `int` → data type
- `age` → variable name
- `20` → value
- `=` → assignment operator
- `;` → end of statement

 A variable's value can be changed:

```
int age = 20;

age = 21;
```

 Now `age` contains `21`.

---

 ## 8\. Basic Data Types

 The four important beginner data types are:

 | Data Type | Stores | Example |
| --- | --- | --- |
| `int` | Whole numbers | `10` |
| `char` | One character | `'A'` |
| `float` | Decimal numbers | `3.14` |
| `double` | More precise decimal numbers | `3.141592` |

 ### `int`

 Stores whole numbers.

```
int age = 20;
int marks = 95;
int temperature = -5;
```

 ### `char`

 Stores one character.

```
char grade = 'A';
char letter = 'B';
```

 Characters use **single quotes**:

```
'A'
```

 Not:

```
"A"
```

 ### `float`

 Stores decimal numbers.

```
float height = 5.8;
float price = 99.99;
```

 ### `double`

 Stores decimal numbers with greater precision.

```
double pi = 3.14159265359;
```

 ### Quick Summary

```
int     → whole number
char    → one character
float   → decimal number
double  → more precise decimal number
```

---

 ## 9\. Constants

 A constant is a value that should not be changed.

 Use the `const` keyword:

```
const int DAYS = 7;
```

 After this, changing `DAYS` is not allowed.

 Example:

```
const float PI = 3.14159;
```

 A common convention is to use uppercase names for constants:

```
const int MAX_SIZE = 100;
```

---

 ## 10\. Operators

 Operators are symbols that perform operations.

 ### Arithmetic Operators

 | Operator | Operation |
| --- | --- |
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Remainder |

 Example:

```
int a = 10;
int b = 3;

printf("%d\n", a + b);
printf("%d\n", a - b);
printf("%d\n", a * b);
printf("%d\n", a / b);
printf("%d\n", a % b);
```

 Output:

```
13
7
30
3
1
```

 ### Important

 When both values are integers, **integer division** is performed.

```
10 / 3
```

 gives:

```
3
```

 It does not give:

```
3.333333
```

---

 ## 11\. Assignment Operator

 The `=` operator assigns a value to a variable.

 Example:

```
int age = 20;

age = 25;
```

 Now `age` contains `25`.

 ### Don't confuse these:

```
=   → assignment
==  → comparison
```

 Example:

```
age = 20;
```

 means:

 > Store `20` in `age`.

 `==` is used to compare values and will be covered with `if` statements.

---

 ## 12\. `printf()`

 `printf()` is used to display output on the screen.

 Example:

```
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
```

 Output:

```
Hello World
```

 ### New Line

 `\n` means **new line**.

 Example:

```
printf("Hello\n");
printf("World\n");
```

 Output:

```
Hello
World
```

---

 ## 13\. Printing Variables

 Different data types use different format specifiers.

 ### Integer

```
int age = 20;

printf("%d", age);
```

 ### Character

```
char grade = 'A';

printf("%c", grade);
```

 ### Float

```
float height = 5.8;

printf("%f", height);
```

 ### Double

```
double pi = 3.141592;

printf("%f", pi);
```

 ### Common Format Specifiers

 | Data Type | Format Specifier |
| --- | --- |
| `int` | `%d` |
| `char` | `%c` |
| `float` | `%f` |
| `double` | `%f` with `printf()` |

---

 ## 14\. `scanf()`

 `scanf()` is used to take input from the user.

 Example:

```
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d", age);

    return 0;
}
```

 If the user enters:

```
20
```

 Output:

```
Your age is 20
```

 ### Why `&age`?

 For now, remember:

```
scanf("%d", &age);
```

 The `&` tells `scanf()` where it should store the user's input.

 The exact reason for using `&` will become clear when learning **pointers**.

---

 ## 15\. `scanf()` with Different Data Types

 ### Integer

```
int age;

scanf("%d", &age);
```

 ### Character

```
char grade;

scanf(" %c", &grade);
```

 Notice the space before `%c`:

```
" %c"
```

 ### Float

```
float height;

scanf("%f", &height);
```

 ### Double

```
double price;

scanf("%lf", &price);
```

 ### Common `scanf()` Format Specifiers

```
int     → %d
char    → %c
float   → %f
double  → %lf
```

---

 ## 16\. Type Casting

 Type casting means converting one data type into another.

 ### Basic Syntax

```
(type) value
```

 Examples:

```
(float)10
(double)10
(int)3.14
```

 ### Example

```
int a = 10;
int b = 3;

float result = (float)a / b;

printf("%f", result);
```

 Output:

```
3.333333
```

 Without casting:

```
int a = 10;
int b = 3;

float result = a / b;
```

 The result is:

```
3
```

 because `a` and `b` are integers.

 With:

```
(float)a
```

 `a` is converted to a float before division.

 ### Another Example

```
double x = 9.8;

int y = (int)x;

printf("%d", y);
```

 Output:

```
9
```

 The decimal part is discarded.

---

 ## 17\. Variable Naming Rules

 ### Valid variable names

```
int age;
int studentAge;
int student_age;
int number1;
```

 ### Invalid variable names

```
int 1number;
int student age;
```

 A variable name:

 - Cannot start with a number
- Cannot contain spaces
- Can contain letters
- Can contain numbers
- Can contain underscores
- Is case-sensitive

 These are different variables:

```
int age;
int Age;
int AGE;
```

 Use meaningful names when possible:

```
int studentAge;
float temperature;
int totalMarks;
```

---

 ## 18\. Case Sensitivity

 C is **case-sensitive**.

 These are different:

```
age
Age
AGE
```

 Similarly:

```
printf()
```

 is different from:

```
Printf()
```

---

 ## 19\. Complete Beginner Program

```
#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n--- Student Information ---\n");

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

 If you enter:

```
20
5.8
A
```

 You'll get approximately:

```
--- Student Information ---
Age: 20
Height: 5.80
Grade: A
```

---

 ## 20\. `%.2f`

 `%.2f` prints a floating-point value with **2 digits after the decimal point**.

 Example:

```
float height = 5.8;

printf("%.2f", height);
```

 Output:

```
5.80
```

---

 ## 21\. How C Compilation Works

 C source code is not directly executed by the computer.

 A simplified process is:

```
C source code
      |
      v
Preprocessor
      |
      v
Compiler
      |
      v
Object code
      |
      v
Linker
      |
      v
Executable program
      |
      v
     Run
```

 Using GCC:

```
gcc program.c -o program
```

 Then run:

```
./program
```

 On Windows:

```
program.exe
```

 The basic idea is:

```
You write C code
       |
       v
Compiler translates it
       |
       v
Executable program is created
       |
       v
Computer runs the program
```

---

 ## 22\. Basic C Template

 This is the basic template you should remember:

```
#include <stdio.h>

int main()
{
    // Declare variables

    // Take input

    // Process data

    // Display output

    return 0;
}
```

---

 ## 23\. Example: Add Two Numbers

```
#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;

    printf("Enter two numbers: ");

    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d\n", sum);

    return 0;
}
```

---

 ## 24\. Important Things to Remember

 | Syntax | Meaning |
| --- | --- |
| `#include <stdio.h>` | Gives access to `printf()` and `scanf()` |
| `main()` | Starting point of the program |
| `int` | Whole number |
| `char` | One character |
| `float` | Decimal number |
| `double` | More precise decimal number |
| `const` | Makes a variable constant |
| `printf()` | Displays output |
| `scanf()` | Takes input |
| `&` | Used with `scanf()` to provide the variable's address |
| `%d` | `int` |
| `%c` | `char` |
| `%f` | `float` |
| `%lf` | `double` with `scanf()` |
| `\n` | New line |
| `;` | Ends most statements |
| `//` | Single-line comment |
| `/* */` | Multi-line comment |
| `(type)` | Type casting |

---