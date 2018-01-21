#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	if(argc < 2 or argc < 1 or argc == 0)
		{
			cout << "Run: read [PATH_TO_RIF] [KEY_TO_INDEX]" << endl;
			return 1;
		}
	std::string path = argv[1];
	std::string key = argv[2];
	std::string line;
	std::string sum;
    std::string x;
    ifstream inFile;
    std::string tmp_x;
    inFile.open(path.c_str());
    while(getline(inFile, x))
    {
    	if(x.find("["+key+"] => ") != std::string::npos)
    	{
    		std::string start = "["+key+"] => ";
    		size_t found_text = x.find(start);
    		x.replace(found_text, start.length(), "");
    		cout << x << endl;
    	}
    }
	return 0;
}