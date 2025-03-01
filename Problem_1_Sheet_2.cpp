#include<iostream>
using namespace std;

int main()
{
    int subject1 , subject2 , subject3 , totalMarks , average;
    cout << "enter  marks subject 1" << endl;
    cin>> subject1;
    cout << "enter marks subject 2" << endl;
    cin >> subject2;
    cout << "enter marks subject 3" << endl;
    cin >> subject3;
    totalMarks= subject1 +subject2 + subject3;
    average= totalMarks / 3;
    cout << "Average = " <<average<< endl;
    if (average>=50)
     {
     	cout << "the student passed exam" << endl;
     }
     else
     {
     	cout << "The student failed the exam." << endl;
     }
    return 0;
}
