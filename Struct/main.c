//
// Created by sivan on 2021/6/1.
//

#include "main.h"
typedef struct Job {
    char *name;
    int id;
    char *location;
} Job;


typedef struct Person {
    char *name;
    int age;
    Job *job;
} Person;


int main() {
    Job job = {.name="intern", .id=1, .location="shanghai"};
    Person person = {.age=10, .name="xiaoli", .job=&job};
    PRINT_INT(person.age);
    struct Person *person_ptr = &person;
    PRINT_INT(person_ptr->age);
    PRINT_INT(person_ptr->job);

    PRINT_INT(sizeof(person));
    PRINT_HEX(person);
}