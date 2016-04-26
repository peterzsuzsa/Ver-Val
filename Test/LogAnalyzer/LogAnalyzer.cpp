#include "LogAnalyzer.h"
//#include "FileExtMng.h"

bool LogAnalyzer:: endsWith(string s)
{
	string slr = "slr";
	int j = s.length()-1;
	for (int i = slr.length()-1; i >= 0; i--)
	{
		if (s[j] != slr[i])
			return false;
		j--;
	}
	return true;
}

bool LogAnalyzer:: isValidFileName(string s)
{
	//return logFem->setErtek(s);
	try{
	if (s.length() < 3)
		throw(rosszfilenev());
	else 
		return true;
	}
	catch(string e){
		cout<<"Hiba";
	}
}
/*
LogAnalyzer::LogAnalyzer(FakeFileExtMng* fem){
	logFem=fem;
}

LogAnalyzer::~LogAnalyzer(){
}*/