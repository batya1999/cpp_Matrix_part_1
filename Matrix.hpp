#include <vector>
#include <iostream>
using namespace std;
// using namespace zich;
namespace zich{
    class Matrix{
    private:
    std::vector<double> vector;
    int row;
    int column;

    public:
    Matrix(){
                vector={};
                row=0;
                column=0;
            } 
    Matrix(std::vector<double> vector, int row, int column){
                this->vector=vector;
                this->row=row;
                this->column=column;
            } 
            friend Matrix operator+(const Matrix& a, const Matrix& b);
            friend Matrix operator+(const Matrix& a, double b);
            friend Matrix operator+=(Matrix& a, const Matrix& b);
            friend Matrix operator-(const Matrix& a, const Matrix& b);
            friend Matrix operator-(const Matrix& a);
            friend Matrix operator-=(Matrix& a, const Matrix& b);
            friend Matrix operator++(Matrix& a);
            friend Matrix operator++(Matrix& a,int);
            friend Matrix operator--(Matrix& a);
            friend Matrix operator--(Matrix& a,int);
            friend Matrix operator*(Matrix& a, double b);
            friend Matrix operator*(Matrix& a, Matrix& b);
            friend Matrix operator*(double a, Matrix& b);
            friend Matrix operator*=(Matrix& a, double b);
            friend Matrix operator*=(double a, Matrix& b);
            friend bool operator>(const Matrix& a, const Matrix& b);
            friend bool operator>=(const Matrix& a, const Matrix& b);
            friend bool operator<(const Matrix& a, const Matrix& b);
            friend bool operator<=(const Matrix& a, const Matrix& b);
            friend bool operator==(const Matrix& a, const Matrix& b);
            friend bool operator!=(const Matrix& a, const Matrix& b);
            friend ostream& operator<<(ostream& out, const Matrix& a);
            friend istream& operator>>(istream& in, Matrix& a);









    };
}