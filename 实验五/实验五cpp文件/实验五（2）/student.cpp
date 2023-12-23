//student.cpp
#include <iostream>
#include "student.h"

Student::Student() { //默认构造函数的定义
    num = 0;
    name[0] = '\0';
    sex = '\0';
}

Student::Student(int num, const char* name, char sex) { //重载构造函数的定义
    this->num = num;
    strcpy_s(this->name, name);
    this->sex = sex;
}

void Student::set_value(int num, const char* name, char sex) { //数据成员赋初值的成员函数的定义
    this->num = num;
    strcpy_s(this->name, name);
    this->sex = sex;
}

void Student::display() { //display函数的定义
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}
