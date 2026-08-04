// (Chapter3) Conditional Statements

//1. if-else
#include<stdio.h>

int main() {
    int age = 19;
    if(age >= 18) {
        printf("you are a adult");
    }
    else {
        printf("you are not an adult");

    }
    return 0;
}

//> check if a number is odd or even
#include<stdio.h>

int main() {
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("even");
    }
    else {
        printf("odd");
    }
    return 0;

}

//> Use of else if
#include<stdio.h>
int main() {
int age;
printf("Enter age : ");
scanf("%d", &age);
if(age < 12) {
printf("child");
}
else if(age < 18) {
printf("teenager");
}
else {
printf("adult");
}
return 0;
}

//Ternary Operator
#include<stdio.h>
int main() {
int age;
printf("Enter age : ");
scanf("%d", &age);
age > 18 ? printf("adult \n") : printf("not adult \n");
return 0;
}

#include<stdio.h>
int main() {
int number = 7;
int luckyNumber = 7;
printf("Enter number : ");
scanf("%d", &number);
number == luckyNumber ? printf("you are lucky \n") : printf("you are not lucky \n");
return 0;
}

// Switch (integer)
#include<stdio.h>
#include<math.h>
int main() {
int day = 5;
switch(day) {
case 1 : printf("monday \n");
break;
case 2 : printf("tuesday \n");
break;
case 3 : printf("wednesday \n");
break;
case 4 : printf("thursday \n");
break;
case 5 : printf("friday \n");
break;
case 6 : printf("saturday \n");
break;
case 7 : printf("sunday \n");
break;
}
return 0;
}

// Switch (character)
#include<stdio.h>
#include<math.h>
int main() {
    char ch;
printf("Enter a char: ");
scanf("%c", &ch);
switch(ch) {
case 'm' : printf("monday \n");
break;
case 't' : printf("tuesday \n");
break;
case 'w' : printf("wednesday \n");
break;
case 'T' : printf("thursday \n");
break;
case 'f' : printf("friday \n");
break;
case 's' : printf("saturday \n");
break;
case 'S' : printf("sunday \n");
break;
}
return 0;
}