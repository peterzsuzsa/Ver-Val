#include "LogAnalyzer.h"


bool LogAnalyzer:: endsWith(string s)
{
	string slr = "slf";
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
	if (s.length() < 3)
		//throw(someException());
		throw(invalidFileName());
	else 
		return true;
} 

int main()
 {
 	LogAnalyzer mc;
 	if (mc.endsWith("ggggg") == true)
 		cout << "ggggg -> helyes" << endl;
 	else
 		cout << "ggggg -> nem helyes" << endl;
 
 	if (mc.endsWith("akarmislf") == true)
 		cout << "akarmislr -> helyes" << endl;
 	else
 		cout << "akarmislr -> nem helyes" << endl;
 }