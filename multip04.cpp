#include<iostream>

using namespace std;

class fun{
	
	public:
		
	int a;
	int b;
	int c;
	
 	void operator +(){
   		cout<<"the object add:"<<a+b<<endl; 	
 	}
 	
 	void operator ++(){
 		cout<<"the object 2 add:"<<a+b+c<<endl;
	 }
};
main(){
	
	fun u;
	
	+();
}
