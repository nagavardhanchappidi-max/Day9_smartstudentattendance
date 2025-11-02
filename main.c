#include <stdio.h>

int main() {
    int total_students, days_present, eligible = 0, not_eligible = 0;
    float percentage, total_percent = 0, avg_percent;
    int count = 1;

    printf("Enter number of students: ");
    scanf("%d", &total_students);

    while (count <= total_students) {
        printf("\nEnter student %d number of days present (out of 30): ", count);
        scanf("%d", &days_present);

        // Calculate attendance percentage
        percentage = (days_present / 30.0) * 100;

        printf("Student %d attendance percentage: %.2f%%\n", count, percentage);

        // Check eligibility
        if (percentage >= 75) {
            printf("Student %d is Eligible for exam.\n", count);
            eligible += 1;
        } else {
            printf("Student %d is NOT Eligible for exam.\n", count);
            not_eligible += 1;
        }

        total_percent += percentage;
        count++;
    }

    // Calculate average attendance
    avg_percent = total_percent / total_students;

    // Display summary
    printf("\n----- Summary of %d Students -----\n", total_students);
    printf("Total Students: %d\n", total_students);
    printf("Eligible for Exam: %d\n", eligible);
    printf("Not Eligible for Exam: %d\n", not_eligible);
    printf("Average Attendance: %.2f%%\n", avg_percent);

    return 0;
}