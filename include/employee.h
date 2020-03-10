
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>

#include "workproject.h"

using namespace std;

class Employee
{
protected:
	int id; //����
	string fio; //���
	int worktime; //������������� �����
	float payment; //��������
	//vector<string> employee;
public:
	Employee(int id, string fio, int worktime);
	//int getid(int id); //?
	//string getfio(string fio); //?
	string getfio(); //?
	//float getworktime(int worktime); //?
	//float getpayment(float payment); //?
	float getpayment();
	//virtual void create() = 0; ������� �������
	virtual void solary() = 0; //���������� ��������
	// void settime(); //���������� ���� ���� � ���� ����� �������� 100 �����, � ����?
};

class WorkTime
{
public:
	//virtual float calcwtpayment(float base) = 0; //������ �������� �� ������?
	virtual float calcwtpayment() = 0;
};

class Project
{
public:
	//virtual float calcprpayment(float percent, int budget) = 0; //������ �������� �� ������?
	virtual float calcprpayment() = 0;
};

class Heading
{
public:
	//virtual float calchepayment(int leaderDase) = 0; //������ �������� �� ����������?
	virtual float calchepayment() = 0;
};

/*class WorkProject
{
private:
	string project_name;
	int project_budget;
public:
	WorkProject(string project_name, int project_budget);
	//int get_project_budget(int project_budget);
	//string get_project_name(string project_name);
	int get_project_budget();
	string get_project_name();
};*/

#endif