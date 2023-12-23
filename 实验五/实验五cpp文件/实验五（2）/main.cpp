//main.cpp
#include <iostream>
#include "student.h"

int main() {
    Student stud1;
    stud1.set_value(007, "tcg", 'm'); //使用set_value函数设置对象的数据成员的值
    stud1.display(); //调用display函数显示对象的数据成员的值

    Student stud2(001, "abc", 'f'); //使用重载构造函数创建另一个对象
    stud2.display(); //调用display函数显示对象的数据成员的值

    return 0;
}
