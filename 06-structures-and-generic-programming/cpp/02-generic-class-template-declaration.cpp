#include<iostream>
using namespace std;

template<class T>
class Arithmatic
{
    public:
        T No1;
        T No2;
        Arithmatic(T a,T b)
        {
            No1 = a;
            No2 = b;
        }
        T addition()
        {
            T Ans;
            Ans = No1+No2;
            return Ans;
        }
        T substraction()
        {
            T Ans;
            Ans = No1-No2;
            return Ans;
        }
};

int main()
{
    //Arithmatic aobj1(10.0,11.6);
    //Arithmatic aobj2(20.0,21.6);

    //cout<<"Addition is : "<<aobj1.addition()<<"\n";
    //cout<<"Addition is : "<<aobj2.addition()<<"\n";

    //cout<<"Substraction is : "<<aobj1.substraction()<<"\n";
    //cout<<"Substraction is : "<<aobj2.substraction()<<"\n";

    return EXIT_SUCCESS;
}