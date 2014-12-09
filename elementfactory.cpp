#include "elementfactory.h"

ElementFactory::ElementFactory()
{
    
}

ElementFactory::~ElementFactory()
{
    
}

static Element* ElementFactory::createElement(int elemType)
{
    Elment *element = NULL;

    switch (elemType)
    {
    case ELEM_BOOL:
        element = new ;

    default:
        element = NULL;
    }

    return element;
}

