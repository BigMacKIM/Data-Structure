#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int index= 0;


class Vaccination{
private:
    int age;
    bool sex;
    int identifier;
public:
    Vaccination(){
        age = 0;
        sex = false;
        identifier = 0;
    }
    void setValue(){
        char temp;
        cin >> this->identifier;
        cin >> this->age;
        cin >> temp;
        if(temp == 'M')
            this->sex = true;
        else if(temp == 'F')
            this->sex = false;
        else
            cout << "Invalid Data" << endl;

    }
    int getID() const{
        return this->identifier;
    }
    void getValue()const{
        cout << this->identifier << "\t" << this->age << "\t";
        if(sex){
            cout << "M" << endl;
        }
        else{
            cout << "F" << endl;
        }
    }
    bool getSex(){
        return this->sex;
    }
    int getAge(){
        return this->age;
    }

};

int main() {
    int number;
    cin >> number;
    vector<Vaccination> v, child, adult, old;
    for(int i = 0; i < number; i++){
        Vaccination temp;
        temp.setValue();
        v.push_back(temp);
    }
    for(auto iter = v.begin(); iter != v.end(); iter++) {
        if (iter->getAge() <= 15) {
            child.push_back(*iter);
        } else if (iter->getAge() >= 61)
            old.push_back(*iter);
        else
            adult.push_back(*iter);
    }
    vector<Vaccination> a_male, a_female;
    for(auto iter = adult.begin(); iter != adult.end(); iter++){
        if(iter->getSex())
            a_male.push_back(*iter);
        else
            a_female.push_back(*iter);
    }
    vector<Vaccination> o_male, o_female;
    for(auto iter = old.begin(); iter != old.end(); iter++){
        if(iter->getSex())
            o_male.push_back(*iter);
        else
            o_female.push_back(*iter);
    }
    for(auto iter = o_male.begin(); iter != o_male.end(); iter++){
        cout << iter->getID();
        cout << endl;
    }
    for(auto iter = o_female.begin(); iter != o_female.end(); iter++){
        cout << iter->getID() << endl;
    }
    for(auto iter = child.begin(); iter != child.end(); iter++){
        cout << iter->getID() << endl;

    }
    for(auto iter = a_female.begin(); iter != a_female.end(); iter++){
        cout << iter->getID() << endl;

    }
    for(auto iter = a_male.begin(); iter != a_male.end(); iter++){
        cout << iter->getID() << endl;
    }
}
