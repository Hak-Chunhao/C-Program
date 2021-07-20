#include<iostream>
using namespace std;
int main() {
	//	exercise-1(page 2)
	int ts, hours, minutes, seconds;

	cout<<"Input total seconds: ";
	cin>>ts;

	minutes = ts / 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	seconds = ts % 60;
//another formula
		/*
		h = (sec/3600);

		m = (sec -(3600*h))/60;

		s = (sec -(3600*h)-(m*60));
		*/
	cout << hours << " hours " << minutes << " minutes " << seconds << " seconds.\n";

}
