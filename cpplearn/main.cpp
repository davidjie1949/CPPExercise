#include <iostream>
#include <cstdlib>

using namespace std;

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

int main(){
//    string characterName = "John";
//
//    cout << "Hello world! " << characterName << endl;
//    cout << characterName.find('o') << endl;
//
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

int arrays[5][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12},
    {13,14,15}
};

int (*p)[3] = arrays;
    cout << arrays << endl;

    return 0;
}
