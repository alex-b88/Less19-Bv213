#pragma once
#include<vector>
#include<algorithm>
#include"Employee.h"
#include"Outstaff.h"
#include"Staff.h"

class Department
{
protected:
	vector<Employee*> base;
public:
	void addItem(Employee* obj);
	void show()const;
};

