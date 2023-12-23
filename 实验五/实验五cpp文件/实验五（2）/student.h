//student.h
class Student {
public:
    Student(); //默认构造函数
    Student(int num, const char* name, char sex); //重载构造函数
    void set_value(int num, const char* name, char sex); //数据成员赋初值的成员函数
    void display();

private:
    int num;
    char name[20];
    char sex;
};
