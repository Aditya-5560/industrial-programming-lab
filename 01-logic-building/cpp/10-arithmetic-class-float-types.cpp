#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        float No1;
        float No2;
        Arithmatic(float a,float b)
        {
            No1 = a;
            No2 = b;
        }
        float addition()
        {
            float Ans;
            Ans = No1+No2;
            return Ans;
        }
};

int main()
{
    Arithmatic aobj1(10.0f,11.6f);

    Arithmatic aobj2(20.0f,21.6f);

    cout<<"Addition is : "<<aobj1.addition()<<"\n";

    cout<<"Addition is : "<<aobj2.addition()<<"\n";

    return EXIT_SUCCESS;
}