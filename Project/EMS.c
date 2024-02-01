#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_DEPT_LENGTH 100
#define MAX_DESIGNATION_LENGTH 100
#define MAX_PASSWORD_LENGTH 30
#define MAX_DATE 20

struct Employee {
  int ID;
  int Age;
  char Name[MAX_NAME_LENGTH];
  float Salary;
  char Department[MAX_DEPT_LENGTH];
  char Designation[MAX_DESIGNATION_LENGTH];
  char dateOfJoining[MAX_DATE];
  bool Attendance;
  char Password[MAX_PASSWORD_LENGTH];
  int loginCount;
};

/******************** FUNCTIONS DECLARATION ********************/

void addEmployee();
void deleteEmployee();
void displayAllEmployees();
void displayEmployeeByDept();
void searchEmployeeByID();
void searchEmployeeByName();
void sortEmployeeBySalary();
void sortEmployeeByAge();
void sortEmployeeByID();
void login();
void updateEmployee();
void calculateLeave();
void fetchSalaryByName();
void fetchSalaryByID();
void deduceSalary();
void displayPayroll();
void groupEmployeesByDesignation();
void groupEmployeesByGender();
void updateLogin();
// Functions By RAJ
void mainOperations();
void updateDetailsBasedOnCondition(int);
void askDetailsToAddEmployee();
void askUserToUpdateDetails();
void askUserToDisplayEmployeeDetails();

void searchEmployeeDetailsBasedOnCondition();

struct Employee *employees = NULL;
int numEmployees = 0;

/******************** OPERATIONS INVOLVED ********************/

/*

  ************ TITLE : EMPLOYEE MANAGEMENT SYSTEM ******************

-> A software facilitating efficient employee record management.
-> It allows the user to do the following operations :

            Basic Operations :
              # Add an employee
              # Delete an employee
              # Update an Employee details
              # Display all employees

            Searching :
              # Search by name
              # Search by ID


            Grouping:

              # Display an employee details based on their designation


            Calculation :
              # calculate login count
              # Display the payroll of all employee's salary of a month

            Other Operations :
              # Fetch salary of an Employee using name
              # Fetch Salary of an Employee using ID



*/

/*******************  PROJECT PROTOTYPE  *************************/

/*

PROTOTYPE :

WELCOME TO EMPLOYEE MANAGEMENT SYSTEM

Please select your desired operation :

1 - Add an employee
2 - Delete an employee
3 - Update an Employee details
4 - Display employees
5 - Search Employee Details
6 - Login

**** When the user selects the operation, the system will call the respective
function ****

When operation = 1 :

        Please Enter the Employee Details

        Employee ID :
        Employee Password :
        Employee Name :
        Employee Age :
        Employee's Date of joining :
        Employee's Department :
        Employee's Designation :
        Employee's Salary :

        The Employee has been added successfully.

When Operation = 2 :

        Please Enter the Employee ID to be deleted :

        The Employee details has been deleted successfully.

When Operation = 3 :

        Please select the attribute to be updated !

        1 - Employee ID
        2 - Employee Name
        3 - Employee Age
        4 - Employee's Department
        5 - Employee's Designation
        6 - Employee's Salary

When Operation = 4 :

        Please choose your desired type of display :

        1 - Display all employees
        2 - Display an employee details based on their salary
        3 - Display an employee details based on their age
        4 - Display an employee details based on their ID
        5 - Display an employee details based on their designation
        6 - Display the payroll of all employee's salary of a month

When Operation = 5 :

        Please select your desired type of search :

        1 - Search by name
        2 - Search by ID
        3 - Search an Employee's Salary based on their name
        4 - Search an Employees's Salary based on their ID

When Operation = 6:

        Please Enter your ID :

        You have been successfully logged in !

*/
/********************  GLOBAL DECLARATIONS  ********************/

// Declare the global variables here !

/********************** FUNCTION DEFINITIONS  ***********************/

// WRITE YOUR FUNCTIONS HERE

