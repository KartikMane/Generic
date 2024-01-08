#include<iostream>
using namespace std;

template<class T>
class arrithmetic
{
    T a;
    T b;
    public:
        arrithmetic(T a , T b)
        {
            this->a=a;
            this->b=b;
        }
        T add();
        T sub();        
};

template<class T>

T arrithmetic<T>:: add()
{
    T c;
    c=a+b;
    return c;
}

template <class T>
T arrithmetic<T> :: sub()
{
    T c;
    c=a-b;
    return c;
}

int main()
{
    arrithmetic<int> t(4,5);
    cout<<t.add()<<endl;
    cout<<t.sub()<<endl;

    arrithmetic<float> t1(1.3,3.0);
    cout<<t1.add()<<endl;
    cout<<t1.sub()<<endl;
    return 0;
}