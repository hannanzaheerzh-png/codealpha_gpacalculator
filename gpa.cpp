#include <iostream>
using namespace std;

class course
{
    private :
    float grades;
    int credithours;
    public :

    course (){
        grades = 0.0;
        credithours = 0;

    }
    course (float g, int ch){
        grades = g;
        credithours = ch;
    }
    void inputcourse(int courseNumber){
        cout << "Enter grade for course : " <<courseNumber << endl;
        cin >>grades;
        cout << "Enter credithours for course : " <<courseNumber << endl;
        cin >>credithours;
    }
    float getgrade() {
        return grades;
    }
    int getcredithours() {
        return credithours;
    }
    float getgradepoints() {
        return grades * credithours;
    }

};
class CGPAcalculator {
    private :
    int numCourses;
    course Courses[10];

public :
CGPAcalculator () {
    numCourses = 0;
}
void inputallCourse() {
    cout <<"Enter number of courses "<<endl;
    cin>>numCourses;
    int i;
    for (i = 0; i < numCourses; i++) {
        cout << "\n-----course " << i + 1 << "-----" <<endl;
        Courses[i].inputcourse(i + 1);
    }
}
void calculateandDisplayCGPA() {
    float totalGradepoints = 0;
    int totalcredits = 0;
    int i;
    cout << " Course Details :"<<endl;
    cout <<"-------------------------------" <<endl;
    cout <<"Course\tGrades\tCredit Hours\t Grade points"<<endl;
    for (i = 0; i < numCourses; i++) {
        float grades = Courses[i].getgrade();
        int credithours = Courses[i].getcredithours();
        float gradepoints = Courses[i].getgradepoints();
        totalGradepoints = totalGradepoints + gradepoints;
        totalcredits = totalcredits + credithours;
    }
    
    float cgpa = totalGradepoints / totalcredits;
        cout << "Total Credits: " << totalcredits <<endl;
        cout << "Total Grade Points: " << totalGradepoints <<endl;
        cout << "Final CGPA: " << cgpa << endl;
}
};

int main (){
    CGPAcalculator cal;
    cal.inputallCourse();
    cal.calculateandDisplayCGPA();
    return 0;
    
};




