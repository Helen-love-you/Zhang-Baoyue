/*
 *File:		main.cpp
 *Author:	Zhangbaoyue
 *Time:		2018/6/19
 */
#include "staff.h"
int main()
{
	int num = 1999;
	string name = "20163684ZJH";
	char sex = 'M';

	cout<<"This is the information of the first staff:"<<endl;
	cout<<"Number\tName\tSex"<<endl;
	staff stu;
	stu.display();

	cout<<"This is the information of the second staff:"<<endl;
	cout<<"Number\tName\tSex"<<endl;
	staff stu1 = staff(num , name , sex);
	stu1.display();
	
	cout<<"This is the information of the third staff:"<<endl;
	cout <<"Number\tName\tSex"<<endl;
	staff stu2;
	stu2.display();
	cout<<"After giving the third staff new information:"<<endl;
	cout<<"Number\tName\tSex"<<endl;
	stu2.setNumber(num);
	stu2.setName(name);
	stu2.setSex(sex);
	stu2.display();

	cout<<"Now, the first staff's Number is "<<stu.getNumber()<<endl;
	cout<<"The second staff's Name is "<<stu1.getName()<<endl;
	cout<<"The third staff's Sex is "<<stu2.getSex()<<endl;

	return 0;
}