#include "matrixh.hpp"
int matrix () {
// creating Matric
	int num=0;
	int sum=0;
	cout<<"Insert the size of matric a[][]"<<endl;	
	int n,x;cin>>n; 
	int a[n] [n];
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cout<<"Insert element i"<<endl; 
			cin>>x;
			a[i][j]=x;
		}
			
	}	//calculates the sum of the numbers above and below the diagonal
	for(int i=0;i<n;i++) {
			for(int j=0;j<i;j++) {
			sum+= a[i][j];
			}	
		}for(int j=0;j<n;j++) {
			for(int i=j+1;i<n;i++) {
			num+= a[i][j];
			}
		//converts a number to binary system
		}vector <int> binarysum =erkuakan (sum);
	vector <int> binarynum =erkuakan ( num); 
	int index=0;
	int index2=0;
	for (int i=0;i<n;i++) {
		for(int j=0;j<i;j++) {
		a[i][j]= binarysum[index];
		index++;
		}
	
		for (int k=i+1;k<n;k++) {
		a[i][k]= binarynum[index2];
		index2++;
		}

	}cout<<"sum"<<sum<<endl;
	cout<<"num"<<num<<endl;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
				cout<<a[i][j]<<" ";
		}		cout<<endl;
	}	
	return 0;
}

