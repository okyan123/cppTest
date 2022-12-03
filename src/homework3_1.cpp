#include <iostream>
using namespace std;

/*一、编写一个程序管理学生信息。要求：
1) 定义学生Student类，包含私有数据name(string类型)，age(int类型)；
2) 主函数定义Student类的指针p，利用new操作动态开辟数组，可以存储2个学生信息。
3) 设计输入函数inputInfor 完成数据的输入，输出函数outputInfor完成数据的输出。
4) 在主函数中写出调用语句，测试2)-3)的功能。
*/

class Student
{
private:
    string name;
    int age;

public:
    void inputInfor()
    {
        cout << "请输入姓名: ";
        cin >> name;
        cout << "请输入年龄: ";
        cin >> age;
    }
    void outputInfor()
    {
        cout << "姓名: " << name << endl;
        cout << "年龄: " << age << endl;
    }
};

int main()
{
    Student *p = new Student[2];
    p[0].inputInfor();
    p[1].inputInfor();
    p[0].outputInfor();
    p[1].outputInfor();
    return 0;
}