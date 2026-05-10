#include <stdio.h>

/*
+ ~ >>>                                                          <<< ~ +
________________________________________________________________________
|                                TOOL BOX                              |
|                     RANDOM CODES FOR C PROGRAMMING                   |
|                  !!! ONLY USING THE STDIO LIBRARY !!!                |
|______________________________________________________________________|

________________________________________________________________________
|                   PROJECT CONCLUSION PROGRESS BAR                    |
|                                0.23%                                 |
|______________________________________________________________________|
|.                                                                     |
|______________________________________________________________________|

+ ~ >>>                                                          <<< ~ +

Hello how are you? ^.^

I'm Diogo and this is a very small project of
mine. I'm trying to collect every single
simple code for people who want to learn how to
start off with C.

All the codes here only use the stdio library.
This is meant so that its able to proof that
you can do many things with the most simple yet
very complex, famous yet unknown library.

I am doing this mainly for two reasons: I want 
to develop my knowledge on the C language; and
I want to help other people who want to use
this for educational purposes on exercises,
projects or other needs related to academics.

ATTENTION: I am not promoting the use of these
codes to bypass all the essential learning part
of programming, repelling any responsability to
if that is happening or not.

Happy coding!

Regards,

Diogo.

+ ~ >>>                                                          <<< ~ +
*/


/*
+ ~ >>>                                                          <<< ~ +
________________________________________________________________________
|                                                                      |
|                            --  INDEX  --                             |
|______________________________________________________________________|
+ ~ >>>                                                          <<< ~ +
*/


/*
INDEX                                         | LINE | LEVEL   | LATEST UPDATE

VOLUME A ::: EXPOSED CODING

[1]: CHECKERS    ____________________________

[1.1] - Odd or Even number................... |      | POTATO  | 30/04/2026
[1.2] - Between a specific range of numbers
[1.2.1] - Inclusive.......................... |      | POTATO  | 30/04/2026
[1.2.2] - Exclusive.......................... |      | POTATO  | 30/04/2026
[1.3] - Input type........................... |      | EASY    | 30/04/2026
[1.4] - Boolean for specific value........... |      | POTATO  | 30/04/2026
[1.5] - Vowels............................... |      | EASY    | 04/05/2026

[2]: MATHEMATICS    _________________________

[2.1] - Math Basics
[2.1.1] - Simple Properties (+, -, x, :)..... |      | POTATO  | 01/05/2026
[2.1.2] - Factorial.......................... |      | EASY    | 02/05/2026
[2.1.3] - Exponent........................... |      | EASY    | 02/05/2026
[2.1.4] - Square Root........................ |      | EASY    | 04/05/2026
[2.1.5] - Second Degree Equations............ |      | EASY    | 04/05/2026
[2.2] - Areas, Perimeters and Volumes
[2.2.1] - Square and Cube.................... |      | EASY    | 02/05/2026
[2.2.2] - Circle and Sphere.................. |      | EASY    | 02/05/2026
[2.2.3] - Triangle and Pyramid............... |      | EASY    | 02/05/2026

[3]: DRAWINGS    ____________________________

[3.1] - With infill
[3.1.1] - Square............................. |
[3.1.2] - Trapezium.......................... |
[3.1.3] - Right Triangle..................... |
[3.1.4] - Rectangle.......................... |
[3.1.5] - Circle............................. |
[3.1.6] - Star............................... |
[3.1.7] - Diamond............................ |
[3.1] - Without infill
[3.1.1] - Square............................. |
[3.1.2] - Trapezium.......................... |
[3.1.3] - Right Triangle..................... |
[3.1.4] - Rectangle.......................... |
[3.1.5] - Circle............................. |
[3.1.6] - Star............................... |
[3.1.7] - Diamond............................ |
*/


/*
________________________________________________________________________
|                                                                      |
|                        CHAPTER [1]: CHECKERS                         |
|______________________________________________________________________|

- Checkers are quite literally just codes that check
user input.

*/


// [1.1] - Odd or Even number


/*
int main(){
    int value = 0;

    printf("--Odd or Even number checker--\n");
    printf("Insert an integer number: ");

    scanf("%d", &value);

    if(value % 2 == 0){
        printf("%d is Even.", value);
    }else{
        printf(" %d is Odd.", value);
    }

    return 0;
}
*/


// [1.2] - Between a specific range of numbers

// [1.2.1] - Exclusive
// This code excludes the selected range values, only 
// accepting the values in between them.
//
// EXAMPLE: 
// -----
// highest_value = 10
// lowest_value = 2
// ONLY ACCEPTED NUMBERS: 3, 4, 5, 6, 7, 8, 9.


