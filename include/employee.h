#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

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
	string getfio(); //?
	//float getworktime(int worktime); //?
	float getpayment(); //?
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

#endif