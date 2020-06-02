#ifndef DATA_H
#define DATA_H

#include <string>
#include <iostream>

class Data {
private:
	std::string m_name;
	std::string m_value;

public:
	Data();
	Data(
		std::string name,
		std::string value
	);

	void printData();

	void setName(std::string name);
	void setValue(std::string value);

	std::string getName();
	std::string getValue();

};

#endif
