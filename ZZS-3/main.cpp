#include <iostream>
#include <stdlib.h>

using namespace std;

void checker (string date){
	int j=0, d[8];

	//Turn string into int array, skipping second and fifth string characters, the two dots
	for(int i=0; i<10; i++){
		if (i!=2 && i!=5){
			d[j]=date[i]-'0';
			j++;
		}
	}

	//Check if date is correct
	if (d[0]*10+d[1]<=31 && d[2]*10+d[3]<=12 && d[4]*1000+d[5]*100+d[6]*10+d[7]>=0){
		if(d[0]*10+d[1]==31 && (d[2]*10+d[3]!=1 || d[2]*10+d[3]!=3 || d[2]*10+d[3]!=5 || d[2]*10+d[3]!=7 || d[2]*10+d[3]!=8 || d[2]*10+d[3]!=9 || d[2]*10+d[3]!=12)) //DON'T ASK
			cout << "incorrect" << endl;
		else if (d[2]*10+d[3]==9 && d[0]*10+d[1]>28) //Leap years can go program their own fucking if clause
			cout << "incorrect" << endl;
		else 
			cout << "correct" << endl;
	}

	else cout << "incorrect" << endl;

}

int main ()
{
	string date;

	cin>>date;

	checker(date);
	

	return 0;
}