
#ifndef PERSONAL_H
#define PERSONAL_H

#include "employee.h"

//#include 

using namespace std;

/*class Employee;
class WorkTime;*/

class Personal : public Employee, public WorkTime
{
protected: //������? ������ ��� ����� ���������� ������ ������������
	float base; //
public:
	Personal(int id, string fio, int worktime, float base);
	float calcwtpayment() override; //�������������� �������?
	void solary() override;
	//float getbase(float base);
	//void settme();
};

class Cleaner : public Personal
{
public:
	Cleaner(int id, string fio, int worktime, float base);
	//float calcwtpayment(float/int base);  �� ���������������� �������� ���
	//void solary();
};

class Driver : public Personal
{
public:
	Driver(int id, string fio, int worktime, float base);
	float calcwtpayment() override;
	//void solary();
};

#endif