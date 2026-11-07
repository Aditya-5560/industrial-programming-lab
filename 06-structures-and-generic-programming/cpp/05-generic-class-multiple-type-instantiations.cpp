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
    Arithmatic <int> aobj1(10,11);
    Arithmatic <float> aobj2(10.5f,11.6f);

    cout<<"Addition is : "<<aobj1.addition()<<"\n";
    cout<<"Addition is : "<<aobj2.addition()<<"\n";

    return EXIT_SUCCESS;
}