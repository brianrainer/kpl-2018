#include<iostream>
#include<math.h>
using namespace std;

int addition (int a, int b);
int substraction (int a, int b);

int main(){
	cout<<"This is a simple calculator. Please enter an expression\n";
	
	int a,b,ans;
	char op;
	bool isValid = true;
	
	cin>>a>>op>>b;
	
	switch(op){
		case '+':
			ans=addition(a,b);
			break;
		case '-':
			ans=substraction(a,b);
			break;
		default:
			isValid = false;
			break;
	}
	
	if (isValid) {
		cout<<"The answer is "<<ans<<endl;
	} else {
		cout<<"Invalid operation, the calculator cannot handle that\n";
	}
		
	return 0;
}

int addition(int a, int b){
	return a+b;
}

int substraction(int a, int b){
	return a-b;
}
