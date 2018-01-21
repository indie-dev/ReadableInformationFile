#include <iostream>
#include <fstream>
#include<string>
#include<cstdlib>
using namespace std;

static string PATH;


static void setPath(string path)
{
	PATH = path;
}

void write(string key, string value)
{
	ofstream file;
	file.open(PATH.c_str());
	string command = "["+key+"] => "+value+"\n";
	file << command.c_str();
	file.close();
}


int main(int argc, char** argv)
{
	if(argc < 3|| argc < 2 || argc == 0)
	{
		cout << "Run: write [PATH_TO_RIF_FILE] [KEY] [VALUE]" << endl;
		return 1;
	}
	string path = std::string(argv[1]);
	if(path.find(".rif") != std::string::npos)
	{
		setPath(argv[1]);
	}else
	{
		path = path + ".rif";
		setPath(path);
	}
	write(argv[2], argv[3]);
	return 0;
}