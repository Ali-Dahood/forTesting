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
	Person *person1 = new Person(1);
	Person *person2 = new Person(2);
	cout<<"ID of person1: "<<person1->getId()<<endl;
	cout<<"ID of person2: "<<person2->getId()<<endl;
}