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
	cout << "��ʦ" << endl;
	cout << "������"<<name << endl;
	cout << "���䣺" << age << endl;
	cout << "ְ��" << t_duty << endl;
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
	cout << "ѧ��" << endl;
	cout << "������" << name << endl;
	cout << "ѧ�ţ�" << num << endl;
	cout << "ְ��" << s_duty << endl;
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
	cout << "�о���" << endl;
	cout << "������" << t.get_name() << endl;
	cout << "���䣺" << t.get_age() << endl;
	cout << "ѧ�ţ�" << s.get_num() << endl;
	cout << "ְ��" << t.get_duty()<<","<< s.get_duty() << endl;
}

int main()
{
	Teacher t("fann",19,"����");
	Student s("fann","201340242","ѧϰ");
	Graduate g("fann", 19, "201340242","����", "ѧϰ");
	t.display();
	s.display();
	g.display();
	return 0;
}