#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,m=0;
	cout<<"Number n:"<<endl;
	cin>>n;
	
	while(n>0){
		m= m*10 + (n%10);
		n = n/10;
	}
	
	cout<<m;
	return 0;
}

