#include <iostream>
#include <string>
#include <compare>
int main(){
    std::string s1,s2;
    getline(std::cin,s1);
    getline(std::cin,s2);

	if (is_lt(s1 <=> s2)) {
		std::cout << s1 << std::endl << s2 << std::endl;
	} else {
		std::cout << s2 << std::endl << s1 << std::endl;
	}
    return 0;
}