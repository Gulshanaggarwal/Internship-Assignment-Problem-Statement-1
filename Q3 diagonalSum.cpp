// Q.3 Given a matrix of size N*N, your task is to find the sum of the primary and secondary diagonal of the Matrix.

#include <iostream>
using namespace std;

// function to Insert elements into Matrix

void InsertElements(int row,int col,int matrix[][100]){
	cout<<"Enter matrix elements"<<endl;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}
}

// function to calculate sum of primary diagonal

int sumPrimaryDiagonal(int row,int matrix[][100]){
	int sum=0;
	for(int i=0;i<row;i++){
		sum+=matrix[i][i];
	}
	return sum;
	
}

// function to calculate sum of secondary diagonal

int sumSecondaryDiagonal(int row,int col,int matrix[][100]){
	int sum=0,i=0,j=col-1;
	
	while((i<=row-1)and(j>=0)){
		sum+=matrix[i][j];
		i++;
		j--;
	}
	return sum;
}



// main function


main(){
	int row,col,matrix[100][100],primaryDiagSum,secondDiagSum;
	cout<<"Enter number of rows"<<endl;
	cin>>row;
	cout<<"Enter number of cols"<<endl;
	cin>>col;
	
	if(row==col){
		InsertElements(row,col,matrix);
		primaryDiagSum=sumPrimaryDiagonal(row,matrix);  // get primary diagonal sum;
		secondDiagSum=sumSecondaryDiagonal(row,col,matrix);  // get secondary diagonal sum;
		
		cout<<"Sum of Primary diagonal :"<<primaryDiagSum<<endl;
		cout<<"Sum of Secondary diagonal: "<<secondDiagSum;
		
	}
	else{
		cout<<"Number Row and columns must be equal"<<endl;
		
	}
}
