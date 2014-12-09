#ifndef TOOLFACTORY_H
#define TOOLFACTORY_H

enum TOOL_TYPE
{
	TOOL_LOCATOR = 0x2000,
}

class ToolFactory
{
public:
	ToolFactory();
	~ToolFactory();

	static Tool* createTool(int toolType);

private:
	
};

#endif
