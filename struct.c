#include <stdio.h>

struct Person {
    double salary;
    int age;

};

typedef struct Complex {
    double real;
    double imagine;
} complex;

int main () {
    struct Person brian = {
         .age = 34,
        .salary = 33400.12
    };
   

    printf("Age: %d", brian.age);
    printf("Salary: %2lf", brian.salary);

    complex c1 = { .real = 21.87, .imagine = 30};
    complex c2 = {.real=30.45, .imagine=23};

    complex sum;

    sum.real = c1.real + c2.real;
    sum.imagine = c1.imagine + c2.imagine;
    
    return 0;
} 