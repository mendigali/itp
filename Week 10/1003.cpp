#include <iostream>
#include <algorithm>
using namespace std;
struct Student {
    int ID;
    char* surname;
    double grade;
};
bool compStudents(Student a, Student b) {
    if (a.grade == b.grade){
        return (a.ID < b.ID);
    }
    return (a.grade > b.grade);
}
int main() {
    int n;
    cin >> n;
    Student* student = new Student[n];
    for (int i = 0; i < n; i++) {
        char* surname = new char[105];
        cin >> student[i].ID >> surname >> student[i].grade;
        student[i].surname = surname;
    }
    sort(student, student+n, compStudents);
    cout << student[0].ID << ' ' << student[0].surname << ' ' << student[0].grade;
    for (int i = 0; i < n; i++){
        delete[] student[i].surname;
    }
    delete[] student;
    return 0;
}