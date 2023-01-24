#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int y;
	string num;
	cout<<"Introduce the year: ";
	cin>>y;
	num = to_string(y);
	if(y<1582){
		if(y%4==0){
			cout<<"The year is leap";
		}else if(y%4!=0){
			cout<<"The year is not leap";
		}
	}else if(y>=1582){
			if((num[2]=='0' && num[3]=='0') || (num[2]=='0' && num[3]=='0' && num[4]=='0')){
				if(y%4==0){
					if(y%400==0){
						cout<<"The year is leap";	
					}
					else{
						cout<<"The year is not leap";
					}
				}
			}else if(y%4==0){
				cout<<"The year is leap";
			}else if(y%4!=0){
				cout<<"The year is not leap";
			}
	}
	
	return 0;
}

