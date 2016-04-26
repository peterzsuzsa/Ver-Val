#include "LogAnalyzer.h"

int main()
{
	LogAnalyzer mc;
	if (mc.endsWith("valami") == true)
		cout << "valami -> helyes" << endl;
	else
		cout << "valami -> nem helyes" << endl;

	if(mc.isValidFileName("p1") == true)
		cout << "helyes";
	else
		cout << "helytelen";
}