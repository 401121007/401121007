#include <iostream>
#include <string>
using namespace std;

class Student {

  public:
    string name;
    int average;
    Student(string studentName,int studentAverage){
     name = studentName;
     average = studentAverage;}


    string getName(){
        return name;
    }

    int getAverage(){
    return average;
    }

  string getLetterGrade() const {
    string letterGrade;
    if (average >= 90) {
      letterGrade = "A";
       }
    else if (average >= 80)  {
        letterGrade = "B";
    }
            else if (average >= 70) {
      letterGrade = "C";
    }

    else if (average >= 60){
        letterGrade = "D";
    }
    else {

        letterGrade = "F";

    }
    return letterGrade;

  }

};
int main(){

    string name;
    int average;
    cout<<"please type the student name :";
    cin >> name;
    cout<< "please type the student average :";
    cin >> average;

    Student student(name,average);
    name=student.getName();
    cout<<"NAME IS: "<< name<<endl<<endl;
    average=student.getAverage();
    cout<<"AVERAGE IS: "<< average<<endl<<endl;

    string result;
    result=student.getLetterGrade();

    cout<< "the letter result is : "<<result;





}
