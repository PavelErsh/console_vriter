#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

const int SIZE = 200;
const int LSIZE = 100000;

void CreateFile(char file_name[], int SIZE ) {
	ifstream open_file;

	string directori = "C:\\Users\\pavel\\Desktop\\";
	directori += file_name;

	const char* CCdirectori = directori.c_str();

	open_file.open(CCdirectori, ios::app);//open correct directori from file
}


void WriteFile(char input_file[], int LSIZE, char file_name[], int SIZE ) {
	cin.getline(input_file, LSIZE);

	ofstream file(file_name);

	if (!file.is_open())
		cout << "not open file!\n";

	else
	{
		file << input_file; // write from file
		cout << input_file << endl; // print 
	}

	file.close();
}

int main ()
{

	cout << "Enter file name: ";
	char file_name[SIZE];
	cin.getline(file_name, SIZE);

	CreateFile(file_name, SIZE);
	
	cout << "Enter text from file: ";
	char input_file[LSIZE];

	WriteFile(input_file, LSIZE, file_name, SIZE);

	return 0;
}

