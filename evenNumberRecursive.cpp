// Q.2  program to print even numbers from 0 to X

#include <iostream>
using namespace std;



// function to print Even numbers

void printEvenNumbers(int start,int number){
	if(start>number){
		return;
	}
	else{
		if(start%2==0){
			cout<<start<<" ";
		}
		printEvenNumbers(start+1,number);
	}
	
	
}


// main function

main(){
	int number,start=0;
	cout<<"Enter the number"<<endl;
	cin>>number;
	printEvenNumbers(start,number);
}
