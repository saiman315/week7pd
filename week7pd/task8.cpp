#include<iostream>
#include<iomanip>
using namespace std;

void findcargo(int count_cargo);
main(){
    
    int count_cargo;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count_cargo;

    findcargo(count_cargo);
}

void findcargo(int count_cargo){
    float tons = 0;
    float totalprice, minibusprice, truckprice, trainprice;

    for(int i=1; i <= count_cargo; i++){
        cout  << "Enter the tons of cargo: " << i << ": ";
        cin >> tons;
        totalprice = tons + totalprice;

        if(tons <= 3){
            minibusprice = minibusprice + tons;
        }

        if(tons > 3 && tons <= 11){
            truckprice = truckprice + tons;
        }

        if(tons > 11){
            trainprice = trainprice + tons;
        }
    }

    float average = ((minibusprice * 200)+(truckprice * 175)+(trainprice * 120)) / totalprice;
    float priceminibus = minibusprice / totalprice * 100;
    float pricetruck = truckprice / totalprice * 100;
    float pricetrain = trainprice / totalprice * 100;

    cout << endl << fixed << setprecision(2) << average;
    cout << endl << fixed << setprecision(2) << priceminibus << "%";
    cout << endl << fixed << setprecision(2) << pricetruck << "%";
    cout << endl << fixed << setprecision(2) << pricetrain << "%";
}