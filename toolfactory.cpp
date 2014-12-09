#include "toolfactory.h"

ToolFactory::ToolFactory()
{

}

ToolFactory::~ToolFactory()
{

}

static Tool* ToolFactory::createTool(int toolType)
{
    Tool* tool = NULL;

    switch (toolType)
    {
    case TOOL_LOCATOR:
        tool = new ToolLocator();
        
    default:
        tool = NULL;
    }

    return tool;
}