// ------------------------------------------------------------------------------------------------------
// void addInitialEmployees() {
//   // Array of initial employee details
//   struct Employee initialEmployees[] = {
//       {1, 21, "Adam Samuel", 45000, "HR", "Manager", "12/03/2005"},
//       {2, 22, "Will Smith", 34000, "IT", "Software engineer", "18/01/2005"},
//       {3, 25, "Shah Rukh Khan", 55000, "Marketing", "Brand Manager",
//        "29/02/2006"},
//       {4, 24, "James Stewart", 50000, "Finance", "Accountant", "23/10/2007"},
//       {5, 21, "Anthony Hopkins", 45000, "Operations", "Operations Analyst",
//        "12/07/2004"},
//       {6, 27, "Johnny Depp", 60000, "PM", "Product Analyst", "23/04/2006"},
//       {7, 28, "Marlon Brando", 53000, "Sales", "Account Manager",
//       "05/03/2006"}, {8, 32, "Tom Hank", 40000, "Legal", "Paralegal",
//       "12/04/2003"}, {9, 23, "Charlie Chaplin", 60000, "CS", "Customer
//       Analyst", "10/09/2005"}, {10, 34, "Jack Nicholson", 48000,
//       "Administrative", "Office Manager",
//        "21/03/2000"}};

//   // Calculate the number of initial employees
//   int numInitialEmployees = 9;

//       // Allocate memory for the initial employees
//       employees = malloc(numInitialEmployees * sizeof(struct Employee));

//   if (employees == NULL) {
//     employees = malloc(numInitialEmployees * sizeof(struct Employee));

//     if (employees == NULL) {
//       printf("Memory allocation failed!\n");
//       return;
//     }

//     // Copy initial employee details
//     for (int i = 0; i < numInitialEmployees; ++i) {
//       employees[i] = initialEmployees[i];
//     }

//     // Update the number of employees
//     numEmployees = numInitialEmployees;
//   }
// }
//----------------------------------------------------------------------------------------
void mainOperations() {

  /*         *************** mainOperations()****************

          ---> Function to ask the user what operation to be performed
          ---> This function will be called in the main function
          ---> It had no input arguments and no return type
  */

  printf("\n\nPlease select your desired operation:\n\n\n");
  printf("1 - Add an employee\n");
  printf("2 - Delete an employee\n");
  printf("3 - Update an Employee details\n");
  printf("4 - Display employees\n");
  printf("5 - Search Employee Details\n");
  printf("6 - Login\n");
  printf("7 - Exit\n");
}

// ------------------------------------------------------------------------------------------------------

int checkLogin(int id, char password[]) {
  char currentPassword[MAX_PASSWORD_LENGTH];
  for (int i = 0; i < numEmployees; i++) {
    if (employees[i].ID == id) {
      strcpy(currentPassword, employees[i].Password);
    }
  }
  if (strcmp(currentPassword, password) == NULL) {
    return true;
  }
  return false;
}

// ------------------------------------------------------------------------------------------------------

void askDetailsToAddEmployee() {
  /*         *************** askDetailsToAddEmployee()****************

          ---> Function to ask a new user details to add them into the structure
          ---> This function will be called in the main function
          ---> It had no input arguments and no return type
  */
  // Number of employees entered by the user
  int capacity = 1; // Initial capacity of the array
  if (employees == NULL) {
    employees = malloc(capacity * sizeof(struct Employee));

    if (employees == NULL) {
      printf("Memory allocation failed!\n");
      return;
    }
  }

  char choice;
  do {

    printf("Adding an employee...\n");

    printf("Enter details for Employee %d:\n", numEmployees + 1);
    printf("Employee ID : ");
    scanf("%d", &employees[numEmployees].ID);

    printf("Employee Password : ");
    scanf("%s", employees[numEmployees].Password);

    printf("Employee Name : ");
    scanf("%s", employees[numEmployees].Name);

    printf("Employee Age : ");
    scanf("%d", &employees[numEmployees].Age);

    printf("Employee Date of Joining : ");
    scanf("%s", employees[numEmployees].dateOfJoining);

    printf("Employee Department : ");
    scanf("%s", employees[numEmployees].Department);

    printf("Employee Designation : ");
    scanf("%s", employees[numEmployees].Designation);

    printf("Employee Salary : ");
    scanf("%f", &employees[numEmployees].Salary);

    numEmployees++;

    printf("Do you want to enter details for another employee? (y/n): ");
    scanf(" %c", &choice);

    if (numEmployees >= capacity) {
      capacity *= 2;
      employees = realloc(employees, capacity * sizeof(struct Employee));

      if (employees == NULL) {
        printf("Memory reallocation failed!\n");
        return;
      }
    }

  } while (choice == 'y' || choice == 'Y');
}

// Function to find the index of an employee by ID
int findEmployeeIndexByID(int employeeID) {
  for (int i = 0; i < numEmployees; ++i) {
    if (employees[i].ID == employeeID) {
      return i; // Found the employee, return the index
    }
  }
  return -1; // Employee not found
}

