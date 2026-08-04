// (chapter2) Instructions & Operators
// 1.Type Declaration Instructions
#include<stdio.h>
 
int main() {
    int age=22;
    int oldAge=age;
    int newAge=oldAge + 2;
    printf("new age is : %d", newAge);

    int rupee = 1, doller;
    doller = 74;

    /*
       order of declaration is important - wrong Declaration order 
       float pi = 3.14;
       float area = pi * rad * rad;
       float rad = 3;
    */

    // valid declaration
    int age1, age2, age3;
    age1 = age2 = age3 = 22;

    //Invalid 
    //int a1 = a2 = a3 = 22;

    return 0;
}

//2.Arithmetic Instructions
#include<stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    //valid
    a = b + c;

    //invalid
    //b + c = a;

    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);
    return 0;
}

// >Type Conversion
#include<stdio.h>

int main() {
    printf("sum of 2 & 3 : %d", 2 + 3);
    printf("sum of 2.0 & 3 : %f", 2.0 + 3);
    printf("sum of 2.0 & 3.0 : %f", 2.0 + 3.0);
    return 0;

}

// >Associativity
#include<stdio.h>

int main() {
    printf(" Output : %d", 5+2/2*3);
    return 0;
}

//3.Relational Operator
#include<stdio.h>

int main() {
    printf("%d \n", 4==4);

    printf("%d \n", 4<3);
    printf("%d \n", 3<4);
    printf("%d \n", 4<4);
    printf("%d \n", 4<=4);

    printf("%d \n", 4>3);
    printf("%d \n", 3>4);
    printf("%d \n", 4>4);
    printf("%d \n", 4>=4);

    printf("%d \n", 4!=4);
    printf("%d \n", 3!=4);
    return 0;
}

//4. Logical Operator
#include<stdio.h>

int main() {
    printf("%d \n", 3<4 && 3<5);
    printf("%d \n", 3<4 && 5<4);

    printf("%d \n", 3<4 && 5<4);
    printf("%d \n", 3<4 && 5>4);
    printf("%d \n", 3<4 && 3<5);

    printf("%d \n", (!3<4 && 3<5));
    printf("%d \n", !(4<3 && 5<3));
    return 0;
}

//5. Assignment Operator
#include<stdio.h>

int main() {
    int a = 10;
    a += 10;
    printf("a+10 = %d \n",a);
    a -= 10;
    printf("a-10 = %d \n",a);
    a *= 10;
    printf("a*10 = %d \n",a);
    a /= 10;
    printf("a/10 = %d \n",a);
    a %= 10;
    printf("a%c10 = %d \n", '%', a);
    return 0;
}





