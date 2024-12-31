#include <iostream>

using namespace std;

void printPattern(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                cout << "X";
            } else if (i < j && i + j < N - 1) {
                cout << "/";
            } else if (i > j && i + j > N - 1) {
                cout << "\\";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int N;
   
    cin >> N;

    if (N % 2 == 0 || N < 1 || N > 20) {
        
        return 1; // Exit with an error code
    }

    printPattern(N);

    return 0;
}
