#include<iostream>
using namespace std;

double addition(double No1,double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

float addition(float No1,float No2)
{
    float Ans;
    Ans = No1 + No2;
    return Ans;
}

int addition(int No1,int No2)
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