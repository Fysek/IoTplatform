#include "../Headers/data.h"

Data::Data() {
    m_name = "";
    m_value = "";
}

Data::Data(
    std::string name,
    std::string value
)
{
    m_name = name;
    m_value = value;
}

void Data::printData() {
    std::cout << m_name << ": " << m_value << std::endl;
}

void Data::setName(std::string name) { m_name = name; }
void Data::setValue(std::string value) { m_value = value; }

std::string Data::getName() { return m_name; }
std::string Data::getValue() { return m_value; }
