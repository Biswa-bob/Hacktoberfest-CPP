#include <iostream>
using namespace std;
class Dog //this is the name of our class
{
public: 
    string name = "rover"; //this is an attribute 
    string gender  = "male"; 
    int age = 5;
    
};

int main() {
  Dog dogObj;     //here we are making an object of Dog class
  cout << "Dog name is: "<<dogObj.name<<endl;     //by using . operator we can access the member of class
  cout << "Dog gender is: "<<dogObj.gender<<endl;    //accessing the public members of class Dog in main()
  cout << "Dog age is: "<<dogObj.age<<endl;
}
