#include<bits/stdc++.h>
using namespace std;
class myvector
{
    private:
    int capacity;
    int size;
    int *elements;
    public:
    myvector()
    {
        capacity=10;
        elements=new int[capacity];
        size=0;
    }
    void push_back(int element)
    {
         int *newelement;
        if(size==capacity)
        {
           newelement=new int[2*capacity];
            for(int i=0;i<size;i++)
            {
                newelement[i]=elements[i];
            }
            elements=newelement;
            delete []newelement;
        }
        elements[size]=element;
        size++;
    }
    void pop_back()
    {
        if(size>0)
        {
            size--;
        }
        else
        {
            cout<<"empty vector"<<endl;
        }
    }
    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<elements[i]<<endl;
        }
    }
};
int main()
{
    myvector v;
    v.push_back(50);
    v.push_back(70);
    v.pop_back();
    v.print();
}
