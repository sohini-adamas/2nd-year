#include<iostream>
using namespace std;
class a{
	public: string name;
			void get_data_a(){
				cout<<"Name"<<endl;
				cin>>name;
			}
};
class b:public a{
	public: int roll;
			int reg;
			void get_data_b(){
				cout<<"Roll No."<<endl;
				cin>>roll;
				cout<<"Registration Number:"<<endl;
				cin>>reg;
			}
};
class c:public b{
	public: int sub_code;
			int sub;
			void get_data_c(){
				cout<<"subject code"<<endl;
				cin>>sub_code;
				cout<<"Subject Name:"<<endl;
				cin>>reg;
			}
};
class d:public a, public b,public c{
	public: int sl_no;
	
};
