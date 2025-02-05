#include <iostream>
#include <vector>

using namespace std;

class User {
public:
    string name;
    int age;

    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
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
        for (int i = 0; i < users.size(); i++) {
            users[i].printInfo();
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