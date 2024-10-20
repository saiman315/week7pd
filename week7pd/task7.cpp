#include<iostream>
using namespace std;

void patients(int visitpatients);

main(){

int visitpatients;

    cout << "Enter number of days you visited hospital: ";
    cin >> visitpatients;

    patients(visitpatients);

}


void patients(int visitpatients){
    
    float doctors = 7;
    float treatedpatients = 0;
    float untreatedpatients = 0;

    for(int i = 1; i <= visitpatients; i++){
        int patients;

        cout  << "No. of patients who visited on day " << i << ":";
        cin >> patients;

            if(i % 3 == 0 && i != 0 && untreatedpatients > treatedpatients){
            doctors++;
            }
            if(patients <= doctors){
                treatedpatients = treatedpatients + patients;
            }
            else if(patients > doctors){
                treatedpatients = treatedpatients + doctors;
            }

            if(patients - doctors >= 0){
                untreatedpatients = untreatedpatients + (patients - doctors);
            }
    }

    cout  << "Treated Patients: " << treatedpatients<<endl;

    cout  << "Untreated Patients: " << untreatedpatients<<endl;

}