#include <stdio.h>
#include <string.h>

// 1. Student
struct Student {
    int rollNo;
    char name[20];
    float marks;
};

// 2. Employee
struct Employee {
    int id;
    char name[20];
    float salary;
};

// 3. Admin
struct Admin {
    int id;
    char name[20];
    float salary;
    float allowance;
};

// 4. HR
struct HR {
    int id;
    char name[20];
    float salary;
    float commission;
};

// 5. SalesManager
struct SalesManager {
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
};

// 6. Date
struct Date {
    int day, month, year;
};

// 7. Time
struct Time {
    int hour, min, sec;
};

// 8. Distance
struct Distance {
    int feet, inch;
};

// 9. Complex
struct Complex {
    int real, imaginary;
};

// 10. Product
struct Product {
    int id;
    char name[20];
    int quantity;
    float price;
};


// 🔹 Pass by Value (Student)
void storeStudent(struct Student s) {
    printf("\nEnter Roll No: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\nName: %s\nMarks: %.2f\n",
           s.rollNo, s.name, s.marks);
}

// 🔹 Pass One Structure by Address (Employee)
void storeEmployee(struct Employee *e) {
    printf("\nEnter Employee ID: ");
    scanf("%d", &e->id);
    printf("Enter Name: ");
    scanf("%s", e->name);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

void displayEmployee(struct Employee *e) {
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n",
           e->id, e->name, e->salary);
}

// 🔹 Pass Array of Structure (Product)
void storeProduct(struct Product p[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter Product %d Details\n", i + 1);
        printf("ID: ");
        scanf("%d", &p[i].id);
        printf("Name: ");
        scanf("%s", p[i].name);
        printf("Quantity: ");
        scanf("%d", &p[i].quantity);
        printf("Price: ");
        scanf("%f", &p[i].price);
    }
}

void displayProduct(struct Product p[], int n) {
    printf("\n--- Product Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",
               p[i].id, p[i].name,
               p[i].quantity, p[i].price);
    }
}


void main() {

    // Pass by Value
    struct Student s1;
    storeStudent(s1);

    // Pass by Address (Single Structure)
    struct Employee e1;
    storeEmployee(&e1);
    displayEmployee(&e1);

    // Pass by Address (Array of Structure)
    int n = 2;
    struct Product p[2];

    storeProduct(p, n);
    displayProduct(p, n);

}