#pragma once
#include <iostream>
#include <string>
class Employee
{
	std::string surname;
	int birthYear;
	std::string position;
	float salary;
	std::string education;
public:
	Employee() {
		surname = "#####";
		birthYear = 0;
		position = "#####";
		salary = 0;
		education = "#####";
	}
	Employee(std::string surname, int birthYear, std::string position, float salary, std::string education) {
		setSurname(surname);
		setBirthYear(birthYear);
		setPosition(position);
		setSalary(salary);
		setEducation(education);
	}
	std::string getSurname()const {
		return surname;
	}
	int getBirthYear()const {
		return birthYear;
	}
	std::string getPosition()const {
		return position;
	}
	float getSalary()const {
		return salary;
	}
	std::string getEducation()const {
		return education;
	}

	void setSurname(std::string surname) {
		this->surname = surname;
	}
	void setBirthYear(int birthYear) {
		this->birthYear = birthYear;
	}
	void setPosition(std::string position) {
		this->position = position;
	}
	void setSalary(float salary) {
		this->salary = salary;
	}
	void setEducation(std::string education) {
		this->education = education;
	}
	void show()const {
		std::cout << "Surname: " << surname << std::endl;
		std::cout << "Birth Year: " << birthYear << std::endl;
		std::cout << "Position: " << position << std::endl;
		std::cout << "Salary: " << salary << std::endl;
		std::cout << "Education: " << education << std::endl;
	}
};

