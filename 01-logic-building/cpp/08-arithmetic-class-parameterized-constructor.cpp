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
    Arithmatic aobj(10,11);

    cout<<"Addition is : "<<aobj.addition()<<"\n";

    return EXIT_SUCCESS;
}