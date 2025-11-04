#include<iostream>
using namespace std;
int main(){
	/*int age;
	cout<<"Enter Your Age"<<endl;
	cin>>age;
	if(age>150|| age<1){
	
	cout<<"Invalid Age";
}
else if
(age>=18){
	cout<<"You Can Vote";
}
	else{
		cout<<"You Cannot Vote";
	}
	
	*/
	int age;
	cout<<"Enter Your Age:"<<endl;
	cin>>age;
	switch (age)
	{case 12:
	cout<<"Your Age Is 12";
	break;
	case 15:
	cout<<"Your Age Is 15";
	break;
	
	default:
		cout<<"Your Age Is Nor 12 Neither 15";
	}
	
	
	
}

