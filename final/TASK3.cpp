#include <iostream>
#include <string>
using namespace std;
struct Attendance
{
    string lesson;
    string student;
    int t1;
    int t2;
};
// this function converts time from string
// in format like 12:15 to minutes in integer type
int convertTime(string time) {
    int colon_pos = time.find(':');
    int hh = stoi(time.substr(0, colon_pos));
    int mm = stoi(time.substr(colon_pos+1));
    return (hh*60 + mm);
}
int main()
{
    int n;
    cin >> n;
    Attendance* attend = new Attendance[n];
    for (int i = 0; i < n; i++)
    {
        // input data about current attendance
        string l, s, str_t1, str_t2;
        cin >> l
            >> s
            >> str_t1
            >> str_t2;
        // convert both times from string to integer
        int t1 = convertTime(str_t1);
        int t2 = convertTime(str_t2);
        for (int j = 0; j < i; j++)
        {
            // if current student is already inside attendance
            // then check his time for conflicts
            if (attend[j].student == s)
            {
                // check time 
                if ((attend[j].t1 < t1 && attend[j].t2 > t1)
                ||(attend[j].t1 < t2 && attend[j].t2 > t2))
                {
                    // if there is a conflict print student name
                    cout << s << endl;
                }
            }
        }
        // add student to the attendance
        attend[i] = {l, s, t1, t2};
    }
    // clear memory
    delete[] attend;
    return 0;
}