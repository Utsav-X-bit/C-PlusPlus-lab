// Practical 4. WAP to implement a small grading utility for a university:
// Create a class Student with private data members: name, marks in 3 subjects.
// Use an inline function to calculate the average marks.


#include <iostream>
using namespace std; 

class Student{
    string name ;
    int EnglisMarks;
    int MathsMarks;
    int ScienceMarks;

    public:
        int avgMarks();
        Student (){
            
        }
        Student(string n, int a, int b, int c){
            name = n;
            EnglisMarks = a;
            MathsMarks = b;
            ScienceMarks = c;
        }
};

inline int Student::avgMarks(){
    return (EnglisMarks + MathsMarks + ScienceMarks)/3 ;
}

int main(){
    Student s1("Utsav",90,100,100);
    cout << "Average Marks : " << s1.avgMarks() ;
    return 0;
}