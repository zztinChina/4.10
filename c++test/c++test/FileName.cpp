#include<iostream>
using namespace std;
template <class t,class e>
class person
{
public:
	person(t name, e age);
	t name1;
	e age1;
};
template<class t, class e>
person <t, e>::person(t name, e age)
{
	this->age1 = age;
	this->name1 = name;
}
int main()
{
	person<string,int>p("zhangsan", 12);
	cout << p.age1    << p.name1;
	return 0;
}