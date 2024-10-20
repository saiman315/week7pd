
// #include <iostream>
//  // For sqrt function
// #include <cmath> 


// using namespace std;

// bool isPrime(int number) {
//     if (number <= 1) {
//         return false;
//     }
//     for (int i = 2; i <= sqrt(number); ++i) {
//         if (number % i == 0) {
//             return false;
//         }
//     }
    

    
//     return true;
    
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     // Output 1 for prime, 0 for non-prime
//     cout << isPrime(num) << endl;

    
// }
// second method 
#include <iostream>
 using namespace std;
 bool isprime(int num);
 main()
 {
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<isprime( num);
 }
 bool isprime(int num)
 {
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
    if(num%i==0){
        return false;
    }
 
    }
   return true;
 }