/*
int main(){
    int value;
    int highest_value = 10;  // CUSTOMIZABLE
    int lowest_value = 2;    // CUSTOMIZABLE

    printf("--Between range number checker--\n");
    printf("Insert an integer number: ");

    scanf("%d", &value);

    if(value < highest_value){
        if(value > lowest_value){
            printf("%d is within the %d and %d range.", value, lowest_value, highest_value);
        }
    }else{
        printf("%d is not within the %d and %d range or is invalid.", value, lowest_value, highest_value);
    }

    return 0;
}
*/


// [1.2.2] - Inclusive

// This code includes the selected range values,
// accepting the values in between them and the
// specified range values.
//
// EXAMPLE: 
// -----
// highest_value = 10
// lowest_value = 2
// ONLY ACCEPTED NUMBERS: 2, 3, 4, 5, 6, 7, 8, 9, 10.


/*
int main(){
    int value;
    int highest_value = 10;  // CUSTOMIZABLE
    int lowest_value = 2;    // CUSTOMIZABLE

    printf("--Between range number checker--\n");
    printf("Insert an integer number: ");

    scanf("%d", &value);

    if(value <= highest_value){
        if(value >= lowest_value){
            printf("%d is within the %d and %d range.", value, lowest_value, highest_value);
        }
    }else{
        printf("%d is not within the %d and %d range or is invalid.", value, lowest_value, highest_value);
    }

    return 0;
}
*/


// [1.3] - Input Type

// In some cases, you might want to check
// if an inserted value is an int, a float,
// a char, etc.


/*
void main() {
    char whatever[100];
    int dot, letter, i;

    printf("--Input Type Checker--\n");
    printf("Insert something: ");

    scanf("%s", whatever);

    while(whatever[i] != '\0'){
        if (whatever[i] == '.') 
            dot = 1;
        if ((whatever[i] >= 'a' && whatever[i] <= 'z') || (whatever[i] >= 'A' && whatever[i] <= 'Z')) 
            letter = 1;
        i++;
    }

    if((letter) && (whatever[1] == '\0')){
        printf("Input value %s is a character (type: char).\n", whatever);
    }else if(letter){
        printf("Input value %s is a string (type: string).\n", whatever);
    }else if (dot){
        printf("Input value %s is a float (type: float).\n", whatever);
    }else{
        printf("Input value %s is an integer (type: int).\n", whatever);
    }
}
*/


// [1.4] - Boolean for specific value

// This code returns True or False if the
// inserted value is the correct one.


/*
void main(){
    int value;
    int specific_value = 2;  // CUSTOMIZABLE

    printf("--Boolean Checker--");
    printf("Insert '2'. If anything else is inserted, False is returned: ");

    scanf("%s", &value);

    if(value == specific_value){
        printf("True");
    }else{
        printf("False");
    }
}
*/


// [1.5] - Vowel

// This code returns if a user input is
// a vowel or not.


/*
void main() {
    char c;

    printf("-- Character | Checkers --\n");
    printf("Enter a character: ");
    scanf(" %c", &c);
    
    if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u') {
        printf("The character %c is a vowel.\n", c);
    }else{
        printf("The character %c is not a vowel.\n", c);
    }
}
*/


/*
________________________________________________________________________
|                                                                      |
|                       CHAPTER [2]: MATHEMATICS                       |
|______________________________________________________________________|

- Mathematics are used everywhere in programming. All
codes are made using mathematics.
- However, this chapter is really just related to the
basics of mathematics, ranging from sum and subtraction
to probabilities and statistics.

*/


// [2.1] - Math Basics

// -


// [2.1.1] - Simple Properties (+, -, x, :)


/*
void main(){
    float value1, value2;
    float result1, result2, result3, result4;

    printf("-- Simple Properties | Mathematics --\n");
    printf("Insert an integer/decimal number: ");
    scanf("%f", &value1);
    printf("Insert another integer/decimal number: ");
    scanf("%f", &value2);

    result1 = value1 + value2;
    result2 = value1 - value2;
    result3 = value1 * value2;
    result4 = value1 / value2;

    printf(">> Adition: %g + %g = %g\n", value1, value2, result1);
    printf(">> Subtraction: %g - %g = %g\n", value1, value2, result2);
    printf(">> Multiplication: %g x %g = %g\n", value1, value2, result3);
    printf(">> Division: %g : %g = %g\n", value1, value2, result4);
}
*/


// [2.1.2] - Factorial


/*
void main(){
    int x;
    int value;
    int fact = 1;

    printf("-- Factorial | Mathematics --\n");
    printf("Insert an integer, smaller than 20, to know its factorial: ");

    scanf("%d", &value);

    x=value;

    while(x > 1){
        fact = x * fact;
        x--;
    }

    printf("The factorial of %d is %d.", value, fact);
}
*/


