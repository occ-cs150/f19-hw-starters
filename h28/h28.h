/**
    @file h28.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
    // DO NOT MODIFY IN ANY WAY
*/
#ifndef H28_H_
#define H28_H_

#include <string>

/** A bug climbing a pole.  */
class Bug
{
public:
    Bug(int startPos);      // construct Bug at starting position
    void move();            // move bug one unit in direction
    void turn();            // Change the direction from left to right or vice-versa
    int position() const;   // Return the position
private:
    int position_;
    int direction_;
};

/** A generic person */
class Person
{
public:
    Person();                                   // default: no name, age 0
    Person(const std::string& name, int age);   // working constructor
    std::string name() const;                   // return the name
    int age() const;                            // return the age
private:
    std::string name_;
    int age_;  // 0 if unknown
};

/** An employee */
class Employee
{
public:
    Employee();                                         // default: salary 0
    Employee(const std::string& name, double salary);   // working constructor
    void salary(double newSalary);                      // change salary
    double salary() const;                              // retreive salary
    std::string name() const;                           // retrieve name
private:
    Person data_;
    double salary_;
};

#endif
