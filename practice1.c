#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // Format Specifications Exercise
    printf("We have %d coins in the bank\n", 100);
    printf("We have %f coins in the bank\n", 125.7);
    printf("Year =%d\n", 2024);
    printf("Your average grade is: %f\n", 95.13);
    printf("num1 =%d, num2 = %d, sum = %d\n", 5, 7, 5 + 7);
    printf("num1 =%d, num2 =%d, sub = %d\n", 5, 3, 5 - 3);
    printf("a = %d, b = %d, sum = a + b = %d\n", 3, 5, 3 + 5);
    printf("a = %d, b = %d, sum = %d + %d = %d\n", 3, 5, 3, 5, 3 + 5);
    printf("a = %d, b = %d, sum = a + b = %d + %d = %d\n", 3, 5, 3, 5, 3 + 5);

    // Basic Mathematical Operations
    printf("Addition: 5 + 2 = %d\n", 5 + 2);
    printf("Subtraction: 5 - 2 = %d\n", 5 - 2);
    printf("Multiplication: 5 * 2 = %d\n", 5 * 2);
    printf("Division: 5 / 2 = %d\n", 5 / 2);
    printf("Remainder: 5 %% 2 = %d\n", 5 % 2);

    // Prompts and Variable Types
    int number = 42;
    printf("Integer: %d\n", number);

    int age = 20;
    printf("Age: %d\n", age);

    float float_number = 1.1234567890f;
    double double_number = 1.1234567890;
    printf("Float:  %.10f\n", float_number);
    printf("Double: %.10f\n", double_number);

    char direct_name[] = "Giorgi Jajanidze";
    printf("Direct name: %s\n", direct_name);

    char user_name[50];
    printf("Enter your name: ");
    fgets(user_name, sizeof(user_name), stdin);
    user_name[strcspn(user_name, "\n")] = '\0';
    printf("Input name: %s\n", user_name);

    bool is_student = true;
    printf("Boolean value: %d\n", is_student);

    // EX.1 Changing Values of Variables
    number = 31; // Reusing 'number' safely
    printf("This is number now: %d\n", number);
    number = 99;
    printf("This is number now: %d\n", number);

    // EX.2 Assign One Variable to Another
    int distance = 135;
    printf("The distance is %d km\n", distance);
    int newDistance = 429;
    distance = newDistance;
    printf("The distance is %d km now\n", distance);

    return 0;
}
