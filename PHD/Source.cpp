#include <string>
#include <iostream>

using namespace std;

//updateUserData func, call it form main
//after this, create class of person w/ all these data members+methods

void PrintUserData(string name, int age, float salary, string hobbies, int accountNumber)
{
	//m_name = "Siddharth";

	cout << endl << " ##--------------------------------------##"<<endl;
	cout << "User details are given below" << endl;
	cout << " Name : " << name << endl;
	cout << " Age : " << age << endl;
	cout << "Salary : " << salary << endl;
	cout << "hobbies :" << hobbies << endl;
	cout << "A/C No  :" <<accountNumber << endl;
}

void updateUserData(string& name, int& age, float& salary, string& hobbies, int& accountNumber)
{
	cout << endl << " ##--------------------------------------##" << endl;

	name += " Rawtani";
	age += 2;
	salary +=  45000.0;
	hobbies += " Video Games";
	accountNumber *= 100;

}



/*class Person
{
	public:

		std::string name;
		int age;
		float salary;
		std::string hobbies;
		int accountNumber;


		Person(string nm, int ag, float slr, string hby, int acn)
		{
			cout << endl << "--------New person has been created ----------" << endl;

			name = nm;

			age = ag;

			salary = slr;

			hobbies = hby;

			accountNumber = acn;
		};

		void PrintUserData()//(string name, int age, float salary, string hobbies, int accountNumber)
		{
			
			//cout << endl << " ##--------------------------------------##" << endl;
			//cout << "User details are given below" << endl;
			cout << " Name : " << name << endl;
			cout << " Age : " << age << endl;
			cout << "Salary : " << salary << endl;
			cout << "hobbies :" << hobbies << endl;
			cout << "A/C No  :" << accountNumber << endl;
		}


		void updateUserData()//(string& name, int& age, float& salary, string& hobbies, int& accountNumber)
		{
			//cout << endl << " ##--------------------------------------##" << endl;

			name += " Rawtani";
			age += 2;
			salary += 45000.0;
			hobbies += " Video Games";
			accountNumber *= 100;

		}


};*/



int main()
{
	
	std::string name;
	int age;
	float salary;
	std::string hobbies;
	int accountNumber;

	std::cout << "Input for name" << std::endl;
	cin >> name;

	cout << "Input for age" << endl;
	cin >> age;

	cout << "Input for salary" << endl;
	cin >> salary;

	cout << "Input for hobbies" << endl;
	cin >> hobbies;

	cout << "Input for A/C no." << endl;
	cin >> accountNumber;

	cout << "Initial values" << endl;
	PrintUserData(name,age,salary,hobbies,accountNumber);

	updateUserData(  name,  age,  salary,   hobbies,  accountNumber);

	cout << "value after update" << endl;
	PrintUserData(name, age, salary, hobbies, accountNumber);
	
	/*Person person1("Ayaan", 24, 0.0, "basketball", 123455);
	person1.PrintUserData();

	person1.updateUserData();

	cout <<endl << "##--- After update ---## " << endl;

	person1.PrintUserData();

	Person person2("Rohit", 28, 30000.0, "Cricket", 334455);

	person2.PrintUserData();

	person2.updateUserData();

	cout <<endl<< "##--- After update ---##" << endl;

	person2.PrintUserData();*/


	getchar();
	return 0;

}


