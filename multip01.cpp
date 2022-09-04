#include<iostream>

using namespace std;

class a{
	
	public:
		
		void fun(){
			cout<<"A : Apple"<<endl;
		}
};

class b : public a{
	
	public:
		
		void fun(){
			cout<<"B : banana"<<endl;
		}
};

main(){
	
	b obj;
	
	obj.a::fun();
	obj.fun();
}
