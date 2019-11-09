#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	cout << "Enter file name: ";
	char file_name[100];
	cin.getline(file_name, 100);

	ifstream open_file;

	string directori = "C:\\Users\\pavel\\Desktop\\";
	directori += file_name;

	const char* CCdirectori = directori.c_str();

	open_file.open(CCdirectori, ios::app);//open correct directori from file

	cout << "Enter text from file: ";
	char input_file[1000];
	cin.getline(input_file, 100);

	ofstream file(file_name);

	if (!file.is_open()) 
		cout << "not open file!\n";
	
	else
	{
		file << input_file; // write from file
		cout << input_file << endl; // print 
	}

	return 0;
}

