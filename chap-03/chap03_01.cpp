#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int sec04_operations() {
    cout << "Please enter floadting point: ";
    double n;
    cin >> n;
    cout << "n==" << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         << "\nn squared == " << n*n
         << "\nhalve of n == " << n/2
         << "\nsquare root of n == " << sqrt(n)
         << "\n";
    return 0;
}

void sec04_operations_tt01(){
    cout << "Please enter integer: ";
    int n; // a/b * b + a%b == a is guaranteed for int
    cin >> n;
    double n_d = n;
    cout << "n==" << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         << "\nn squared == " << n*n
         << "\nhalve of n == " << n/2
         << "\nsquare root of n == " << sqrt(n_d)
         << "\n";
}

void sec04_string_comparison(){
    cout << "Please enter two names\n";
    string first;
    string second;
    cin >> first >> second;
    if (first == second) cout << "That is the same name twice\n";
    if (first < second) cout << first << " is alphabetically before " << second << "\n";
    if (first > second) cout << first << " is alphabetically after " << second << "\n";
}

int sec05_ex(){
    string previous = " ";
    string current;
    while (cin>>current){
        if (previous == current){
            cout << "repeated word: " << current << "\n";
        }
        previous = current;
    }
    return 0;
}

void sec06_ex(){
    string previous = " ";
    string current;
    int number_of_words = 0;
    while (cin>>current){
        ++number_of_words;
        if (previous == current){
            cout << "word number " << number_of_words <<" repeated: " << current << "\n";
        }
        previous = current;
    }
}

void sec_09_safe_conversion(){
    char c = 'x';
    int i1 = c;
    int i2 = 'x';
    char c2 = i1;
    cout << c << ' ' << i1 << ' ' << c2 << endl;
}

void sec_09_unsafe_conversion(){
    int a = 2000;
    char c = a; // large int to small char
    int b = c;
    if (a!=b){
        cout << "oops!: " << a << "!=" << b << endl;
    } else {
        cout << "Wow! We have large characters\n";
    }
}

void sec_09_unsafe_conversion_2(){
    double d = 0;
    while (cin>>d) {
        int i=d;
        char c=i;
        int i2 = c;

        cout << "input double == " << d
            << "\ndouble2int == " << i
            << "\nchar2int == " << i2
            << "\nint2char(" << c << ")\n";
    }
}

void drill_01(){
    cout << "Enter the name of the person you want to write:\n";
    string name;
    cin >> name;
    cout << "Dear " << name << ",\n";
    cout << "   How are you?" << "\n";
    cout << "   There is something I want to tell you" << "\n";
    cout << "Enter the name of a friend in your mind: " << "\n";
    string freind_name;
    cin >> freind_name;
    cout << "   Have you seen " << freind_name << " lately?" << "\n";
    cout << "Enter sex (f/m): ";
    char friend_sex;
    cin >> friend_sex;
    if (friend_sex == 'm') {
        cout << "   If you see " << freind_name << " please call me." << "\n";
    } else if (friend_sex == 'f') {
        cout << "   if you see " << freind_name << " please ask her to call me." << "\n";
    } else {
        cout << "Wrong sex input";
    }
    cout << "Enter the age: ";
    int age;
    cin >> age;
    if (age < 0 or age > 110) {
        cout << "You are kidding\n";
    } else {
        cout << "   I heard you just had a birthday and you are now " << age << " years old.\n";
    }

    if (age < 12) {
        cout << "   Next year you will be " << age+1 << " years old.\n";
    } else if (age == 17) {
        cout << "   Next year you will be able to vote!" << "\n";
    } else if (age > 70) {
        cout << "   Enjoy your retirement!\n";
    }
    cout << "   Your sicerely\n\n\n";
    cout << "   Dion\n";
}


int main() {
    // 3.1. Input
    cout << "Please enter your name: \n";
    string first_name;
    cin >> first_name;
    cout << "Hello, " << first_name << "!\n";

    // 3.2. Variables
    int number_of_steps = 39;
    double flying_time = 3.6;
    char decimal_point = '+';
    string last_name = "Travolta";
    bool tap_on = true;

    // 3.3 Input and Type
    cout << "Please enter your first name and age:\n";
    // string first_name;
    // int age;
    // try this: age in (double)
    double age;
    cin >> first_name; // reading of strings is terminated by whitespace
    cin >> age;
    // 22 Name will return 22, ... 0
    cout << "Hello, " << first_name << " (age " << age*12 << " Months)\n";

    // 3.4 Operations and Oparators
    sec04_operations();
    sec04_operations_tt01();
    sec04_string_comparison();

    // 3.5. Assignment and Initialization
    // sec05_ex();

    // 3.6 Composite Assignment Operators
    // sec06_ex();

    // 3.7 Names
    // 3.8 Types and Objects
    // 3.9 Type Safety
    /* 
        Safe conversion
        bool to char
        bool to int
        bool to double
        char to int
        char to double
        int to double
    */
   sec_09_safe_conversion();
   /*
    unsafe conversion:
    double to int
    double to char
    double to bool
    int to char
    int to bool
    char to bool
   */
   // sec_09_unsafe_conversion();
   // sec_09_unsafe_conversion_2();

   // drill
    drill_01();
}