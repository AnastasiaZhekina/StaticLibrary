#include <iostream> 
#include <windows.h> 
#include "../StaticLibrary/Creet.h" 
using namespace std;


int main() {

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Creeter person;
	person.greet();
}
