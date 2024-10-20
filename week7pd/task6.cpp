#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to calculate the primorial of the first n prime numbers
float primorial(int n) {
    float product = 1; 
    float count = 0; // variable that  count  prime no  found
    float number = 2; //  checking for prime numbers from start mean  2 

    while (count < n) {
        if (isPrime(number)) {
            product *= number; // Multiply by the found prime no
            count++; //  Increment the count of prime no  found
        }
        number++; 
    }

    return product; // Return  primorial
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    long long result = primorial(n);
    cout << "Primorial of no is " << n  << result << endl;

    return 0;
}

