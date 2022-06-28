#include<iostream>
using namespace std;
/*
 * This struct is to describe data elements related to a Person
 */

struct Person {
	int age;
};

/*
 * create a person obj and assign values to it as needed
 */
int main() {
	Person p1;
	p1.age = 30;
	cout << p1.age;
	return 0;
}
