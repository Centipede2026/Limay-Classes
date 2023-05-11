#include <bits/stdc++.h>
#include <stdlib.h>
#define ll long long int
using namespace std;

class Matrix
{
    int x[3][3];

public:
    Matrix();
    Matrix(Matrix &);
    ~Matrix()
    {
        // Destructor
    }
    friend istream &operator>>(istream &, Matrix &);
    friend ostream &operator<<(ostream &, Matrix &);
    Matrix operator+(Matrix &);
    Matrix operator-(Matrix &);
    Matrix operator*(Matrix &);
    void operator-();
};
Matrix::Matrix(Matrix &t)
{
    // int i,j;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x[i][j] = t.x[i][j];
        }
    }
}
istream &operator>>(istream &kin, Matrix &t)
{
    cout << "\n MATRIX DATA \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            kin >> t.x[i][j];
        }
    }
        return kin;
}
Matrix Matrix ::operator+(Matrix &t)
{
    Matrix p;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p.x[i][j] = x[i][j] + t.x[i][j];
        }
    }
    return p;
}
Matrix Matrix ::operator-(Matrix &t)
{
    Matrix p;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p.x[i][j] = x[i][j] - t.x[i][j];
        }
    }
    return p;
}
Matrix Matrix ::operator*(Matrix &t)
{
    Matrix p;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                p.x[i][j] += (x[i][k] * t.x[k][j]);
            }
        }
    }
    return p;
}
void Matrix ::operator-()
{
    int tmp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            tmp = x[i][j];
            x[i][j] = tmp;
        }
    }
}
ostream &operator<<(ostream &kout, Matrix &t)
{
    kout << "\n Matrix Data |\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            kout << " " << t.x[i][j];
            kout << "\n";
        }
    }
        return kout;
}
int main()
{
    Matrix a, b, c;
    cin >> a >> b;
    c = a + b;
    cout << a << b << c;
    -c;
    cout << c;
    return 0;
}
