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
class d{
	public: int sl_no;
		void get_data_d(){
				cout<<"serial No. of answer sheet"<<endl;
				cin>>sl_no;
};
class E: public c, public d{
	public: int date;
		void get_data_e(){
				cout<<"date"<<endl;
				cin>>date;
		}
};
int main(){
	E e;
	e.get_data_a();
	e.get_data_b();
	e.get_data_c();
	e.get_data_d();
	e.get_data_e();
}
