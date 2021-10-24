#include<iostream.h>
using namespace std;
class Person{
	private:
	int id;
	public:
	Person(int id){
		
		this->id=id;
	}
	
	 int getId(){
		
		return this->id;
	}
};
main(){
	Person *person = new Person(1);
	cout<<person->getId()<<endl;
}