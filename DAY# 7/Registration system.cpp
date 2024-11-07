#include<iostream>
using namespace std;
class A{
	public: string name;
			int roll;
			void get_data_a(){
				cout<<"Enter Your Name:"<<endl;
				cin>>name; 
				cout<<"Enter Your Roll Number:"<<endl;
				cin>>roll;
			}
};
class B:public A{
	public: string dept;
			void get_data_b(){
				cout<<"Enter Your Department:"<<endl;
				cin>> dept;
			}		
};
class C: public B{
	public: string email;
			int reg=1000;
			void get_data_c(){
				cout<<"Enter Your Email ID:"<<endl;
				cin>> email;
				reg++;
				cout<<"Your Registration Number is:"<<reg<<endl;
			}
			
};
int main(){
	C c;
	int ch;
	while(ch>0){
	cout<<"1.REGISTER!!"<<endl;
	cout<<"2.EXIT"<<endl;
	cin>>ch;
	    if(ch==1){
	        c.get_data_a();
	        c.get_data_b();
	        c.get_data_c();
	    }
	    else
	        exit(0);
	    }
}
