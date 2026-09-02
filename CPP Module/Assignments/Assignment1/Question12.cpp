//============================================================================
// Name        : Question12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void processReadings(int n,double Readings[]){
	double minTemp =9999.0, maxTemp=-9999.0,sum=0.0;
	int validCount=0, errorCount=0;
	int normal=0,warning=0,critical=0,shutdown=0;
	cout<<"invalid Readings:";

	for(int i=0;i<n;i++){
		if(Readings[i]<0){
			errorCount++;
			continue;
		}
		cout<<Readings[i]<<" ";
		validCount++;
		sum += Readings[i];


		if(Readings[i] < minTemp) minTemp=Readings[i];
		if(Readings[i] > maxTemp) maxTemp=Readings[i];
		if(Readings[i]>=0 && Readings[i]<=29)normal++;
		else if(Readings[i]>=30 && Readings[i]<=44) warning++;
		else if(Readings[i]>=45 && Readings[i]<=59) critical;
		else if(Readings[i]>=60) shutdown++;
	}

	cout<<"Skipped (errors):"<<errorCount<<endl;

	for(int i=0;i<n;i++){
		if(Readings[i]>=45.0){
			cout<<"FIRST CRITICAL :Index"<<i<<"->"<<Readings[i]<<endl;
			break;
		}
	if(validCount>0){
		double avg=sum/validCount;
		cout<<"Min :" <<minTemp<<"C Max :"<<maxTemp << "C Avg :"<<avg<<endl;
	}
	cout<<"Normal:"<<normal<<"Warning:"<<warning
			<<"critical:"<<critical<<" ShutDown:"<<shutdown<<endl;
}
}

int main(){

	int n;
	cout<<"Enter Number Of Readings"<<endl;
	cin>>n;

	double Readings[100];
	cout<<"Enter"<<n<<"temperature Readings:"<<endl;


	for(int i=0;i<n;i++){
		cin>>Readings[i];
	}
	processReadings(n,Readings);
	return 0;
}
