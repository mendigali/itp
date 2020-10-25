#include <iostream>
using namespace std;
/**
 * this function creates one line of a chessboard
 * it takes 3 parameters: pointer to char array,
 * length of a line and bool variable which 
 * tells from which symbols should line start
 */
void generateLine(char *line, int M, bool dot) {
    for (int i = 0; i < M; i++) {
        if (dot)
            *(line + i) = '.';
        else
            *(line + i) = 'X';
        dot = !dot;
    }
}
/**
 * this function makes chessboard of given
 * width and lenghth
 */
void generateChessboard(int N, int M) {
    /**
     * if dot = true, then line starts with .
     * if dot = false, starts with X
     * 
     * if number of lines is odd, then 
     * we must start with .
     * otherwise start with X
     */
    bool dot = (N % 2 == 1);
    // this loop indicates lines
    for (int i = 0; i < N; i++) {
        // this array will store elements\
        of single line
        char *line = new char[M];
        // call function which generates\
        one line
        generateLine(line, M, dot);
        // print line
        for (int j = 0; j < M; j++)
            cout << *(line + j);
        cout << endl;
        // next line will be opposite of\
        current line, so change dot
        dot = !dot;
        // delete printed line from memory
        delete[] line;
    }
}
int main() {
    int N, M;
    cin >> N >> M;
    generateChessboard(N, M);
    return 0;
}