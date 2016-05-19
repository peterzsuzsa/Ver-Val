// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the L3_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// L3_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef L3_EXPORTS
#define L3_API __declspec(dllexport)
#else
#define L3_API __declspec(dllimport)
#endif

#include <string.h>
#include <iostream>
using namespace std;

class L3_API FileExtMng{
public:
	FileExtMng();
	virtual ~FileExtMng();
	virtual bool isExtensionValid(std::string name) = 0;

};

class L3_API FakeFileExtMng :public FileExtMng{
private:
	bool v;
public:
	FakeFileExtMng();
	~FakeFileExtMng();
	bool isExtensionValid(std::string name);
	void setErtek(bool v);
};

// This class is exported from the L3.dll
class L3_API CLogAnalyzer {
	FakeFileExtMng* logFem;
public:
	CLogAnalyzer(void);
	bool endsWith(char* s);
	bool isTheFileValid(string s);
	CLogAnalyzer(FakeFileExtMng* fem);
	//bool isValidFileName(string s);
	// TODO: add your methods here.
};

class invalidFileName : public exception {
public:
	const char *what() { return "File name is invalid"; };
};

class someException : public exception {
public:
	const char *what() { return "Some other exception."; };
};

extern L3_API int nL3;

L3_API int fnL3(void);
