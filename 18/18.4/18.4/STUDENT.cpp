#include "Student.h"
//конструктор без параметров 
STUDENT::STUDENT(void):PERSON()
{
	mark = 2;
}

//дестрктор 
STUDENT::~STUDENT(void)
{

}

//конструктор с параметрами
STUDENT::STUDENT(string M, int C, int mark, string subject) :PERSON(M, C)
{
	this->name = M;
	this->age = C;
	this->mark = mark;
	this->subject = subject;
}

//конструктор копирования 
STUDENT::STUDENT(const STUDENT &other)
{
	this->name = other.name; 
	this->age = other.age; 
	this->mark = other.mark;
	this->subject = other.subject;
}

//модификатор
void STUDENT::Set_mark(int)
{
	this->mark = mark;
}

void STUDENT::Set_subject(string)
{
	this->subject = subject;
}

//оперция присваивания
STUDENT& STUDENT::operator=(const STUDENT& l)
{
	if (&l == this)return *this; 
	name = l.name; 
	age = l.age;
	mark = l.mark; 
	subject = l.subject;
	return *this;
}

//операция ввода
istream& operator>>(istream& in, STUDENT& l)
{
	cout << "\nName:"; 
	in >> l.name; 

	cout << "\nAge:"; 
	in >> l.age; 
	while (l.age < 14 || l.age > 40)
	{
		cout << "\nНе уверен что в таком возрасте учатся в университете\n";
		cout << "\nAge:";
		in >> l.age;
	}

	cout << "\nsubject:";
	in >> l.subject;

	cout << "\nmark:"; 
	in >> l.mark;
	while (l.mark < 2 || l.mark > 5)
	{
		cout << "\nВведена некорректная оценка!\n";
		cout << "\nMark:";
		in >> l.mark;
	}
	return in;
}

//операция вывода
ostream& operator<<(ostream& out, const STUDENT& l)
{
	out << "\nName : " << l.name; 
	out << "\nAge : " << l.age; 
	out << "\nmark : " << l.mark; 
	out << "\nsubject:" << l.subject;
	out << "\n";
	return out;
}

void STUDENT::Check_Mark(const STUDENT& stud)
{
	switch (stud.mark)
	{
	case 2: cout << "\nОценка  студента " << stud.name << " по предмету " << stud.subject << " неудовлетворительна!\n"; break;
	case 3:
	case 4:
	case 5: cout << "\nОценка  студента " << stud.name << " по предмету " << stud.subject << " удовлетворительна!\n"; break;
	default:
		break;
	}
}
