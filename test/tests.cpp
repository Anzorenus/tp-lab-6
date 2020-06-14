#include "gtest/gtest.h"
#include "Abstracts.h"
#include "Interfaces.h"
#include "Positions.h"

TEST(lab6, task1)
{
	Driver* emp = new Driver("Alex", 77, 300, "Driver", 1.5);
	unsigned int res = emp->getId();
	EXPECT_EQ(77, res);
}

TEST(lab6, task2)
{
	Driver* emp = new Driver("Alex", 78, 300, "Driver", 1.5);
	string res = emp->getName();
	EXPECT_EQ("Alex", res);
}

TEST(lab6, task3)
{
	Driver* emp = new Driver("Alex", 79, 300, "Driver", 1.5);
	emp->setWorkTime(40);
	unsigned int res = emp->getWorkTime();
	EXPECT_EQ(40, res);
}


TEST(lab6, task4)
{
	Driver* emp = new Driver("Alex", 1, 400, "Driver", 1.5);
	emp->setWorkTime(10);
	float res = emp->getPayment();
	EXPECT_EQ(6000, res);
}