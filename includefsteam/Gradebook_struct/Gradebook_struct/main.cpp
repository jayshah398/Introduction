//
//  main.cpp
//  Gradebook_struct
//
//  Created by Jay Shah on 2/23/21.
//
#include <iostream>
#include <struct.h>
#include <cmath>
#include <string>
#include <sstream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int r = 1;

struct student
{
    char name;
    int roll;
    int math;
    int english;
    int science;
    int history;
    double average;
    string lettergrade;
} students [100];

int main()
{
    int n;
    int choise = 1;
    while (choise < 5 & choise > 0)
    {
    cout << "1. Enter student information. \n";
    cout << "2. Display student information. \n";
    cout << "3. Delete student information. \n";
    cout << "4. Display Gradebook. \n";
    cout << "0. Quit.\n";
    cout << "Enter your choise number 0-4 below: \n";
    cin >> choise;
    if (choise == 1)
    {
        cout << "Enter number of new student in the class below:\n" << endl;
        cin >> n;
        for (int x = 1; x <= n; x++)
        {
            r++;
            students[n].roll = r;
            cout << "Enter student name:\n";
            cin >> students[n].name;
            cout << "Enter Math grade in number:\n";
            cin >> students[n].math;
            cout << "Enter English grade in number:\n";
            cin >> students[n].english;
            cout << "Enter Science grade in number:\n";
            cin >> students[n].science;
            cout << "Enter History grade in number:\n";
            cin >> students[n].history;
            
            double average = (((students[n].math + students[n].english + students[n].science + students[n].history)/400) * 100);
            students[n].average = average;
            
            if (students[n].average <= 100 & students[n].average >= 90)
            {
                students[n].lettergrade = "A";
            }
            else if (students[n].average <= 89 & students[n].average >= 85)
            {
                students[n].lettergrade = "B+";
            }
            else if (students[n].average <= 84 & students[n].average >= 78)
            {
                students[n].lettergrade = "B";
            }
            else if (students[n].average <= 77 & students[n].average >= 72)
            {
                students[n].lettergrade = "C+";
            }
            else if (students[n].average <= 71 & students[n].average >= 65)
            {
                students[n].lettergrade = "C";
            }
            else if (students[n].average <= 64 & students[n].average >= 58)
            {
                students[n].lettergrade = "D";
            }
            else if (students[n].average <= 58 & students[n].average >= 0)
            {
                students[n].lettergrade = "F";
            }
            else
            {
                cout << "Grade must be out of 100 in every subject. \n";
            }
            
            cout << "Enter 1 to display letter grade else 0 to end:\n";
            int dis;
            cin >> dis;
            
            if (dis == 1)
            {
                cout << "\n" << students[n].lettergrade << "\n" << endl;
            }
            
            else if (dis == 0)
            {
                cout << "The End";
            }
            
            else
            {
                cout << "Wrong Input";
            }
        }
    }
        
    if (choise == 2)
        {
            cout << "1. To search by roll number.\n";
            cout << "2. To seach by name. \n";
            cout << "Choose your desire search option.\n";
            int choise2;
            cin >> choise2;
            if (choise2 == 1)
            {
                cout << "Enter roll number:\n"<<endl;
                cin >> n;
                cout << "Student name:\n" << students[n].name << endl;
                cout << "Math grade:\n" << students[n].math << endl;
                cout << "English grade:\n" << students[n].english << endl;
                cout << "Science grade:\n" << students[n].science << endl;
                cout << "History grade:\n" << students[n].history << endl;
                
            }
            else if (choise2 == 2)
            {
                cout << "Enter Student name:\n"<<endl;
                cin >> students[n].name;
                cout << "Student roll number:\n" << students[n].roll << endl;
                cout << "Math grade:\n" << students[n].math << endl;
                cout << "English grade:\n" << students[n].english << endl;
                cout << "Science grade:\n" << students[n].science << endl;
                cout << "History grade:\n" << students[n].history << endl;
                
            }
        }
    
    if (choise == 3)
    {
        
    }
    if (choise == 4)
    {
        cout << "Enter total number of students in your class:\n" << endl;
        cin >> n;
        for (int x = 1; x <= n; x++)
        {
            cout << "Roll number: \n" << students[n].roll << endl;
            cout << "Name:\n" << students[n].name << endl;
            cout << "Math grade: \n" << students[n].math << endl;
            cout << "English grade:\n" << students[n].english << endl;
            cout << "Science grade:\n" << students[n].science << endl;
            cout << "History grade:\n" << students[n].history << endl;
        }
    }
    else
    {
        cout << "Thank you for choosing" << endl;
    }
    }
    return 0;
}
