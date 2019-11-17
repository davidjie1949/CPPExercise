#include "calculators.h"

int apple = 5;

///////////////////////////////////////////
double addition (double num1, double num2){
    return num1 + num2;
}

double subtraction (double num1, double num2){
    return num1 - num2;
}

double multiplication (double num1, double num2){
    return num1 * num2;
}

double division (double num1, double num2){
    if (num2 == 0){
        cout << "denominator cannot be zero" << endl;
    }
    else {
    }
    return num1 / num2;
}
///////////////////////////////////////////
int add ( int a , int b){
    return (a + b );
}

int add (int a, int b, int c){
    return ( a + b + c );
}

///////////////////////////////////////////
string CStudent::getName(){
    return name;
}

string CStudent::getNum(){
    return stuNum;
}

float CStudent::getScore(){
    return mathScore;
}
///////////////////////////////////////////
void Flower::setNumber(int number){
    cnumber = number;
}

void Flower::setOrder (int order){
    corder = order;
}

int Flower::getNumber(){
    return cnumber;
}

int Flower::getOrder(){
    return corder;
}
///////////////////////////////////////////

//void swap(int* p1, int* p2){
//    int temp;
//    temp = *p1;
//    *p1 = *p2;
//    *p2 = temp;
//}

void swap(int& ref1, int& ref2){
    int temp;
    temp = ref1;
     ref1 = ref2;
     ref2 = temp;
}
