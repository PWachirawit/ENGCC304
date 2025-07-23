#include <stdio.h>

int main() {
    char employee_id[11]; // 10 characters + null terminator
    int hours;
    float salary_per_hour;
    float total_salary;

    // Input
    printf("Enter employee ID (Max. 10 chars): \n");
    scanf("%10s", employee_id);
    
    printf("Input the working hrs: \n");
    scanf("%d", &hours); // ใช้ %d เพราะ hours เป็น int
    
    printf("Salary amount/hr: \n");
    scanf("%f", &salary_per_hour);

    // Calculate
    total_salary = hours * salary_per_hour;

    // Output
    printf("Employees ID = %s\n", employee_id);
    printf("Salary = U$ %.2f\n", total_salary);

    return 0;
}
