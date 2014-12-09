#ifndef TOOL_H
#define TOOL_H

class Tool : public Object
{
public: 
    Tool(int argc);
    ~Tool();

    bool exec();

protected:
    checkArgs();

protected:
    vector<Element> inParams;
    vector<Element> outParams;
};

#endif
