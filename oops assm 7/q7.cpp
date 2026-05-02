#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    void input() {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    Matrix operator+(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];
        return temp;
    }

    Matrix operator*(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                temp.a[i][j] = 0;
                for (int k = 0; k < 2; k++)
                    temp.a[i][j] += a[i][k] * m.a[k][j];
            }
        }
        return temp;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2, sum, mul;

    m1.input();
    m2.input();

    sum = m1 + m2;
    mul = m1 * m2;

    sum.display();
    mul.display();

    return 0;
}