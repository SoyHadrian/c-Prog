#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,x=0;
	cout<<"Number n: ";
	cin>>n;
	
	while(n>0){
		n=n/10;
		x++;
	}
	cout<<"The lenght is: "<<x;
	return 0;
}

