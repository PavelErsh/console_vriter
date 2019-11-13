#include <string>
#include <iostream>
#include <fstream>

using namespace std;

const short int SIZE = 100;
const int LSIZE = 10000;

const string CSDesktop = "C:\\Users\\pavel\\Desktop\\";

void CreateFile_Desktop(string file_name)
{

	ifstream open_file;
	
	string Sdirectori = CSDesktop + file_name;

	const char* CCdirectori = Sdirectori.c_str();

	open_file.open(CCdirectori, ios::app);//open correct directori from file

}

void WriteFrom_Directori(string file_name, string input_file) 
{
	string Sdirectori = CSDesktop + file_name;

	const char* CCdirectori = Sdirectori.c_str();

	ofstream file(CCdirectori);

	if (!file.is_open())
		cout << "not open file!\n";

	else
	{
		file << input_file; // write from file
		cout << input_file << endl; // print 
	}
}

int main()
{

	cout << "Enter file name: ";
	string file_name;
	cin >> file_name;
	CreateFile_Desktop(file_name);

	cout << "Enter text from file: ";
	string input_file;
	cin >> input_file;

	WriteFrom_Directori(file_name, input_file);
}


