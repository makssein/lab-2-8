#pragma once
#include <iostream>

class Matrix{
    public:
        Matrix(int n, int m);
        Matrix(const Matrix& mat);
        Matrix& operator=(const Matrix& mat);
        Matrix operator+(const Matrix& mat);
        Matrix operator+=(const Matrix& mat);
        Matrix operator*(const Matrix& mat);
        Matrix operator-(const Matrix& mat);
        Matrix operator-=(const Matrix& mat);
        Matrix transposition();
        int determinant();
        Matrix inverse();
        ~Matrix();

    friend std::istream& operator>>(std::istream& os, Matrix& mat);
    friend std::ostream& operator<<(std::ostream& os, const Matrix& mat);

    private:
        int m_n, m_m;
        double** m_mat;
};





