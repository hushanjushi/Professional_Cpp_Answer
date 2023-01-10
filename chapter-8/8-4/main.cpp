#include <format>
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Person{
public:
	Person(const std::string& firstName, const std::string& lastName)
		: m_firstName{ firstName }, m_lastName{ lastName },m_firstLetters{m_firstName.substr(0,1)+m_lastName.substr(0,1)}
	{
	}

	Person(const std::string& firstName, const std::string& lastName,const std::string& firstLetters)
		: m_firstName{ firstName }, m_lastName{ lastName },m_firstLetters{firstLetters}
	{}

	Person() = default;

	const std::string& getFirstName() const { return m_firstName; }
	void setFirstName(const std::string& firstName) { m_firstName = firstName; }

	const std::string& getLastName() const { return m_lastName; }
	void setLastName(const std::string& lastName) { m_lastName = lastName; }

	const std::string& getFirstLetters() const { return m_firstLetters; }
	void setFirstLetters(const std::string& firstLetters) { m_firstLetters = firstLetters; }

private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_firstLetters;
};
int main(){
	Person anPerson{"A","B"};
	cout<<anPerson.getFirstName()<<" "<<anPerson.getLastName()<<" "<<anPerson.getFirstLetters()<<endl;
	auto otherPerson{make_unique<Person>(anPerson)};
	cout<<otherPerson->getFirstName()<<" "<<otherPerson->getLastName()<<" "<<otherPerson->getFirstLetters()<<endl;
	anPerson.setFirstName("F");
	anPerson.setLastName("G");
	*otherPerson=anPerson;
	cout<<otherPerson->getFirstName()<<" "<<otherPerson->getLastName()<<" "<<otherPerson->getFirstLetters()<<endl;
}