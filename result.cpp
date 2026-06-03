/*
          ***C++ FIRST SEMESTER FINAL PROJECT***
       PROJECT NAME : STUDENT RESULT MANAGEMENT SYSTEM
       STUDENT NAME : BHANDARI HIMAL
       STUDENT ID   : 2617260
       BACH         : FRESHMAN/SPRING 2026
       DEPARTMENT   : BSC
    
*/

#include <iostream>
#include <string>

using namespace std;

string name;
float maths, physics, cpp, english;
float total, average;
char grade;

void inputData()
{
    cout << "\nEnter Student Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Maths Marks: ";
    cin >> maths;

    cout << "Enter Physics Marks: ";
    cin >> physics;

    cout << "Enter C++ Marks: ";
    cin >> cpp;

    cout << "Enter English Marks: ";
    cin >> english;
}

void calculateResult()
{
    total = maths + physics + cpp + english;
    average = total / 4;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';
}

void displayResult()
{
    cout << "\n====================================";
    cout << "\n      STUDENT RESULT REPORT";
    cout << "\n====================================";

    cout << "\nName      : " << name;
    cout << "\nMaths     : " << maths;
    cout << "\nPhysics   : " << physics;
    cout << "\nC++       : " << cpp;
    cout << "\nEnglish   : " << english;

    cout << "\n------------------------------------";
    cout << "\nTotal     : " << total;
    cout << "\nAverage   : " << average;
    cout << "\nGrade     : " << grade;
    cout << "\n====================================\n";
}
int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT RESULT MANAGEMENT SYSTEM =====";
        cout << "\n1. Enter Student Data";
        cout << "\n2. Calculate Result";
        cout << "\n3. Display Result";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                inputData();
                break;

            case 2:
                calculateResult();
                cout << "\nResult Calculated Successfully!\n";
                break;

            case 3:
                displayResult();
                break;

            case 4:
                cout << "\nProgram Closed.\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}
