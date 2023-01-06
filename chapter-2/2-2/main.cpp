#include <iostream>
#include <string>

const std::string replace_string(std::string haystack, const std::string& needle,const std::string& replace_str){
	return haystack.replace(haystack.find(needle),needle.size(),replace_str);
}
int main(){
    std::string s1,s2;
    std::cout<<replace_string("Hello world","world","C++ world")<<std::endl;
    return 0;
}