// Function to shift the array elements to fill the gap when deleting an
// employee
void shiftArrayElements(int index) {
  for (int i = index; i < numEmployees - 1; ++i) {
    employees[i] = employees[i + 1];
  }
}

void deleteEmployee(int employeeID) {
  int index = findEmployeeIndexByID(employeeID);

  if (index != -1) {
    // Employee found, delete the employee
    shiftArrayElements(index);
    numEmployees--;
    printf("Employee with ID %d has been deleted successfully.\n", employeeID);
  } else {
    printf("Employee with ID %d not found.\n", employeeID);
  }
}

void freeEmployeeMemory() {
  free(employees);
  employees = NULL;
  numEmployees = 0;
}

// ------------------------------------------------------------------------------------------------------
void updateEmployee() {
  int employeeID;
  printf("Enter the Employee ID to update details: ");
  scanf("%d", &employeeID);

  int index = -1;
  // Find the index of the employee with the given ID
  for (int i = 0; i < numEmployees; ++i) {
    if (employees[i].ID == employeeID) {
      index = i;
      break;
    }
  }

  if (index != -1) {
    int option;
    printf("Enter updated details for Employee ID %d:\n", employeeID);

    printf("1 - Employee ID\n");
    printf("2 - Employee Name\n");
    printf("3 - Employee Age\n");
    printf("4 - Employee's Department\n");
    printf("5 - Employee's Designation\n");
    printf("6 - Employee's Salary\n");

    printf("\n\n\nPlease select the attribute to be updated!");
    scanf("%d", &option);
    // Update specific details of the employee
    switch (option) {

    case 1:
      printf("Enter the new Employee ID: ");
      scanf("%d", &employees[index].ID);
      break;

    case 2:
      printf("Enter the new Employee Name: ");
      scanf("%s", employees[index].Name);
      break;

    case 3:
      printf("Enter the new Employee Age: ");
      scanf("%d", &employees[index].Age);
      break;

    case 4:
      printf("Enter the new Employee's Department: ");
      scanf("%s", employees[index].Department);
      break;

    case 5:
      printf("Enter the new Employee's Designation: ");
      scanf("%s", employees[index].Designation);
      break;

    case 6:
      printf("Enter the new Employee's Salary: ");
      scanf("%f", &employees[index].Salary);
      break;

    default:
      printf("Invalid number");
      break;
    }
    printf("Employee details updated successfully for ID %d.\n", employeeID);
  } else {
    printf("Employee with ID %d not found.\n", employeeID);
  }
}

void calculatePayroll() {
  float totalSalary;
  for (int i = 0; i < numEmployees; i++) {
    totalSalary += employees[i].Salary;
  }
  printf("The payroll of the company is: %.2f\n", totalSalary);
}

