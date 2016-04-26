#include <iostream>
#include <string.h>
#include "FileExtMng.h"
using namespace std;

class LogAnalyzer
{
private:
	FakeFileExtMng* logFem;
public:
	LogAnalyzer(FakeFileExtMng* fem);
	LogAnalyzer();
	~LogAnalyzer();	
	bool endsWith(string s);
	bool isValidFileName(string s);
};


class rosszfilenev : public exception {

 public:
    const char *what() { return "Invalid"; };
};