// [2.1.3] - Exponent


/*
#include <stdio.h>

void main(){
    int value1, value2;
    double result = 1.0;
    int i;

    printf("-- Exponent | Mathematics --\n");
    printf("Insert an integer for the base number: ");
    scanf("%d", &value1);
    printf("Insert the exponent number: ");
    scanf("%d", &value2);

    i = value2;

    while(i > 0){
        result = result * value1;
        i--;
    }

    printf("%d^%d = %g\n", value1, value2, result);
}
*/


// [2.1.4] - Square Root


/*
void main() {
    double value, x;
    
    printf("Number: ");
    scanf("%lf", &value);
    
    x = value;

    for (int i = 0; i < 10; i++) {
        x = (x + value / x) / 2;
    }
    
    printf("The square root of %.2f is %.2f.\n", value, x);
}
*/


// [2.1.5] - Second Degree


/*
void main(){
    double a, b, c, x1, x2, discriminant, squared;
    
    printf("-- Second Degree | Mathematics --\n");
    printf("a= ");
    scanf("%lf", &a);
    printf("b= ");
    scanf("%lf", &b);
    printf("c= ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;
    squared = discriminant;
    
    for (int i = 0; i < 10; i++) {
        squared = (squared + discriminant / squared) / 2;
    }
    
    x1 = (-b + squared) / (2 * a);
    x2 = (-b - squared) / (2 * a);
    
    printf("x1 = %g\n", x1);
    printf("x2 = %g\n", x2);
}
*/


// [2.2] - Areas, Perimeters and Volumes

// [2.2.1] - Square and Cube


/*
void main(){
    int side, area, volume;

    printf("-- Square and Cube | Mathematics --\n");
    printf("Insert the side of the square: ");

    scanf("%d", &side);

    area = side * side;
    volume = side * side * side;

    printf("The area of the square is %d cm2.\n", area);
    printf("The volume of the cube is %d cm3.", volume);
}
*/


// [2.2.2] - Circle and Sphere


/*
void main(){
    double radius, area, volume;

    printf("-- Circle and Sphere | Mathematics --\n");
    printf("Insert the radius: ");

    scanf("%lf", &radius);

    area = (3.14159265359) * radius * radius;
    volume = (4.0/3.0) * (3.14159265359) * radius * radius * radius;

    printf("The area of the circle is %g cm2.\n", area);
    printf("The volume of the sphere is %g cm3.", volume);
}
*/


// [2.2.3] - Triangle and Pyramid

// This is valid for any triangle.


/*
void main(){
    double base, height, area, volume;

    printf("-- Triangle and Pyramid | Mathematics --\n");

    printf("Insert the base side length: ");
    scanf("%lf", &base);
    printf("Insert the height side length: ");
    scanf("%lf", &height);

    area = (base * height) / 2.0;
    volume = (area * height) / 3.0;

    printf("The area of the triangle is %g cm2.", area);
    printf("The volume of the pyramid is %g cm3.", volume);

}
*/


/*
________________________________________________________________________
|                                                                      |
|                        CHAPTER [3]: DRAWINGS                         |
|______________________________________________________________________|

- Drawings are probably considered the most important ways to learn
about arrays, array lists and dictionaries.
- There are several teachers or tutors that focus on making this a
project for a course or an exam question.
- If the purpose is to use this and make a project, use it for the
LEARNING PURPOSE only! :)

*/


// [3.1] - With Infill

// [3.1.1] - Square

// For an input value, it prints a square-like shape terminal output.
// Here's an example:

// INPUT:
// 3
// OUTPUT:
// X X X
// X X X
// X X X

// INPUT:
// 5
// OUTPUT:
// X X X X X
// X X X X X
// X X X X X
// X X X X X
// X X X X X


/*
void main() {
    int value;
    
    printf("Enter a number: ");
    scanf("%d", &value);
    
    for(int i = 0; i < value; i++) {
        for(int j = 0; j < value; j++) {
            printf("X ");
        }
    printf("\n");
    }
}
*/


// [3.1.2] - Trapezium


// For an input value, it prints a trapezium-like shape terminal output.
// The input is the trapezium's height.
// Here's an example:

// INPUT:
// 3
// OUTPUT:
// X X 
// X X X 
// X X X X

// INPUT:
// 5
// OUTPUT:
// X X X 
// X X X X 
// X X X X X 
// X X X X X X 
// X X X X X X X 



void main() {
    int n, start;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    start = n/2 + 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < start + i; j++) {
            printf("X ");
        }
    printf("\n");
    }
}



// [3.1.3] - Right Triangle


/*
void main() {
    int n;
    
    printf("Enter base length: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            printf("X ");
        }
        printf("\n");
    }
}
*/