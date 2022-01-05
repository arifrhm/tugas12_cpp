#include <iostream>
using namespace std;

int main() {
	int x[3] = {1,5,4};
	int y[3] = {3,2,5};
	for(int i=0;i<3;i++){
		cout<<"Array x "<<i<<" : "<<x[i]<<endl;
	}
	
	cout<<endl;
	
	for(int i=0;i<3;i++){
			cout<<"Array y "<<i<<" : "<<y[i]<<endl;
	}
	
	cout<<endl;
	
	for(int i=0;i<3;i++){
			cout<<"Array Penjumlahan "<<i<<" : "<<x[i]+y[i]<<endl;
	}
	
    return 0;
}


/*Array x 0 : 1

Array x 1 : 5

Array x 2 : 4


Array y 0 : 3

Array y 1 : 2

Array y 2 : 5


Array Penjumlahan 0 : 4

Array Penjumlahan 1 : 7

Array Penjumlahan 2 : 9*/
