//student.h
class Student {
public:
    Student(); //Ĭ�Ϲ��캯��
    Student(int num, const char* name, char sex); //���ع��캯��
    void set_value(int num, const char* name, char sex); //���ݳ�Ա����ֵ�ĳ�Ա����
    void display();

private:
    int num;
    char name[20];
    char sex;
};
