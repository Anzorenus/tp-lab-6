#include <iostream>
#include "Abstracts.h"
#include "Positions.h"
#include "factory.h"

using namespace std;


extern map<string, int> projects;

Cleaner::Cleaner(string name, unsigned int id, float base, string position) : Personal(name, id, base, position) {};

float Cleaner::getPayment()
{
	payment = getPaymentbyWorkTime();
	return payment;
}

Driver::Driver(string name, unsigned int id, float base, string position, float koef) : Personal(name, id, base, position)
{
	this->koef = koef;
}

float Driver::getPayment()
{
	payment = getPaymentbyWorkTime() * koef;
	return payment;
}

Tester::Tester(string name, unsigned int id, float base, string position, string project, float contribution)
	: Engineer(name, id, base, position, project, contribution) {};

float Tester::getPayment()
{
	payment = getPaymentbyWorkTime() + getPaymentbyProject();
	return payment;
}

Programmer::Programmer(string name, unsigned int id, float base, string position, string project, float contribution)
	: Engineer(name, id, base, position, project, contribution) {};

float Programmer::getPayment()
{
	payment = getPaymentbyWorkTime() + getPaymentbyProject();
	return payment;
}

TeamLeader::TeamLeader(string name, unsigned int id, float base, string position, string project, float contribution, unsigned int subordinates)
	: Programmer(name, id, base, position, project, contribution)
{
	this->subordinates = subordinates;
}

float TeamLeader::getPaymentbyHeading()
{
	return subordinates * 1500;
}

float TeamLeader::getPayment()
{
	payment = Programmer::getPayment() + getPaymentbyHeading();
	return payment;
}

Manager::Manager(string name, unsigned int id, string position, string project, float contribution)
	:Employee(name, id)
{
	this->position = position;
	this->project = project;
	this->contribution = contribution;
}

float Manager::getPaymentbyProject()
{
	return projects[project] * contribution;
}

float Manager::getPayment()
{
	payment = getPaymentbyProject();
	return payment;
}

ProjectManager::ProjectManager(string name, unsigned int id, string position, string project, float contribution, unsigned int subordinates)
	: Manager(name, id, position, project, contribution)
{
	this->subordinates = subordinates;
}

float ProjectManager::getPaymentbyHeading()
{
	return subordinates * 500;
}

float ProjectManager::getPayment()
{
	payment = getPaymentbyProject() + getPaymentbyHeading();
	return payment;
}

SeniorManager::SeniorManager(string name, unsigned int id, string position, string project, float contribution, unsigned int subordinates)//, float budget)
	:ProjectManager(name, id, position, project, contribution, subordinates) {};