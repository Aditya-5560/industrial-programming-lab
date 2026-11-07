#include<iostream>
using namespace std;

template<class T>
T addition(T No1,T No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<addition(10,11)<<"\n";
    cout<<addition(10.5f,11.3f)<<"\n";
    cout<<addition(10.5,11.3)<<"\n";

    return EXIT_SUCCESS;
}