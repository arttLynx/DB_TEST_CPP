//
//  main.cpp
//  testProject
//
//  Created by Thomas Lynx on 19.03.2022.
//

#include <iostream>
#include <vector>

using namespace std;
class User {
    public:
        int age;
        string name;
        vector<string> hobbies;
        User(int age, string name, vector<string> hobbies) {
            this->age = age;
            this->name = name;
            this->hobbies = hobbies;
        }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    vector<string> hobbies;
    hobbies.push_back("To grow a vegetable");
    hobbies.push_back("To be against Onalnyi");
    hobbies.push_back("Пальцевать!");
    User user = User(228, "Thomas", hobbies);
    cout << "The name of user is " << user.name << ". \n" << "the age of user is" << user.age << ".\nand the hobbies of user is \n";
    for (int i=0; i < hobbies.size(); i++ ) {
        cout << i+1 << ". " << hobbies[i] << "\n";
    }
    cout << endl ;
    return 0;
}
