//	ARRAY & DMA OF ARRAY & ARRAY THROUGH POINTERS
#include<iostream>
#include<string>
using namespace std;

void OneDArray(){
	///normal array
	int arr[5];
	for(int i=0;i<5;i++){
	cin>>arr[i];
	}
	
	for(int i=0;i<5;i++){
	cout<<arr[i];
	}


	int *ptrArr; //int *ptrArr=new int[4] OR
	ptrArr=new int[5];
	for(int i=0;i<5;i++){
	cin>>arr[i];
	}
	
	for(int i=0;i<5;i++){
	cout<<arr[i];
	}
	delete []ptrArr; 
}

void TwoDArray(){
	///normal array
	int arr[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		cin>>arr[i][j];
		//cout<<" ";
		}
		//cout<<endl;
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j];
			cout<<" ";
		}
		cout<<endl;
	}

	int **ptrArr; //int *ptrArr=new int[4] OR
	ptrArr=new int*[2];
	for(int i=0;i<2;i++){
	ptrArr[i]=new int[2];
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		cin>>ptrArr[i][j];
		//cout<<" ";
		}
		//cout<<endl;
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<ptrArr[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	for(int j=0;j<2;j++){
		delete[] ptrArr[j];
	}
	delete[] ptrArr;
}


int main(){
	TwoDArray();
	//OneDArray();
}
