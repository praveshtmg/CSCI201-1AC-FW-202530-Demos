#ifndef POINTER_H
#define POINTER_H

class pointerClass
{
public:
    pointerClass(int);
    pointerClass(const pointerClass &); // copy constructor
    ~pointerClass();
    void addItem(int);

private:
    int max;
    int count;
    int *list;
};

#endif