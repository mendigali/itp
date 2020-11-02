#include <iostream>
#include <algorithm>
using namespace std;
struct Student {
    int ID;
    double grade;
};
bool compStudents(Student a, Student b) {
    if (a.grade == b.grade)
        return (a.ID < b.ID);
    return (a.grade > b.grade);
}
int main() {
    int n;
    cin >> n;
    Student* student = new Student[n];
    for (int i = 0; i < n; i++) {
        cin >> student[i].ID >> student[i].grade;
    }
    sort(student, student+n, compStudents);
    for (int i = 0; i < n; i++)
        cout << student[i].ID << ' ' << student[i].grade << endl;
    delete[] student;
    return 0;
}