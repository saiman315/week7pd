#include <iostream>
using namespace std;
void amplified(int);
int main()
{
int num;
cout<<"enter a number:";
cin>>num;
amplified(num);
}
void amplified(int num)
{

    for(int i=1;i<=num;i++) 
    {
        if(i%4==0){
            cout<<i*10<<",";
            
        }
        
        if(i%4==0)
        continue;
        
        cout<<i<<",";
    }
    
}




 