#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int main()
{
	#ifdef _WIN32
		cout << "Windows was detected as main operating system.";
		#ifdef _WIN66
			//No operation
		#else
			cout << "Some problems may arise with 32-bit windows"<<endl;
		#endif
		system("copy windows/read.exe read.exe");
		system("copy windows/write.exe write.exe");
		return 0;
	#elif __linux__
		cout << "Linux-based distribution detected as main operating system." <<endl;
		system("cp linux/read read");
		system("cp linux/write write");
		return 0;
	#elif __APPLE__
		cout << "Mac is not yet supported..." << endl;
		return 1;
	#endif
}