#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1;
        int No2;
        Arithmatic(int a,int b)
        {
            No1 = a;
            No2 = b;
        }
        int addition()
        {
            int Ans;
            Ans = No1+No2;
            return Ans;
        }
};

int main()
{
    Arithmatic aobj1(10,11);

    Arithmatic aobj2(20,21);

    cout<<"Addition is : "<<aobj1.addition()<<"\n";

    cout<<"Addition is : "<<aobj2.addition()<<"\n";

    return EXIT_SUCCESS;
}