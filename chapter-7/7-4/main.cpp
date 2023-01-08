#include <format>
#include <iostream>
#include <memory>
#include <string>

using namespace std;

void fillWithM(string& text){
	for(auto& i:text){
		i='m';
	}
}

int main(){
	string hello{ "Hello world!" };
	cout << "Before: " << hello << endl;

	fillWithM(hello);

	cout << "After:  " << hello << endl;
}