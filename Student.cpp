#include "Student.h"
#include<cstring>
#include <iostream>
using namespace std;

void Student::assignDetails(int id, const char sname[]) {
  studentId = id;
  strcpy (name , sname);
}

void Student::display() {
  cout << "Student ID :" ;
  cout << studentId << endl;
  cout << "Student Name :";
  cout << name << endl;
}
