#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        double No1;
        double No2;
        Arithmatic(double a,double b)
        {
            No1 = a;
            No2 = b;
        }
        double addition()
        {
            double Ans;
            Ans = No1+No2;
            return Ans;
        }
        double substraction()
        {
            double Ans;
            Ans = No1-No2;
            return Ans;
        }
};

int main()
{
    Arithmatic aobj1(10.0,11.6);

    Arithmatic aobj2(20.0,21.6);

    cout<<"Addition is : "<<aobj1.addition()<<"\n";
    cout<<"Addition is : "<<aobj2.addition()<<"\n";

    cout<<"Substraction is : "<<aobj1.substraction()<<"\n";
    cout<<"Substraction is : "<<aobj2.substraction()<<"\n";

    return EXIT_SUCCESS;
}