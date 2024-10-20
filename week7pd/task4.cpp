#include <iostream>
using namespace std;
int triangularnumber(int);
main()
{
    int num;
    cout<<"enter the number of triangle: ";
    cin>>num;
    int result=triangularnumber(num);
    cout<<"Dots in the triangle: "<<result;
}
int triangularnumber(int num)
{
int a;
a=(num*(num+1))/2;
return a;
}