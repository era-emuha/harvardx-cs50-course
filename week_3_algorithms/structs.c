// Define struct
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
    int votes;
};

int main() {
    struct Student student1;

    // Assign values to the struct members
    snprintf(student1.name, sizeof(student1.name), "Alice");
    student1.age = 20;
    student1.gpa = 3.5;
    student1.votes = 10;

    // Print the struct members
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Votes: %d\n", student1.votes);

    const int num_students = 3;
    struct Student students[num_students];

    for (int i = 0; i < num_students; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
        printf("Votes: ");
        scanf("%d", &students[i].votes);
    }


    return 0;
}