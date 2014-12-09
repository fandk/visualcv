#include <iostream>
#include "procedure.h"
#include "tool.h"
#include "element.h"

using namespace std;

int main()
{
	Procedure procedure;

	procedure.initFromCfg();
	procedure.exec();
	
	return 0;
}
