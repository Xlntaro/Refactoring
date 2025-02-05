#include <iostream>
#include <vector>

using namespace std;

class UserName {
public:
    string value;
    UserName(string name) {
        if (name.empty()) throw invalid_argument("Name cannot be empty");
        value = name;
    }
};

class UserAge {
public:
    int value;
    UserAge(int age) {
        if (age < 0) throw invalid_argument("Age cannot be negative");
        value = age;
    }
};

class User {
public:
    UserName name;
    UserAge age;

    User(string name, int age) : name(name), age(age) {}

    void printInfo() {
        cout << "Name: " << name.value << ", Age: " << age.value << endl;
    }
};

class UserManager {
public:
    vector<User> users;

    void addUser(string name, int age) {
        User user;
        user.name = name;
        user.age = age;
        users.push_back(user);
    }
};

class UserPrinter {
public:
    void printAllUsers(const vector<User>& users) {
        for (const auto& user : users) {
            user.printInfo();
        }
    }
};


int main() {
    Database db;
    db.addUser("Alice", 25);
    db.addUser("Bob", 30);
    db.printAllUsers();
    return 0;
}