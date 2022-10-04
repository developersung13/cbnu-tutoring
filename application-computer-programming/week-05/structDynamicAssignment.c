#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char phone_number[14];
} Student;

int main() {
    int size;
    scanf("%d", &size);
    Student *s = (Student *)malloc(sizeof(Student) * size);
    for (int k=0; k < size; k++) {
        scanf("%d %s", &s[k].age, s[k].phone_number);
        printf("%d %s\n", s[k].age, s[k].phone_number);
    }
}