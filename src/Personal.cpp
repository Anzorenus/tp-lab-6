//
// Created by Anton Korkunov on 18/02/2020.
//

#include "Employee.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Personal.h"

using namespace std;

Personal::Personal(float _payrate,int _id, string _FIO, int _worktime,string _Prof): Employee(_id,  _FIO,  _worktime, _Prof ) {
    payrate=_payrate;
}

double Driver::WorkTime_Payment(){
    this->payment += worktime * payrate;
    return worktime * payrate;
}

void Driver::Payday(){
    Employee::Payday();
    cout<<"|Money from WorkTime ="<<getMoney()-350<<"| bonus money = 350 |Driver| ";
    cout<<"\n";
}

double Driver::Calculate() {
       WorkTime_Payment();
       payment+=350;
       return payment;
}

double Cleaner::WorkTime_Payment(){
    this->payment += worktime * payrate;
    return worktime * payrate;
}

void Cleaner::Payday(){
    Employee::Payday();
    cout<<"|Money from WorkTime ="<<getMoney()<<"| |Cleaner| ";
    cout<<"\n";
}

double Cleaner::Calculate() {
    WorkTime_Payment();
    return payment;
}