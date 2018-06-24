/*
 *File:		staff.cpp
 *Author:	Zhangbaoyue
 *Time:		2018/6/19
 */
#include "staff.h"
/*
 *Initialize the staff infomation
 *set 
 */
staff::staff()
{
	number = 000;
	name = "***";
	sex = 'X';
}

staff::staff(int number,string name,char sex)
{
	this -> number = number;
	this -> name = name;
	this -> sex = sex;
}

void staff::setNumber(int number)
{
	this -> number = number;
}
int staff::getNumber()
{
	return this -> number;
}

void staff::setName(string name)
{
	this -> name = name;
}
string staff::getName()
{
	return this -> name;
}

void staff::setSex(char sex)
{
	this -> sex = sex;
}
char staff::getSex()
{
	return this -> sex;
}
void staff::display()
{
	cout<<number<<"\t"<<name<<"\t"<<sex<<endl;
}

staff::~staff()
{
}
