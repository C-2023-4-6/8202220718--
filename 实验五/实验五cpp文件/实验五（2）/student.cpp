//student.cpp
#include <iostream>
#include "student.h"

Student::Student() { //Ĭ�Ϲ��캯���Ķ���
    num = 0;
    name[0] = '\0';
    sex = '\0';
}

Student::Student(int num, const char* name, char sex) { //���ع��캯���Ķ���
    this->num = num;
    strcpy_s(this->name, name);
    this->sex = sex;
}

void Student::set_value(int num, const char* name, char sex) { //���ݳ�Ա����ֵ�ĳ�Ա�����Ķ���
    this->num = num;
    strcpy_s(this->name, name);
    this->sex = sex;
}

void Student::display() { //display�����Ķ���
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}
