//main.cpp
#include <iostream>
#include "student.h"

int main() {
    Student stud1;
    stud1.set_value(007, "tcg", 'm'); //ʹ��set_value�������ö�������ݳ�Ա��ֵ
    stud1.display(); //����display������ʾ��������ݳ�Ա��ֵ

    Student stud2(001, "abc", 'f'); //ʹ�����ع��캯��������һ������
    stud2.display(); //����display������ʾ��������ݳ�Ա��ֵ

    return 0;
}
