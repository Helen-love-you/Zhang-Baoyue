/*
 *File:		staff.java
 *Author:	Zhangbaoyue
 *Date:		2018/6/13
  */
/*
 *A class to discribe one staff's information
 */
class a_staff{
	private int number;		//To discribe a staff's number
	private String name;	//To discribe a staff's name
	private String sex;		//To discribe a staff's sex,such as "F" or "M"

	//To initialize the information of a staff by meaningless values
	public a_staff()
	{
		this.number = 0000;
		this.name = "***";
		this.sex = "X";
	}

	//To initialize the information of a staff by customize values
	public a_staff(int number,String name,String sex)
	{
		this.number = number;
		this.name = name;
		this.sex = sex;
	}

	//To set the number of a staff by customize value
	public void setNumber(int number)
	{
		this.number = number;
	}

	//To get the number of a staff with integer
	public int getNumber()
	{
		return number;
	}

	//To set the name of a staff by customize string
	public void setName(String name)
	{
		this.name = name;
	}

	//To get the name of a staff
	public String getName()
	{
		return name;
	}

	//To set the sex by customize letter,"F" or "M"
	public void setSex(String sex)
	{
		this.sex = sex;
	}

	//To get the sex of a staff 
	public String getSex()
	{
		return sex;
	}

	//To display the information of a staff,incluing number,name and sex
	public void display()
	{
		System.out.println("Number\tName\tSex");
		System.out.println(number+"\t"+name+"\t"+sex);
	}
};
/*
 * The class to test the a_staff class
 */
public class staff{
	public static void main(String args[])
	{
		int number = 1999;
		String name = "20163684ZJH";
		String Sex = "M";
		
		//define a staff with void value,using the default value
		System.out.println("The information of the first staff:");
		a_staff stu1 = new a_staff();
		stu1.display();

		//define a staff with customize value
		System.out.println("The information of the second staff:");
		a_staff stu2 = new a_staff(number,name,Sex);
		stu2.display();

		//define a staff with default value,and modify the value by functions
		System.out.println("The information of the third staff:");
		a_staff stu3 = new a_staff();
		stu3.display();

		//modifying by functions
		System.out.println("After giving ,the information of the third staff:");
		stu3.setNumber(number);
		stu3.setName(name);
		stu3.setSex(Sex);
		stu3.display();

		//get the values by functions in the class
		System.out.println("The number of the first staff is "+stu1.getNumber());
		System.out.println("The name of the second staff is "+stu2.getNumber());
		System.out.println("The sex of the third staff is "+stu3.getNumber());
	}
};

