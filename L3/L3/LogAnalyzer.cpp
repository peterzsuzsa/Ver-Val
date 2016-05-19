// L3.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "LogAnalyzer.h"


// This is an example of an exported variable
L3_API int nL3=0;

// This is an example of an exported function.
L3_API int fnL3(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see L3.h for the class definition
CLogAnalyzer::CLogAnalyzer()
{
	return;
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
	if (s.length() < 3)
		//throw(someException());
		throw(invalidFileName());
	else
		return true;
}

CLogAnalyzer::CLogAnalyzer(FakeFileExtMng* fem){
	logFem = fem;
}


FileExtMng::FileExtMng(){

}

FileExtMng::~FileExtMng(){

}

FakeFileExtMng::FakeFileExtMng(){

}

FakeFileExtMng::~FakeFileExtMng(){

}

bool FakeFileExtMng::isExtensionValid(string name){
	return v;
}

void FakeFileExtMng::setErtek(bool vNev){
	v = vNev;
}