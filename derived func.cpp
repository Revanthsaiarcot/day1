#include<iostream>
using namespace std;
class base{
	public:
		virtual void print(){
			cout<<"base function"<<endl;
		}
};
class derived:public base{
	public:
		void print(){
			cout<<"derived function"<<endl;
		}
};
int main(){
	derived derived1;
	base* base1=&derived1;
	base1->print();
	return 0;
	}

