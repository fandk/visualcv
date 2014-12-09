#ifndef ELEMENTFACTORY_H
#define ELEMENTFACTORY_H

#include "element.h"

enum ELEMTYPE
{
	ELEM_BOOL = 0x1000,
	ELEM_INT,
	ELEM_FLOAT,
	ELEM_DOUBLE,
	ELEM_POINT,
	ELEM_LINE,
	ELEM_POLYGON,
	ELEM_RECT,	
};

class ElmentFactory
{
public:
	ElmentFactory();
	~ElmentFactory();

	static Element* createElement(int elemType);

protected:
	
};

#endif
