//============================================================================
// ame        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright noticeDescription : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int patientId;
    string name;
    int age;
    string ward;
    const string bloodGroup; 

public:
    Patient() : patientId(0), name("Unknown"), age(0), ward("General"), bloodGroup("O+") {
        cout << "[Constructor] Default patient registered." << endl;
    }

    Patient(int id, const string& p_name) : patientId(id), name(p_name), age(0), ward("Emergency"), bloodGroup("Unknown") {
        cout << "[Constructor] Emergency: " << name << endl;
    }

    Patient(int id, const string& p_name, int p_age, const string& p_ward, const string& bg) 
        : patientId(id), name(p_name), age(p_age), ward(p_ward), bloodGroup(bg) {
        cout << "[Constructor] Full admission: " << name << endl;
    }

    ~Patient() {
        cout << "Patient " << name << " discharged." << endl;
    }

    void displayRecord() const {
        cout << "Patient Record: ID=" << patientId << ", Name=" << name 
             << ", Age=" << age << ", Ward=" << ward 
             << ", Blood Grp=" << bloodGroup << endl;
    }

    void transferWard(const string& newWard) {
        cout << "Ward Transfer: " << name << " -> " << newWard << endl;
        ward = newWard; 
    }
};

int main() {
    cout << "--- 1. Creating Stack Objects ---" << endl;
    Patient p1(101, "Meera Joshi", 45, "ICU", "B+"); 
    Patient p2(102, "Raj Patel");                   
    Patient p3;                                     

    cout << "\n--- 2. Creating Dynamic Array on Heap ---" << endl;
    
    Patient* pArray = new Patient[4];

    cout << "\n--- 3. Displaying Array Records ---" << endl;
    for (int i = 0; i < 4; i++) {
        pArray[i].displayRecord();
    }

    cout << "\n--- 4. Transferring Ward ---" << endl;
    p1.transferWard("General");

    cout << "\n--- 5. Deleting Dynamic Array (Observe Destructors) ---" << endl;

    delete[] pArray; 

    cout << "\n--- 6. End of main() (Stack objects will be destroyed now) ---" << endl;
    return 0;
}