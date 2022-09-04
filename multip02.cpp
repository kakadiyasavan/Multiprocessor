#include<iostream>

using namespace std;

class a{
	
	public:
		
		void fun(){
			cout<<"Number 1 : "<<endl;
		}
		
		void fun(int a){
			cout<<"Number 2 : "<<a<<endl;
		}
		
		void fun(int a,int b){
			cout<<"Number 1 : "<<a<<endl<<"Number 2 : "<<b<<endl;
		}
};

main(){
	
	a obj;
	
	obj.fun();
	obj.fun(10);
	obj.fun(20,30);
}
