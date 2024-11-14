#include<iostream>
using namespace std;

class animal{
	public:
		virtual void sound(){
			cout<<"Some generic animal sound"<<endl;
		}
};
class cat:public animal{
	void sound () override{
		cout<<"meow"<< endl;
	}
};
class dog: public animal{
	void sound() override{
		cout<<"bark"<<endl;
	}
};
int main(){
	animal *animal1= new dog();
	animal *animal2= new cat();
	animal1->sound();
	animal2->sound();
	delete animal1;
	delete animal2;
	return 0;
}
