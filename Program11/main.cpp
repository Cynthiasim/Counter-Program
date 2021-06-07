//  File name: main.cpp
//  Programmer: Cynthia Simon
//  Course: Prorgramming Fundamentals II (COSC 1337)
//  Professor: Isaac K. Gang
//  Institution: Texas A&M University-Commerce

//  Problem: Counter Program
//  Due date: 4/29/19

#include <iostream>
using namespace std;

class counterType
{
public: counterType()
    {
        counter = 0;
    }
    void setCount(int c)
    {
        if(c>=0)
        {
            counter = c;
        }
    }
    int getCount()
    {
        return counter;
    }
    void increment()
    {
        counter++;
    }
    void decrement()
    {
        if(counter>0)
        {
            counter--;
        }
    }
private:
    int counter;
};
int main()
{
    counterType x;
    return 0;
}
