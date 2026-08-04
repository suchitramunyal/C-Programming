// (Chapter5) Functions & Recursion

// 1. Function to print Hello
#include<stdio.h>
//function declaration/prototype
void printHello();
int main() {
//function call
printHello();
return 0;
}
//function definition
void printHello() {
printf("Hello!\n");
}

// 2. Function to calculate square of a number
#include<stdio.h>
//function to calculate square of a number
int calcSquare(int n);
int main() {
int n;
printf("enter n : ");
scanf("%d", &n);
printf("square is : %d", calcSquare(n));
return 0;
}
int calcSquare(int n) {
return n * n;
}

// 3. Function to calculate n factorial (using recursion)
# include <stdio.h>
//function to print factorial of n
int factorial(int n);
int main() {
int n;
printf("enter n : ");
scanf("%d", &n);
printf("factorial is : %d", factorial(n));
return 0;
}
int factorial(int n) {
if(n == 0) {
return 1;
}
int factnm1 = factorial(n-1);
int factn = factnm1 * n;
return factn;
}