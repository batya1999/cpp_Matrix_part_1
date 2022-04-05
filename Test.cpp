#include "doctest.h"
#include "Matrix.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
using namespace zich;

TEST_CASE("different dimentions - should throw exception"){
    
    std::vector<double> identitya = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arra = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    std::vector<double> identityb = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};
    std::vector<double> arrb = {3,0,0,0,0,3,0,0,0,0,3,0,0,0,0,3};
    Matrix a{identitya, 3, 3}; 
    Matrix b{arra, 3, 3}; 
    Matrix c{identityb, 4, 4};
    Matrix d {arrb, 4, 4};
    CHECK_THROWS(a+c);
    CHECK_THROWS(a-c);
    CHECK_THROWS(a-d);
    CHECK_THROWS(d-a);
    CHECK_THROWS(a+d);
    CHECK_THROWS(b+c);
    CHECK_THROWS(d+b);
}
TEST_CASE("wrong comperisons - should through FALSE"){
    
    std::vector<double> identitya = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arra = {4, 0, 0, 0, 4, 0, 0, 0, 4};
    std::vector<double> identityb = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};
    std::vector<double> arrb = {8,0,0,0,0,8,0,0,0,0,8,0,0,0,0,8};
    Matrix a{identitya, 3, 3}; 
    Matrix b{arra, 3, 3}; 
    Matrix c{identityb, 4, 4};
    Matrix d {arrb, 4, 4};
    CHECK_FALSE(a==c);
    CHECK_FALSE(c<a);
    CHECK_FALSE(c<=a);
    CHECK_FALSE(b==c);
    CHECK_FALSE(b>c);
    CHECK_FALSE(b>=c);
    CHECK_FALSE(a==d);
    CHECK_FALSE(a>=d);
    CHECK_FALSE(d>c);
    CHECK_FALSE(d<c);
    
    
}
TEST_CASE("not equals - should through NE_EXEPTION"){
    
    std::vector<double> identitya = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arra = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    std::vector<double> identityb = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};
    std::vector<double> arrb = {3,0,0,0,0,3,0,0,0,0,3,0,0,0,0,3};
    Matrix a{identitya, 3, 3}; 
    Matrix b{arra, 3, 3}; 
    Matrix c{identityb, 4, 4};
    Matrix d {arrb, 4, 4};
    CHECK_NE(a,b);
    CHECK_NE(a,c);
    CHECK_NE(a,d);
    CHECK_NE(b,c);
    CHECK_NE(b,d);

}
TEST_CASE("equals - should through TRUE"){
    std::vector<double> identitya = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arra = {4, 0, 0, 0, 4, 0, 0, 0, 4};
    std::vector<double> identityb = {4,0,0,0,0,4,0,0,0,0,4,0,0,0,0,4};
    std::vector<double> arrb = {8,0,0,0,0,8,0,0,0,0,8,0,0,0,0,8};
    Matrix a{identitya, 3, 3}; 
    Matrix b{arra, 3, 3}; 
    Matrix c{identityb, 4, 4};
    Matrix d {arrb, 4, 4};
    CHECK(a==a);
    // d-=c;
    // CHECK(d==c);

}
