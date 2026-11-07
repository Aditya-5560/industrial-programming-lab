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
    Arithmatic<int> *aobj = new Arithmatic <int> (11,10);       

    cout<<aobj->addition()<<endl;

    return EXIT_SUCCESS;
}