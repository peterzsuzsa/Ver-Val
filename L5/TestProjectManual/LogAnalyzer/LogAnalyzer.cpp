// LogAnalyzer.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "LogAnalyzer.h"


// This is an example of an exported variable
LOGANALYZER_API int nLogAnalyzer=0;

// This is an example of an exported function.
LOGANALYZER_API int fnLogAnalyzer(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see LogAnalyzer.h for the class definition
CLogAnalyzer::CLogAnalyzer(const std::shared_ptr<WebService>& webService)
{
	this->webService = webService;
}

bool CLogAnalyzer::endsWith(char* s)
{
	char* slf = "slf";
	int j = strlen(s) - 1;
	for (int i = strlen(slf) - 1; i >= 0; i--)
	{
		if (s[j] != slf[i])
			return false;
		j--;
	}
	return true;
}

bool CLogAnalyzer::isTheFileValid(string s)
{
	if (s.size() < 5)
		webService->logError(s);
	//...
	return true; //TODO modify this
}
