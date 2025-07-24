#include <stdio.h>

int main() {
    char employee_id[11]; // 10 characters + null terminator
    int hours;
    float salary_per_hour;
    float total_salary;

    // Input
    printf("Enter employee ID (Max. 10 chars): ");
    scanf("%10s", employee_id);

    printf("Input the working hrs: ");
    if (scanf("%d", &hours) != 1) {
        printf("Invalid input for hours.\n");
        return 1;
    }

    printf("Salary amount/hr: ");
    if (scanf("%f", &salary_per_hour) != 1) {
        printf("Invalid input for salary.\n");
        return 1;
    }

    // Calculate
    total_salary = hours * salary_per_hour;

    // Output
    printf("Employees ID = %s\n", employee_id);
    printf("Salary = U$ %.2f\n", total_salary);

    return 0;
}
