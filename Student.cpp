#include "Student.h"
#include <iostream>

// Assign studentId and name
void Student::assignDetails(int sId,char sname[]) {
  studentId =sId;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
 cout<<"Student ID"<<studentId<<endl;
 cout<<"Student Name :"<<name<<endl;
}
