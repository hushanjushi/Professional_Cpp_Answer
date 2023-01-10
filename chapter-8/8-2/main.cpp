#include <format>
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Person{
public:
	Person(const std::string& firstName, const std::string& lastName)
		: m_firstName{ firstName }, m_lastName{ lastName }
	{}

	Person() = default;

	const std::string& getFirstName() const { return m_firstName; }
	void setFirstName(const std::string& firstName) { m_firstName = firstName; }

	const std::string& getLastName() const { return m_lastName; }
	void setLastName(const std::string& lastName) { m_lastName = lastName; }

private:
	std::string m_firstName;
	std::string m_lastName;
};

int main(){
	Person phoneBook[3];
}