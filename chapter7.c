// (Chapter7) Arrays
// 1. Syntax
# include <stdio.h>
int main() {
int marks[3];
printf("physics : ");
scanf("%d", &marks[0]);
printf("chem : ");
scanf("%d", &marks[1]);
printf("math : ");
scanf("%d", &marks[2]);
printf("physics = %d, ", marks[0]); //physics
printf("chem = %d, ", marks[1]);
//chem
printf("math = %d \n", marks[2]); //math
return 0;
}

// 2.Pointer Arithmetic
# include <stdio.h>
int main() {
int age = 22;
int *ptr = &age;
int _age = 25;
int *_ptr = &_age;
printf("%u\n", ptr);
ptr++;
printf("%u\n", ptr);
ptr--;
printf("%u\n", ptr);
ptr = ptr - _ptr;
printf("%u\n", ptr);
ptr = &_age;
printf("%d\n", ptr == _ptr);
return 0;
}


// 3. Accessing an Array
# include <stdio.h>
void printNumbers(int *arr, int n);
void _printNumbers(int arr[], int n);
int main() {
int arr[] = {1, 2, 3, 4, 5, 6};
printNumbers(arr, 6);
printNumbers(arr, 6);
return 0;
}
void printNumbers(int *arr, int n) {
for(int i=0; i<n; i++) {
printf("%d : %d\n", i, arr[i]);
}
}
void _printNumbers(int arr[], int n) {
for(int i=0; i<n; i++) {
printf("%d : %d\n", i, arr[i]);
}
}