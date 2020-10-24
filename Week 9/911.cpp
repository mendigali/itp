#include <iostream>
using namespace std;
void generateLine(char *line, int M, bool dot) {
    for (int i = 0; i < M; i++) {
        if (dot)
            *(line + i) = '.';
        else
            *(line + i) = 'X';
        dot = !dot;
    }
}
void generateChessboard(int N, int M) {
    bool dot = (N % 2 == 1);
    for (int i = 0; i < N; i++) {
        char *line = new char[M];
        generateLine(line, M, dot);
        for (int j = 0; j < M; j++)
            cout << *(line + j);
        cout << endl;
        dot = !dot;
        delete[] line;
    }
}
int main() {
    int N, M;
    cin >> N >> M;
    generateChessboard(N, M);
    return 0;
}