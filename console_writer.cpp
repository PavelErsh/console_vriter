#include <string>
#include <iostream>
#include <fstream>

using namespace std;

const short int SIZE = 100;
const int LSIZE = 10000;

const string CSDesktop = "C:\\Users\\pavel\\Desktop\\";

void CreateFile_Desktop(char file_name[], int SIZE)
{

	ifstream open_file;
	
	string Sdirectori = CSDesktop + file_name;

	const char* CCdirectori = Sdirectori.c_str();

	open_file.open(CCdirectori, ios::app);//open correct directori from file

}

void WriteFrom_Directori(char file_name[], int SIZE, char input_file[], int LSIZE) 
{
	string Sdirectori = CSDesktop + file_name;

	const char* CCdirectori = Sdirectori.c_str();

	ofstream file(CCdirectori);

	if (!file.is_open())
		cout << "not open file!\n";

	else
	{
		file << input_file; // write from file
		cout << input_file << endl; 
	}
}

void WriteFrom_CastomDirectori(char directori[], int LSIZE, char file_name[], int SIZE, char input_file[1000]) 
{
	string SCastomdirectori = directori;
	string Sdirectori = SCastomdirectori + file_name;

	const char* CCdirectori = Sdirectori.c_str();

	ofstream file(CCdirectori);

	if (!file.is_open())
		cout << "not open file!\n";

	else
	{
		file << input_file; // write from file
		cout << input_file << endl;
	}
}

int main()
{

	cout << "Enter file name: ";

	char file_name[SIZE];
	cin.getline(file_name, SIZE);

	CreateFile_Desktop(file_name, SIZE);

	cout << "Enter text from file: ";

	char input_file[LSIZE];
	cin.getline(input_file, LSIZE);

	WriteFrom_Directori(file_name, SIZE, input_file, LSIZE);

	return 0;
}