//--------------------------------------------------------------------------------
void askUserToDisplayEmployeeDetails() {
  int option, currentSalary, currentAge, currentId;
  char currentDesignation[100];
  /*         ** askUserToDisplayEmployeeDetails()***

          ---> Function to ask the user what detail to be displayed
          ---> This function will be called in the main function
          ---> It had no input arguments and no return type
  */

  printf("1 - Display all employees\n");
  printf("2 - Display employee details based on their salary range\n");
  printf("3 - Display employee details based on their age\n");
  printf("4 - Display employee details based on their ID\n");
  printf("5 - Display employee details based on their designation\n");
  printf("6 - Display the payroll of all employee's salary of a month\n");

  printf("\n\n\nPlease choose your desired type of display:");
  scanf("%d", &option);
  switch (option) {
  case 1:
    // Display details of all employees
    printf("\nDetails of all employees in a table format:\n");
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    printf("| %-10s | %-20s | %-5s | %-15s | %-20s | %-20s | %-10s |\n",
           "EmployeeID", "Name", "Age", "Date of Joining", "Department",
           "Designation", "Salary");
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");

    for (int i = 0; i < numEmployees; ++i) {
      printf("| %-10d | %-20s | %-5d | %-15s | %-20s | %-20s | %-10.2f |\n",
             employees[i].ID, employees[i].Name, employees[i].Age,
             employees[i].dateOfJoining, employees[i].Department,
             employees[i].Designation, employees[i].Salary);
    }
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    break;
  case 2:
    printf("Enter your salary range : ");
    scanf("%d ", &currentSalary);
    printf("\nEmployees with salary of %d are :\n", currentSalary);
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    printf("| %-10s | %-20s | %-5s | %-15s | %-20s | %-20s | %-10s |\n",
           "EmployeeID", "Name", "Age", "Date of Joining", "Department",
           "Designation", "Salary");
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    for (int i = 0; i < numEmployees; ++i) {
      if (employees[i].Salary == currentSalary) {
        printf("| %-10d | %-20s | %-5d | %-15s | %-20s | %-20s | %-10.2f |\n",
               employees[i].ID, employees[i].Name, employees[i].Age,
               employees[i].dateOfJoining, employees[i].Department,
               employees[i].Designation, employees[i].Salary);
      }
    }
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    break;
  case 3:
    printf("Enter your age:");
    scanf("%d", &currentAge);
    printf("\nEmployees with age of %d are :\n", currentAge);
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    printf("| %-10s | %-20s | %-5s | %-15s | %-20s | %-20s | %-10s |\n",
           "EmployeeID", "Name", "Age", "Date of Joining", "Department",
           "Designation", "Salary");
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    for (int i = 0; i < numEmployees; i++) {
      if (employees[i].Age == currentAge) {
        printf("| %-10d | %-20s | %-5d | %-15s | %-20s | %-20s | %-10.2f |\n",
               employees[i].ID, employees[i].Name, employees[i].Age,
               employees[i].dateOfJoining, employees[i].Department,
               employees[i].Designation, employees[i].Salary);
      }
    }
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    break;
  case 4:
    printf("Enter your Id:");
    scanf("%d", &currentId);

    printf("\nEmployees with Id of %d are :\n", currentId);

    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    printf("| %-10s | %-20s | %-5s | %-15s | %-20s | %-20s | %-10s |\n",
           "EmployeeID", "Name", "Age", "Date of Joining", "Department",
           "Designation", "Salary");
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");

    for (int i = 0; i < numEmployees; i++) {
      if (employees[i].ID == currentId) {
        printf("| %-10d | %-20s | %-5d | %-15s | %-20s | %-20s | %-10.2f |\n",
               employees[i].ID, employees[i].Name, employees[i].Age,
               employees[i].dateOfJoining, employees[i].Department,
               employees[i].Designation, employees[i].Salary);
      }
    }
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    break;
  case 5:
    printf("Enter your designation:");
    scanf("%s", &currentDesignation);
    printf("\nEmployees with designation of %s are :\n", currentDesignation);
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    printf("| %-10s | %-20s | %-5s | %-15s | %-20s | %-20s | %-10s |\n",
           "EmployeeID", "Name", "Age", "Date of Joining", "Department",
           "Designation", "Salary");
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");
    for (int i = 0; i < numEmployees; i++) {
      if (strcmp(employees[i].Designation, currentDesignation) == NULL) {
        printf("| %-10d | %-20s | %-5d | %-15s | %-20s | %-20s | %-10.2f |\n",
               employees[i].ID, employees[i].Name, employees[i].Age,
               employees[i].dateOfJoining, employees[i].Department,
               employees[i].Designation, employees[i].Salary);
      }
    }
    printf("-------------------------------------------------------------------"
           "-------------------------------------------------------\n");

    break;

  case 6:
    calculatePayroll();
  default:
    printf("Invalid number");
    break;
  }
}
// ------------------------------------------------------------------------------------------------------
void updateLogin() {
  int currentID;
  char currentPassword[100];

  printf("Please Enter your ID: ");
  scanf("%d", &currentID);

  printf("Enter your password :");
  scanf("%s", currentPassword);

  bool isValidUser = checkLogin(currentID, currentPassword);

  if (isValidUser == true) {
    for (int i = 0; i < numEmployees; i++) {
      if (employees[i].ID == currentID) {
        employees[i].loginCount++;
      }
    }
    printf("You have been successfully logged in!\n");
  } else {
    printf("Invalid User ID. Please try again.\n");
  }
}
// ------------------------------------------------------------------------------------------------------
void fetchSalarybyname() {
  char employeeName[100];
  printf("Enter the Employee Name : ");
  scanf("%s", employeeName);
  for (int i = 0; i < numEmployees; i++) {
    if (strcmp(employees[i].Name, employeeName) == NULL) {
      printf("the salary of the %s is : %f", employeeName, employees[i].Salary);
    }
  }
}

void fetchSalarybyID() {
  int employeeID;
  printf("Enter the Employee ID: ");
  scanf("%d", &employeeID);
  for (int i = 0; i < numEmployees; i++) {
    if (employees[i].ID == employeeID) {
      printf("the salary of the %d is : %f", employeeID, employees[i].Salary);
    }
  }
}

