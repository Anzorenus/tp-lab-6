
#pragma once

#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

using namespace std;

class Manager : public Employee, public Project
{
protected:
	float project_participation;
	int project_budget;
public:
	Manager(int id, string fio, float project_participation, int project_budget);
	float calcprpayment() override;
	void solary() override;
};

class ProjManager : public Manager, public Heading
{
protected:
	int subordinates; //���������� �����������
public:
	ProjManager(int id, string fio, float project_participation, int project_budget, int subordinates);
	float calchepayment() override;
	void solary() override;
};

class SeniorManager : public ProjManager
{
public:
	SeniorManager(int id, string fio, float project_participation, int project_budget, int subordinates);
	float calchepayment() override;
};

#endif