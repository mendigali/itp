#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_N = 1e4 + 5;
struct Student
{
    int ID;
    char *Name;
    char *Surname;
    int Subject1;
    int Subject2;
    int Subject3;
    int SelectedSubject;
    bool SpecialCase;
};
Student *get(int &n)
{
    Student *student = new Student[n];
    for (int i = 0; i < n; i++)
    {
        int ID;
        char *Name = new char[MAX_N];
        char *Surname = new char[MAX_N];
        int Subject1;
        int Subject2;
        int Subject3;
        int SelectedSubject;
        string SpecialCase;
        cin >> ID >> Name >> Surname >> Subject1 >> Subject2 >> Subject3 >> SelectedSubject >> SpecialCase;
        student[i] = {
            ID,
            Name,
            Surname,
            Subject1,
            Subject2,
            Subject3,
            SelectedSubject,
            (SpecialCase == "YES" ? true : false)};
    }
    return student;
}
bool compPoints(Student a, Student b)
{
    int totalA = a.Subject1 + a.Subject2 + a.Subject3 + a.SelectedSubject;
    int totalB = b.Subject1 + b.Subject2 + b.Subject3 + b.SelectedSubject;
    if (totalA != totalB)
        return (totalA > totalB);
    if (a.SelectedSubject != b.SelectedSubject)
        return (a.SelectedSubject > b.SelectedSubject);
    return (a.ID < b.ID);
}
bool compSpecials(Student a, Student b)
{
    if (!a.SpecialCase || b.SpecialCase)
        return false;
    if (a.SpecialCase || !b.SpecialCase)
        return true;
    return (a.ID < b.ID);
}
void print(Student *student, int &n)
{
    for (int i = 0; i < n; i++)
    {
        int total = student[i].SelectedSubject;
        total += student[i].Subject1 + student[i].Subject2 + student[i].Subject3;
        cout << student[i].ID << ' '
             << student[i].Name << ' '
             << student[i].Surname << ' '
             << total << endl;
    }
}
void clearMemory(Student *student, int &n)
{
    for (int i = 0; i < n; i++)
    {
        delete[] student[i].Name;
        delete[] student[i].Surname;
    }
    delete[] student;
}
int main()
{
    int n, m;
    cin >> n >> m;
    Student *student = get(n);
    sort(student, student + n, compPoints);
    sort(student, student + n, compSpecials);
    sort(student, student + m, compPoints);
    print(student, m);
    clearMemory(student, n);
    return 0;
}