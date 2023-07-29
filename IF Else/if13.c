#include <stdio.h>

int main() {
    int regNumber, m1, m2, m3, totalGrade;
    float averageGrade;
    
    printf("Enter student registration number: ");
    scanf("%d", &regNumber);

    printf("Enter grade for subject M1: ");
    scanf("%d", &m1);

    printf("Enter grade for subject M2: ");
    scanf("%d", &m2);

    printf("Enter grade for subject M3: ");
    scanf("%d", &m3);

    totalGrade = m1 + m2 + m3;
    averageGrade = (float)totalGrade / 3;

    printf("\n--- Student Information ---\n");
    printf("Registration Number: %d\n", regNumber);
    printf("Grade for Subject M1: %d\n", m1);
    printf("Grade for Subject M2: %d\n", m2);
    printf("Grade for Subject M3: %d\n", m3);
    printf("Total Grade: %d\n", totalGrade);
    printf("Average Grade: %.2f\n", averageGrade);

    return 0;
}

