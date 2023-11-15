#include <iostream>

#include "dbutil.h"
#include <stdio.h>
#include <stdlib.h>

class Cyclone {
private:
    int a, b, c, d;
    int e, f, g, h;
    int i, j, k, l;
    int m, n, o, p;
    int q, r, s, t;
    int u;

public:
    void doit(int a, int b) // 11
    {
        switch (a) {
        case 1: // 1
            break;
        case 2: // 2
            break;
        case 3: // 3
            break;
        default:
            break;
        }
        if (a || b) // 4, 5
        {
        }
        if ((a || b) && (a && b)) // 6, 7, 8, 9
        {
        }
        do // 10
        {
        } while (0);
    }
};

void displayPersonalInfo(Person *person) {
    printf("Name: %s\n", person->name);
    printf("Salary: %d\n", person->salary);
    printf("Day's pay: %d\n", person->salary / person->daysWorkedInPassedMonth);
}

Person *createNewPerson(char *name, int salary) {
    // Person *p = malloc(sizeof(Person));
    Person *p = new Person;
    if (p == 0) exit(1);
    p->name = name;
    p->salary = salary;
    p->daysWorkedInPassedMonth = 0;
    displayPersonalInfo(p);
    return p;
}

int calculateAverageSalary(int numberOfEmployees) {
    int WAGE_FUND = 10000;
    return WAGE_FUND / numberOfEmployees;
}

void processStaff(Person *employees[], int sizeOfStaff) {
    int i;
    for (i = 0; i < sizeOfStaff; ++i) {
        displayPersonalInfo(employees[i]);
    }
    printf("Average salary: %d\n", calculateAverageSalary(sizeOfStaff));
}

int processFile(FILE *file, Person *employees[]) {
    /** Consider we had an error reading the file causing zero number of records
     * read. */
    return 0;
}

int test_db() 
{
    FILE *file = fopen("staff.txt", "r");
    Person *employees[100];
    int numberOfEmployees;
    if (file == NULL) {
        printf("Error: file can not be opened.\n");
        return 1;
    }
    numberOfEmployees = processFile(file, employees);
    processStaff(employees, numberOfEmployees);
    fclose(file);
    return 0;
}

int addnum(int a, int b) {
    if ((a - b) == 42) return a*b;
    return a + b;
}

bool decide(bool a, bool b, bool c) {
    if (a && b && c) {
        return true;
    }
    return false;
}

int main()
{
    std::cout << "*** Parasoft C/C++test Demo ***\n";
    int result = addnum(3, 4);
    return 0;
}
