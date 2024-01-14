#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
    public:
        void triangle() {
            cout << "I am a triangle\n";
        }
};

class Isosceles : public Triangle{
    public:
        void isosceles() {
            cout << "I am an isosceles triangle\n";
        }
};

class Equilateral : public Isosceles{
    public:
        void equilateral() {
            cout << "I am an equilateral triangle\n";
        }
};

int main() {   
    Equilateral equilateralInstance;
    equilateralInstance.equilateral();
    equilateralInstance.isosceles();
    equilateralInstance.triangle();
    return 0;
}