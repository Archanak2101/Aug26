//============================================================================
// Name        : Question11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double temp;
	cout<<"Enter Temperature:"<<endl;
	cin>>temp;

	int statuscode;

	if(temp<0){
		statuscode= -1;
	}
	else if(temp>=0 && temp<=29){
		statuscode= 0;
	}
	else if(temp>=30 && temp<=44){
			statuscode= 1;
	}
	else if(temp>=45 && temp<=59){
				statuscode =2;
		}
	else{
					statuscode= 3;
			}
	cout<<statuscode<<endl;


	double Fahrenhit =(temp * 9.0/5.0)+32 ;

	string StatusLabel,Action;

	switch(statuscode){

		case -1:
			StatusLabel="SENSOR ERROR";
			Action ="Sensor Fault--check writing";
			break;

		case 0:
					StatusLabel="NORMAL";
					Action ="No Action Required";
					break;

		case 1:
					StatusLabel="WARNING";
					Action ="Alert sent to Supervisor";
					break;

		case 2:
					StatusLabel="CRITICAL";
					Action ="Cooling Syterm Triggered";
					break;

		case 3:
					StatusLabel="SHUTDOWN";
					Action ="Emergency ShutDown initiated";
					break;

	}

	cout<<"Expected Output"<<endl;

	cout<<"Temperature :"<<temp<<"C:"<<Fahrenhit<<endl;

	cout<<"Status :"<<StatusLabel <<endl;


	cout<<"Action :"<<Action <<endl;

	cout<<"Reading  :"<<(temp>25.0?"Above Average":"Below Average")<<endl;

    return 0;
}
