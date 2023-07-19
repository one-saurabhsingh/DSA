#include <bits/stdc++.h>
using namespace std;
// // Encapsulation
// class Animal
// {
    
// private:
//     int age;
//     int weight;

// public:
//     void eat()
//     {
//         cout << "Eating" << endl;
//     }
//     int getAge(){
//         return this->age;
//     }
//     void setAge(int age) {
//         this->age = age;
//     }
// };

class Animal {
public:
int age;

};

class Dog:protected Animal{ // public here is mode of inheritance
 public: void print(){
    cout<<this->age;
 }
};

int main()
{Dog d1;
 d1.print();
    return 0;
}