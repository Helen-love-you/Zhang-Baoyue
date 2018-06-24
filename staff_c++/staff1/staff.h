/*
 *File:		staff.h
 *Author:	Zhangbaoyue
 *Time:		2018/6/19
 */
#include <iostream>
#include <string>
using namespace std;
/*
 *The staff class ,describe a staff
 */
class staff{
private:
	int number;	//The unique number of staff
	string name;
	char sex;	//Use 'F' to replace famale and 'M' to replace male
public:
	staff();				//To initialize the staff infomation
	staff(int , string , char );	//To initialize the staff infomation
	void setNumber(int );	//To set the staff number
	int getNumber();		//To get the staff number
	void setName(string );	//To set the staff name
	string getName();		//To get the staff name
	void setSex(char );	//To set the staff sex
	char getSex();			//To get the staff sex
	void display();			//Output the staff infomation
	~staff();
};
