#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

struct Animal {
    char type[50];
    char breed[50];
};

void printStudent(struct Student s) {
    printf("Student ID: %d, Name: %s\n", s.id, s.name);
}

void printAnimal(struct Animal a) {
    printf("Animal Type: %s, Breed: %s\n", a.type, a.breed);
}

int main() {
    struct Student s1 = {23, "Ahmet"};
    struct Student s2 = {65, "John"};

    struct Animal dog = {"Kopek", "Kangal"};
    struct Animal cat = {"Kedi", "Tekir"};

    printStudent(s1);
    printStudent(s2);

    printAnimal(dog);
    printAnimal(cat);

    return 0;
}