void searchByName() {
  char currentName[100];
  printf("Enter the Employee Name: ");
  scanf("%s", currentName);
  printf("---------------------------------------------------------------------"
         "-----------------------------------------------------\n");
  printf("| %-10s | %-20s | %-5s | %-15s | %-20s | %-20s | %-10s |\n",
         "EmployeeID", "Name", "Age", "Date of Joining", "Department",
         "Designation", "Salary");
  printf("---------------------------------------------------------------------"
         "-----------------------------------------------------\n");
  for (int i = 0; i < numEmployees; i++) {
    if (strcmp(employees[i].Name, currentName) == NULL) {
      printf("| %-10d | %-20s | %-5d | %-15s | %-20s | %-20s | %-10.2f |\n",
             employees[i].ID, employees[i].Name, employees[i].Age,
             employees[i].dateOfJoining, employees[i].Department,
             employees[i].Designation, employees[i].Salary);
    }
  }
  printf("---------------------------------------------------------------------"
         "-----------------------------------------------------\n");
}

void searchByID() {
  int currentID;
  printf("Enter the Employee ID: ");
  scanf("%d", &currentID);
  printf("---------------------------------------------------------------------"
         "-----------------------------------------------------\n");
  printf("| %-10s | %-20s | %-5s | %-15s | %-20s | %-20s | %-10s |\n",
         "EmployeeID", "Name", "Age", "Date of Joining", "Department",
         "Designation", "Salary");
  printf("---------------------------------------------------------------------"
         "-----------------------------------------------------\n");
  for (int i = 0; i < numEmployees; i++) {
    if (employees[i].ID == currentID) {
      printf("| %-10d | %-20s | %-5d | %-15s | %-20s | %-20s | %-10.2f |\n",
             employees[i].ID, employees[i].Name, employees[i].Age,
             employees[i].dateOfJoining, employees[i].Department,
             employees[i].Designation, employees[i].Salary);
    }
  }
  printf("---------------------------------------------------------------------"
         "-----------------------------------------------------\n");
}
// ------------------------------------------------------------------------------------------------------

void searchEmployeeDetailsBasedOnCondition() {
  printf("Searching employee details...\n");
  int searchOption;

  printf("\nPlease select your desired type of search:\n\n\n");
  printf("1 - Search by name\n");
  printf("2 - Search by ID\n");
  printf("3 - Search an Employee's Salary based on their name\n");
  printf("4 - Search an Employee's Salary based on their ID\n\n");
  printf("Enter your choice (1-4): ");
  scanf("%d", &searchOption);

  switch (searchOption) {
  case 1:
    printf("Searching by name...\n");
    searchByName();
    break;
  case 2:
    printf("Searching by ID...\n");
    searchByID();
    break;
  case 3:
    printf("Searching an Employee's Salary based on their name...\n");
    fetchSalarybyname();
    break;
  case 4:
    printf("Searching an Employee's Salary based on their ID...\n");
    fetchSalarybyID();
    break;
  default:
    printf("Invalid option. Please select a valid option (1-4).\n");
    break;
  }
}

// ------------------------------------------------------------------------------------------------------

int main() {
  int option, current_option, displayOption;
  int employeeID;

  // addInitialEmployees();

  printf("\n\n**** WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ****\n\n");
  do {

    mainOperations();

    printf("\n\nEnter your choice: ");
    scanf("%d", &option);

    switch (option) {

      // Adding an Employee
    case 1:
      askDetailsToAddEmployee();

      printf("The Employee has been added successfully.\n\n");
      break;

      // Deleting an Employee
    case 2:

      printf("Deleting an employee...\n");
      printf("Enter the Employee ID to be deleted: ");
      scanf("%d", &employeeID);
      deleteEmployee(employeeID);

      break;

      // Updating Employee Details
    case 3:
      printf("Updating an employee's details...\n");

      updateEmployee();

      break;

      // Displaying Employee's details
    case 4:
      printf("Displaying employees...\n");

      askUserToDisplayEmployeeDetails();

      break;

    // Searching Employee details
    case 5:
      searchEmployeeDetailsBasedOnCondition();
      break;

    // To Login into the Company
    case 6:

      printf("Logging in...\n");
      updateLogin();

      break;

    case 7:
      printf("\n\nThank You for using our Employee Management System!\n");
      return 0;

    default:
      printf("Invalid option. Please enter a valid option.\n");
      break;
    }

  } while (option != 0); // The condition to terminate the infinite loop
                         // Free dynamically allocated memory
  freeEmployeeMemory();
  return 0;
}
