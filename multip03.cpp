#include<iostream>

using namespace std;

class data{
	
	public:
		
		void operator ++(){
			cout<<"Hello"<<endl;
		}
		
		void operator --(){
			cout<<"Sir"<<endl;
		}
};

main(){
	
	data obj;
	
	++obj;
	--obj;
}
