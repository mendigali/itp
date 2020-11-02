#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string addComment(string line) {
    if (line == "#include <iostream>") {
        return "// library for cin, cout\n";
    }
    if (line == "using namespace std;") {
        return "// write std:: by default\n";
    }
    if (line == "int main() {") {
        return "// initialize main function\n";
    }
    if (line == "    return 0;") {
        return "    // end of the main function\n";
    }
    if (line == "#include <cmath>") {
        return "// library for abs, pow, sqrt\n";
    }
    if (line == "#include <algorithm>") {
        return "// library for min, max, sort\n";
    }
    if (line == "#include <string>") {
        return "// library for string objects\n";
    }
    if (line == "#include <cstring>") {
        return "// library for strcmp, strlen\n";
    }
    if (line == "#include <cctype>") {
        return "// library for isalpha, tolower, toupper\n";
    }
    if (line == "#include <sstream>") {
        return "// library for stringstream\n";
    }
    if (line == "#include <climits>") {
        return "// library for INT_MAX, INT_MIN etc\n";
    }
    if (line == "#include <vector>") {
        return "// library for vector container\n";
    }
    else {
        return "Not found";
    }
}
int main() {
    ofstream answer("W10_Temir_Mendigali_SE-2019_W10.txt");
    answer << "Week 10\n";
    for (int i = 1001; i <= 1012; i++) {
        answer << "===============================\n";
        answer << "Problem " << i << ":\n";
        answer << "===============================\n";
        string flname = "Week 10/" + to_string(i) + ".txt";
        ifstream srccode(flname);
        if (srccode.is_open()) {
            string line;
            while (getline(srccode, line)) {
                string comment = addComment(line);
                if (comment != "Not found") {
                    answer << comment;
                }
                answer << line << '\n';
            }
            answer << '\n';
        }
    }
    return 0;
}