#ifndef OBJECT_H
#define OBJECT_H

class Object
{
public:
    Object(int type, const string &name);
    ~Object();

protected:
    int type;
    string name;
};

#endif
