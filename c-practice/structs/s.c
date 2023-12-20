#include <stdio.h>

typedef struct Address {
    char street[10];
    char city[10];
    int zipCode;
}Address;

typedef struct Person {
    char name[10];
    int age;
    Address address;
}Person;

int main() {
    Person person1;

    strcpy(person1.name,"Nithin");
    person1.age = 22;
    strcpy(person1.address.street,"COLONY");
    strcpy(person1.address.city,"ADN");
    person1.address.zipCode=512435;

    printf("Person Information:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %s, %d\n", person1.address.street, person1.address.city, person1.address.zipCode);

    return 0;
}
