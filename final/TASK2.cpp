#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct Student
{
    int id;
    string name;
    int grade;
};
struct Subject
{
    int id;
    string name;
    int num_of_stud;
    Student* students;
};
// Function for comparing pairs by their second element
bool cmpPairs(pair<int, int> &a, pair<int, int> &b) 
{
    return a.second < b.second; 
}
int main()
{
    int n;
    cin >> n;
    // Structure of subjects
    Subject* subj = new Subject[n];
    /*
     * This vector pair array will store id of subject
     * and student score for that subject
     */
    vector< pair<int, int> > subid_grade;
    for (int i = 0; i < n; i++)
    {
        // input information about subject
        cin >> subj[i].id
            >> subj[i].name
            >> subj[i].num_of_stud;
        // allocate memory for number of students in the subject
        subj[i].students = new Student[subj[i].num_of_stud];
        for (int j = 0; j < subj[i].num_of_stud; j++)
        {
            // input information about each student
            cin >> subj[i].students[j].id
                >> subj[i].students[j].name
                >> subj[i].students[j].grade;
        }
    }
    // name of the student and range of 
    // grades that he/she get
    string stud_name, range;
    cin >> stud_name >> range;
    // converting grades range from string with format xxx-yyy
    // to 2 separate integers
    int dash_pos = range.find('-');
    int from = stoi(range.substr(0, dash_pos));
    int to = stoi(range.substr(dash_pos+1));
    // add subject id and grade to vector pair
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < subj[i].num_of_stud; j++)
        {
            // if condition is true then add subject id and student grade
            if (subj[i].students[j].name == stud_name && subj[i].students[j].grade >= from && subj[i].students[j].grade <= to)
            {
                subid_grade.push_back(make_pair(subj[i].id, subj[i].students[j].grade));
            }
        }
    }
    // sort pairs by grade
    sort(subid_grade.begin(), subid_grade.end(), cmpPairs);
    for (auto it : subid_grade)
    {
        // search for subject with particular id
        for (int i = 0; i < n; i++)
            if (subj[i].id == it.first)
            {
                // print the result
                cout << subj[i].id << ' '  << subj[i].name << endl;
            }
    }
    // clear memory
    for (int i = 0; i < n; i++)
    {
        delete[] subj[i].students;
    }
    delete[] subj;
    return 0;
}