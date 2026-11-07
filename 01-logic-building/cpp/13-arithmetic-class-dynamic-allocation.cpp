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
    Arithmatic *aobj = new Arithmatic(10.5,11.6);

    cout<<aobj->addition()<<endl;

    return EXIT_SUCCESS;
}