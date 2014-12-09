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
    vector<int> collectors;     // �ɼ���
    vector<int> executors;      // ִ����
    vector<Elment> elements;    // Ԫ�ؼ�
    vector<Tool> tools;         // ���߼�
    map<int, int> rules;        // ����
    vector<int> dependencies;   // ����

    int errno;
};

#endif
