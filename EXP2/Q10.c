// Design a structure ‘student_record’ to store student details like name, SAP ID, enrollment number, date of registration and date of birth. The element date of joining is defined using another structure ‘date’ to store date details like day, month, and year. Get data of ‘n’ students and then print the entered values [Hint: Use concept of Nested structures and Array of Structures].

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[20];
    int SAP_ID;
    int enrollment_number;
    struct Date date_of_registration;
    struct Date date_of_birth;
};

void main()
{
    struct Student *s;
    s = (struct Student *)malloc(sizeof(struct Student));
    printf("Enter the name of the student: ");
    scanf("%s", s->name);
    printf("Enter the SAP ID: ");
    scanf("%d", &s->SAP_ID);
    printf("Enter the enrollment number: ");
    scanf("%d", &s->enrollment_number);
    printf("Enter the date of registration (dd mm yyyy): ");
    scanf("%d %d %d", &s->date_of_registration.day, &s->date_of_registration.month, &s->date_of_registration.year);
    printf("Enter the date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s->date_of_birth.day, &s->date_of_birth.month, &s->date_of_birth.year);
    printf("\nName: %s", s->name);
    printf("\nSAP ID: %d", s->SAP_ID);
    printf("\nEnrollment number: %d", s->enrollment_number);
    printf("\nDate of registration: %d/%d/%d", s->date_of_registration.day, s->date_of_registration.month, s->date_of_registration.year);
    printf("\nDate of birth: %d/%d/%d", s->date_of_birth.day, s->date_of_birth.month, s->date_of_birth.year);
}