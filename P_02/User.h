//
// Created by pf on 21/02/23.
//

#ifndef EX01_USER_H
#define EX01_USER_H
#include <vector>
#include <string>

using namespace std;

typedef enum {MEEI, LEEC, LEAI} course_t;

class User {
private:
  string name;
  course_t course;
  int nMec;

public:
  User();
  User(string newName, course_t newCourse, int newNMec);

  void setName(string newName);
  void setCourse(course_t newCourse);
  void setNMec(int newNMec);
  string getName();
  course_t getCourse();
  int getNMec();

  void print();
};


#endif //EX01_USER_H
