#include<iostream>
using namespace std;

template<class T>
class Arithmatic
{
    public:
        T No1;
        T No2;
        Arithmatic(T a,T b);
        T addition();
        T substraction();
};

template<class T>
Arithmatic :: Arithmatic(T a,T b)               //Error
{
    No1 = a;
    No2 = b;
}

template<class T>
T Arithmatic :: addition()                       //Error
{ 
    T Ans;
    Ans = No1+No2;
    return Ans;
}

template<class T>
T Arithmatic :: substraction()                     //Error
{
    T Ans;
    Ans = No1-No2;
    return Ans;
}

int main()
{
    Arithmatic<int> *aobj = new Arithmatic <int> (11,10);       

    cout<<aobj->addition()<<endl;

    return EXIT_SUCCESS;
}