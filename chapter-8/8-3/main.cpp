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

	// Copy constructor.
	Person(const Person& src)
		: m_firstName{ src.m_firstName }, m_lastName{ src.m_lastName }
	{
		std::cout << "Person copy constructor called." << std::endl;
	}

	// Assignment operator.
	Person& operator=(const Person& rhs)
	{
		std::cout << "Person assignment operator called." << std::endl;

		if (this != &rhs) {
			m_firstName = rhs.m_firstName;
			m_lastName = rhs.m_lastName;
		}
		return *this;
	}

	// Destructor.
	~Person() { std::cout << "Person destructor called." << std::endl; }

	const std::string& getFirstName() const { return m_firstName; }
	void setFirstName(const std::string& firstName) { m_firstName = firstName; }

	const std::string& getLastName() const { return m_lastName; }
	void setLastName(const std::string& lastName) { m_lastName = lastName; }

private:
	std::string m_firstName;
	std::string m_lastName;
};
int main(){
	Person anPerson{"A","B"};
	cout<<anPerson.getFirstName()<<" "<<anPerson.getLastName()<<endl;
	auto otherPerson{make_unique<Person>(anPerson)};
	cout<<otherPerson->getFirstName()<<" "<<otherPerson->getLastName()<<endl;
	anPerson.setFirstName("F");
	anPerson.setLastName("G");
	*otherPerson=anPerson;
	cout<<otherPerson->getFirstName()<<" "<<otherPerson->getLastName()<<endl;
}