#include <iostream>
#include "stdafx.h"

using namespace std;

#ifdef LOGANALYZER_EXPORTS
#define LOGANALYZER_API __declspec(dllexport)
#else
#define LOGANALYZER_API __declspec(dllimport)
#endif

class CFileExtMng{
public:
	CFileExtMng();
	virtual ~CFileExtMng();
	virtual bool isExtensionValid(std::string name) = 0 ;

};

extern LOGANALYZER_API int nLogAnalyzer;

LOGANALYZER_API int fnLogAnalyzer(void);