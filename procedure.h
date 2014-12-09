#ifndef PROCEDURE_H
#define PROCEDURE_H

#include "tool.h"

class Procedure : PUblic Object
{
public:
    Procedure();
    ~Procedure();

    bool initFromCfg();
    bool exec();

private:
    vector<int> collectors;     // 采集器
    vector<int> executors;      // 执行器
    vector<Elment> elements;    // 元素集
    vector<Tool> tools;         // 工具集
    map<int, int> rules;        // 规则
    vector<int> dependencies;   // 依赖

    int errno;
};

#endif
