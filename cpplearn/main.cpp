#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include "calculators.h"

//class student{
//public:
//    student (int g = 0, int s = 0)
//    : grade(g), score(s)
//    {
//    }
//    int getGrade() {
//        return grade;
//    }
//    int getScore() {
//        return score;
//    }
//
//    void print() const {
//        cout << grade << "/" << score << endl;
//    }
//private:
////    const int grade, score; //当遇上了const时候， grade = g; score = s; 就不能用了 因为 变量定义为 const, 需要改用 : grade（g), score(s)
//    int grade, score;
//
//};

//int& sum(){
//    int num = 10;
//    int& rNum = num;
//    return rNum; //返回局部的引用类型变量
//}
//
//int test(){
//    int x = 1;
//    int y = 2;
//}

//void hello( string name, int age )
//{
//    cout << "hello user" << name << "You are " << age << endl;
//}
//
//double cube ( double num )
//{
//    return num*num*num;
//}
//
//int getMax(int num1, int num2)
//{
//
//    if(num1 > num2)
//    {
//        return num1;
//    }
//    else
//    {
//        return num2;
//    }
//}
//
//class Book
//{
//private:
//    string title;
//public:
//    string author;
//    int pages;
//    Book()
//    {
//        title = "no title";
//        author = "no author";
//        pages = 0;
//    }
//    Book(string aTitle, string aAuthor, int aPages)
//    {
//        setTitle (aTitle);
//        author = aAuthor;
//        pages = aPages;
//    }
//
//    void setTitle(string aTitle)
//    {
//        if(aTitle == "G"|| aTitle == "PG" || aTitle == "PG-13" || aTitle == "NR")
//        {
//            title = aTitle;
//        }
//        else
//        {
//            title = "NR";
//        }
//    }
//
//    bool hasHonors()
//    {
//        if (pages >=3)
//        {
//            return true;
//        }
//        return false;
//    }
//
//    string getTitle()
//    {
//        return title;
//    }
//};
//
//class Chef
//{
//
//public:
//    void makeChicken()
//    {
//        cout << "The chef makes chicken" << endl;
//    }
//
//    void makeSalad()
//    {
//        cout << "The chef makes salad" << endl;
//    }
//
//    void makeSpecialDish()
//    {
//        cout << "The chef makes bbq ribs" << endl;
//    }
//};
//
//
//class ItalianChef : public Chef
//{
//public:
//    void makeBeef()
//    {
//        cout << "The chef makes beef" << endl;
//    }
//};
//
//typedef enum Example
//{
//    A,
//    B,
//    C
//};

int AdditionFunction(const vector<int>& v){
    int sum {0};
    vector<int>::const_iterator i;
    for (i = v.begin(); i != v.end(); i++)
        sum += *i;
    return sum;
}

void List(const vector<int>& score){
    for (std::vector<int>::const_iterator ptr = score.begin(); ptr != score.end(); ptr++)
        cout << *ptr << " ";
}


