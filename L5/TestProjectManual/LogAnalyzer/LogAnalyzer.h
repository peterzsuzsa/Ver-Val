// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LOGANALYZER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LOGANALYZER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LOGANALYZER_EXPORTS
#define LOGANALYZER_API __declspec(dllexport)
#else
#define LOGANALYZER_API __declspec(dllimport)
#endif

#include <iostream>
#include "stdafx.h"
#include <memory>
using namespace std;
// This class is exported from the LogAnalyzer.dll
class LOGANALYZER_API CLogAnalyzer {
	std::shared_ptr<WebService> webService;

public:
	CLogAnalyzer(const std::shared_ptr<WebService>& webService);
	bool endsWith(char* s);
	bool isTheFileValid(std::string s);
};

class invalidFileName : public std::exception {

public:
	const char *what() { return "File name is invalid"; };
};

extern LOGANALYZER_API int nLogAnalyzer;

LOGANALYZER_API int fnLogAnalyzer(void);
