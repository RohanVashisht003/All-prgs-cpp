#include<iostream>
using namespace std;

class vect()
{
public:
    int *arr;
    int siz_e;
    int capacity;

    vect()
    {
        siz_e=0;
        capacity=2;
        arr=new int[capacity];
    }
};

class vect_or:public vect
{
    void push_back(int data)
    {
        siz_e++;
    }
};