int main(){
//    string characterName = "John";
//
//    cout << "Hello world! " << characterName << endl;
//    cout << characterName.find('o') << endl;
//
//    string name;
//    getline(cin, name);
//    cout << name << endl;
//
//    string color, pluralNoun, celebrity;
//
//    cout << "Enter a color: ";
//    getline(cin, color);
//
//    cout << "Roses are {color}" << endl;

//    int luckyNums [] = {4, 8, 15, 16, 23, 42};
//
//    cout << luckyNums[0] << endl;
//
//    hello("Mike", 60);
//
//    cout << cube(5) << endl;
//
//    bool isMale = true;
//    bool isTall = false;
//    if(isMale && isTall){
//        cout << "You are a tall male" << endl;
//    } else if (isMale && !isTall){
//        cout << "You are a male" << endl;
//    } else {
//        cout << "You are not male" << endl;
//    }
//
//    cout << getMax(1, 2) << endl;
//
//    int numbergrid[3][2] = {
//                            { 1, 2},
//                            { 4, 3},
//                            { 5, 8}
//    };
//    cout << numbergrid[2][1] << endl;

//    Book myBook("Harry Potter","JK Rowling",4);
//
//    Book myBook2("Lord of the Rings","Token",3);

//    Book myBook3;
//
//    cout << myBook.title << endl;
//    cout << myBook2.title << endl;
//    cout << myBook3.title << endl;

//    myBook.setTitle("Dog");
//    cout << myBook.getTitle() << endl;
//    cout << myBook.hasHonors();
//
//    Chef chef;
//    chef.makeChicken();
//
//    ItalianChef jie;
//    jie.makeBeef();
//    Example value = A;
//
//    if (value == A)
//    {
//        cout << "bingo" << endl;
//    }
//    int i = 0;
//    string password;
//    while(i < 3){
//                    cout << "Please input password: " << endl;
//                    cin >> password;
//                    cout << "Your Password: " << password;
//                    i++;
//                    if(password != "123"){
//                                if(i == 3){
//                                            cout << "3 times wrong password"<< endl;
//                                            exit(0);
//                                }
//                    }
//    }
//int n = 0;
//while(++n <= 2){
//    cout << n << endl;
//}
//cout << n << endl;

//int array[] {12,34,34,23,55,66};
//int* ptr_start = array;
//int* ptr_end = array + 5;
//
//cout << *ptr_start << endl;
//cout << *ptr_end << endl;
//cout << endl;
//
//cout << ptr_start << endl;
//cout << &ptr_start[1] << endl;
//cout << &ptr_start[2] << endl;
//cout << &ptr_start[3] << endl;
//cout << &ptr_start[4] << endl;
//
//while(ptr_start < ptr_end){
//    int temp;
//    temp = *ptr_start;
//    *ptr_start = *ptr_end;
//    *ptr_end = temp;
//    ptr_start++;
//    ptr_end--;
//}
//
//for (uint8_t i = 0; i < sizeof(array)/sizeof(array[0]); i++){
//    cout << array[i] << endl;
//}

//int arrays[5][3] = {
//    {1,2,3},
//    {4,5,6},
//    {7,8,9},
//    {10,11,12},
//    {13,14,15}
//};
//
//int (*p)[3] = arrays;
//    cout << arrays << endl;

//    cout << "Hello world!" << endl;
//    for(uint8_t i = 0; i <= 10; i++)
//    {
//        cout << static_cast<int> (i) << endl;
//    }
//    if(!true == false)
//        cout << "I love you" << endl;

//    double power[3];
//
//    power[powerCount++] = 42922;
//    cout << powerCount << endl;
//    power[powerCount++] = 34242;
//    cout << powerCount << endl;
//    power[powerCount++] = 23342;
//    cout << powerCount << endl;
//    power[powerCount++] = 11111;
//    cout << powerCount << endl;
//
//    cout << sizeof(power) << endl;
//    cout << &power[0] << " "<< &power[1] <<" "<< &power[2] <<" "<< &power[3] <<" "<< &power[4] <<" "<< &power[5] << endl;

//    for (uint8_t i = 0; i < sizeof(power)/sizeof(power[0]) - 1; i++){
//            for (int j = 0; j < sizeof(power)/sizeof(power[0]) -1 - i; j++){
//                double temp;
//                if (power[j] > power[j+1]){
//                    temp = power[j];
//                    power[j] = power[j+1];
//                    power[j+1] = temp;
//                }
//            }
//    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    string stu_names[] = {"Jie", "Chang", "Huo"};
//    string course_names[] = {"A","B","C"};
//    const int ROW = 3;
//    const int COL = 3;
//    double scores[ROW][COL];
//
//    for(int i = 0; i < ROW; i++){
//        for (int j = 0; j < COL; j++){
//            cout << stu_names[i] << " is " << course_names[j] << "grade: ";
//            cin >> scores[i][j];
//        }
//    }
//    cout << endl;
//    cout << '\t';
//
//    for(int j = 0; j < COL; j++){
//            cout << course_names[j] << '\t';
//    }
//    cout << endl;
//    for (int i = 0; i < ROW; i++){
//            cout << stu_names[i];
//        for (int j = 0; j < COL; j++){
//            cout << '\t' << scores[i][j] << '\t';
//        }
//        cout << '\t' << '\t' << endl;
//    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//double num = 3.14;
//double* ptr_num1 = &num;
//void* ptr_num2 = &num;
//
//cout << boolalpha;
//cout << (ptr_num1 == ptr_num2) << endl;
//cout << &num << endl;
//cout << ptr_num2 << endl;
//cout << &ptr_num2 << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//double num = 3.14;
//double* ptr_num = &num;cout << *ptr_num << endl;
//double& ref_num = num; cout << ref_num << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//int score[] = {56, 32, 43};
//cout << score << endl; // 等于&score[0]， 等于&score,存储score数列的第一个元素的地址。
//cout << &score << endl;
//cout << score[0] << endl;
//cout << score[1] << endl;
//cout << score[2] << endl;
//cout << endl;
//cout << &score[0] << endl;
//cout << &score[1] << endl;
//cout << &score[2] << endl;
//cout <<"Array of score size: " << sizeof(score) << endl;
//cout << endl;
//
//int *ptr_score = score;
//cout << *ptr_score << endl; // 56;
//cout << ptr_score << endl;
//cout << ptr_score[0] << endl;
//cout << ptr_score[1] << endl;
//cout << ptr_score[2] << endl;
//cout << endl;
//cout << &ptr_score[0] << endl;
//cout << &ptr_score[1] << endl;
//cout << &ptr_score[2] << endl;
//
//cout << "Array of ptr_score size: " << sizeof(ptr_score) << endl;
//cout << endl;
//
//for (int i = 0; i < 3; i++){
//    cout << ptr_score[i] << endl;
//}
//cout << endl;
//
//for (int i = 0; i < 3; i++){
//    cout << *ptr_score++ << endl;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
vector <int> score = {56,32,23};
//cout << score[1] << endl;
//cout << score.size() << endl;
//
//score.push_back(1);
//
//cout << score[3] << endl;
//cout << score.size() << endl;
//
//score.clear();
//cout << score.size() << endl;
//score.assign(12,1);
//
//vector<int>::iterator ptr;
//for (ptr = score.begin(); ptr != score.end(); ptr++)
//    cout << *ptr << " ";
List(score);

vector<int> v {1, 2, 3};
cout << AdditionFunction(v) << "\n";

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    int (*P1) = new int [5];
//    for (int i = 0; i < 5; i++){
//        cout << *(P1 + i) << ',';
//        cout << endl;
//    }
//
//    cout << endl;
//
//    int (*P2)[3] = new int [5][3];
//    for (int i = 0; i < 5; i++){
//        for (int j = 0; j < 3; j++){
//            cout << *(*(P2 + i) + j) << ',';
//        }
//             cout << endl;
//    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//cout << addition (2, 4) << endl;
//cout << apple << endl;
//double (*ptrcalculator)(double, double) = addition; //指针函数
//auto ptr = addition;
//    cout << ptrcalculator( 3, 5) << endl;
//    cout << ptr (3,5) << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//int a[10];
//for (int i = 0; i < 10; i++){ //下标法
//    cin >> a[i];
//}
//cout << endl;
//
//for (int i = 0; i < 10; i++){
//    cout << a[i] << " ";
//}
//cout <<endl;

//for (int i = 0; i < 10; i++){  //指针法
//    cin >> *(a + i);
//}
//cout << endl;
//
//for (int i = 0; i < 10; i++){
//    cout << *(a + i) << " ";
//}
//cout <<endl;

//int (*ptra) = a; //指针变量指向数组元素法
//for (int i = 0; i < 10; i++){
//    cin >> *(ptra + i);
//}
//
//cout << endl;
//
//for (ptra = a; ptra < a + 10; ptra++){
//    cout << *ptra << " ";
//}
//
//cout << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//student jie (2, 95);
//cout << jie.getGrade() << endl;
//cout << jie.getScore() << endl;
//jie.print();
//
//cout << endl;
//
//double apple[4] {50, 10, 20, 40};
//
//double (&ref_apple)[4] = apple;
//
//cout << apple << endl;
//cout << sizeof(apple) << endl;
//cout << &apple << endl;
//cout << endl;
//
//cout << ref_apple << endl;
//cout << sizeof(ref_apple) << endl;
//cout << &ref_apple << endl;
//cout << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//cout << add( 1, 3 ) << endl;
//cout << add(1,2,3) << endl;
//
//cout << endl;
//
//int i1 = 185, i2 = -76, i3 = 567, i;
//double d1 = 56.43, d2 = 43.23, d3 = 12.23;
//
//cout << max(i1, i2, i3) << endl;
//cout << max(d1, d2, d3) << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CStudent yy("NO","YES",3);
//
//cout << yy.getNum() << endl;
//cout << yy.getScore() << endl;
//cout << yy.getName() << endl;

//Flower jie;
//
//cout << jie.getOrder() << "/" << jie.getNumber() << endl;
//
//jie.setOrder(100);
//jie.setNumber(40);
//
//cout << jie.getOrder() << "/" << jie.getNumber() << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//const double a = 12.3;
//const double& d = a;
//
//cout << d <<endl;
//cout <<&d << endl;
//
//cout << a <<endl;
//cout <<&a << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//int a = 10;
//int b = 5;
//
//cout << a << "/" << b <<endl;
////swap(&a,&b);
//swap(a, b);
//cout << a << "/" << b <<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//int result = sum();
//
//cout << "Result = " << result << endl;

    return 0;
}
