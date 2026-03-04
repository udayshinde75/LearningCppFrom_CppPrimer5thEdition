#include <iostream>
#include <cstring>

using namespace std;

struct Student
{
    int id;
    char* name;   
    float marks;
};

// Function 1: Create student dynamically
Student* createStudent(int id, const char* name, float marks)
{
    Student* s = new Student;  // allocate struct

    s->id = id;

    // allocate memory for name
    s->name = new char[strlen(name) + 1];
    strcpy(s->name, name);

    s->marks = marks;

    return s;  
}

// Function 2: Modify using reference
void updateMarks(Student& s, float newMarks)
{
    s.marks = newMarks;
}

// Function 3: Swap using pointers
void swapStudents(Student* &a, Student* &b)
{
    Student* temp = a;
    a = b;
    b = temp;
}

// Function 4: Print using pointer
void printStudent(const Student* s)
{
    cout << "ID: " << s->id << endl;
    cout << "Name: " << s->name << endl;
    cout << "Marks: " << s->marks << endl;
    cout << "-------------" << endl;
}

// Function 5: Free memory
void deleteStudent(Student* &s)
{
    delete[] s->name;
    delete s;
    s = nullptr;  // prevent dangling pointer
}

int main()
{
    Student* s1 = createStudent(1, "Alice", 85.5);
    Student* s2 = createStudent(2, "Bob", 72.0);

    cout << "Before update:\n";
    printStudent(s1);
    printStudent(s2);

    updateMarks(*s1, 90.0);  // reference used here

    cout << "After updating Alice:\n";
    printStudent(s1);

    swapStudents(s1, s2);

    cout << "After swapping pointers:\n";
    printStudent(s1);
    printStudent(s2);

    deleteStudent(s1);
    deleteStudent(s2);

    return 0;
}