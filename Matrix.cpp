#include <iostream>
#include <fstream>
#include "Matrix.hpp"
using namespace std;
// using namespace zich;
namespace zich{
    

    ostream& operator<<(ostream& out, const Matrix& a){
        return out;
    }
    istream& operator>>(istream& in, Matrix& a){
        return in;
    }
    Matrix operator+(const Matrix& a, const Matrix& b) {
        return a;
    }
    Matrix operator+(const Matrix& a, double b) {
        return a;
    }
    Matrix operator+=(Matrix& a, const Matrix& b) {
        return a;
    }
    Matrix operator-(const Matrix& a, const Matrix& b) {
        return a;
    }
    Matrix operator-(const Matrix& a) {
        return a;
    }
    Matrix operator-=(Matrix& a, const Matrix& b) {
        return a;
    }
    Matrix operator++(Matrix& a) {
        return a;
    }
    Matrix operator++(Matrix& a, int) {
        return a;
    }
    Matrix operator--(Matrix& a) {
        return a;
    }
    Matrix operator--(Matrix& a, int) {
        return a;
    }
    Matrix operator*(Matrix& a, double b) {
        return a;
    }
    Matrix operator*(Matrix& a, Matrix& b){
        return a;
    }
    Matrix operator*(double a, Matrix& b) {
        return b;
    }
    Matrix operator*=(Matrix& a, double b) {
        return a;
    }
    Matrix operator*=(double a, Matrix& b) {
        return b;
    }
    bool operator>(const Matrix& a, const Matrix& b){
        return true;
    }
    bool operator>=(const Matrix& a, const Matrix& b){
        return true;
    }
    bool operator<(const Matrix& a, const Matrix& b){
        return true;
    }
    bool operator<=(const Matrix& a, const Matrix& b){
        return true;
    }
    bool operator==(const Matrix& a, const Matrix& b){
        return true;
    }
    bool operator!=(const Matrix& a, const Matrix& b){
        return true;
    }
}