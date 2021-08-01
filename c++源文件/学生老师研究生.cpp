#include <iostream>
#include<string>
using namespace std;

class Teacher
{
public:
	Teacher() {}
	Teacher(string nam, int a, string d) { name = nam; age = a; t_duty = d; }
	string get_duty();
	int get_age();
	string get_name() { return name; }
	void display();
private:
	string name;
	int age;
	string t_duty;
};

string Teacher::get_duty()
{
	return t_duty;
}
int Teacher::get_age()
{
	return age;
}
void Teacher::display()
{
	cout << "老师" << endl;
	cout << "姓名："<<name << endl;
	cout << "年龄：" << age << endl;
	cout << "职责：" << t_duty << endl;
}
class Student 
{
public:
	Student() {}
	Student(string nam, string n, string d) { name = nam; num = n; s_duty = d; }
	string get_duty();
	string get_num();
	void display();
private:
	string name;
	string num;
	string s_duty;
};

string Student::get_duty()
{
	return s_duty;
}
string Student::get_num()
{
	return num;
}
void Student::display()
{
	cout << "学生" << endl;
	cout << "姓名：" << name << endl;
	cout << "学号：" << num << endl;
	cout << "职责：" << s_duty << endl;
}

class Graduate :public Teacher, Student
{
public:
	Graduate() {}
	Graduate(string nam, int a, string n, string d1, string d2):t(nam,a,d1),s(nam,n,d2){}
	void display();
private:
	Teacher t;
	Student s;
};

void Graduate::display()
{
	cout << "研究生" << endl;
	cout << "姓名：" << t.get_name() << endl;
	cout << "年龄：" << t.get_age() << endl;
	cout << "学号：" << s.get_num() << endl;
	cout << "职责：" << t.get_duty()<<","<< s.get_duty() << endl;
}

int main()
{
	Teacher t("fann",19,"教育");
	Student s("fann","201340242","学习");
	Graduate g("fann", 19, "201340242","教育", "学习");
	t.display();
	s.display();
	g.display();
	return 0;
}