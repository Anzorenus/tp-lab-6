#pragma once
#ifndef ENGINEER_H
#define ENGINEER_H

#include "employee.h"

//#include 

using namespace std;

class Engineer : public Employee, public WorkTime, public Project
{
protected:
	float base; //����� �� ����������, ���� ���� �� ��������
	float pay_in_hour;
	float project_participation;
	int project_budget;
public:
	Engineer(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget);
	//float calcwtpayment(float pay_in_hour) override;
	float calcwtpayment() override;
	float calcprpayment() override; //�������������� �������?
	void solary() override;
	//float getbase(float base);
};

class Programmer : public Engineer
{
public:
	Programmer(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget);
	//float calcwtpayment(int base);
	//float calcprpayment(int percent, int budget); //�������������� �������?
	//void solary();
};

class Tester : public Engineer
{
public:
	Tester(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget);
	float calcwtpayment() override;
	//float calcprpayment(int percent, int budget); //�������������� �������?
	//void solary() override;
};

class TeamLeader : public Programmer, public Heading
{
protected:
	int subordinates;
public:
	TeamLeader(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget, int subordinates);
	//float calcwtpayment(int base);
	//float calcprpayment(int percent, int budget); //�������������� �������?
	//float calchepayment(int leaderDase) override;
	float calchepayment() override;
	void solary() override;
};

#endif