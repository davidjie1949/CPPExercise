#ifndef CALCULATORS_H_INCLUDED
#define CALCULATORS_H_INCLUDED

#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b, T c){
    if(b>a)
        a = b;
    if(c>a)
        a = c;
    return a;
};

extern int apple;

double addition (double num1, double num2);
double subtraction (double num1, double num2);
double multiplication (double num1, double num2);
double division (double num1, double num2);

int add ( int a , int b);
int add (int a, int b, int c);

class CStudent{
    public:
    CStudent (string n = "Jie", string Num = "Yang", float sc = 0)
        : name(n), stuNum(Num), mathScore(sc)
    {
    }

    string getName();
    string getNum();
    float getScore();

    private:
    string name;
    string stuNum;
    float mathScore;
};

class Flower {
    public:
    Flower ( int number = 0, int order = 0)
    : cnumber(number), corder(order)
    {
    }

    void setNumber(int number);
    void setOrder(int order);
    int getNumber();
    int getOrder();

    private:
        int cnumber, corder;
};

//void swap( int*, int* );
void swap(int&, int& );


#endif // CALCULATORS_H_INCLUDED
