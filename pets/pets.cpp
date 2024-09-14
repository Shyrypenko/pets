#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
    string name;
public:
    Pet(string n) : name(n) {}
    virtual void Sound() const = 0;
    virtual void Show() const {
        cout << "���: " << name << endl;
    }
    virtual void Type() const = 0;
    virtual ~Pet() {}
};

class Dog : public Pet {
public:
    Dog(string n) : Pet(n) {}

    void Sound() const override {
        cout << name << "���-���" << endl;
    }

    void Type() const override {
        cout << name << "������" << endl;
    }
};

class Cat : public Pet {
public:
    Cat(string n) : Pet(n) {}

    void Sound() const override {
        cout << name << "���-���!" << endl;
    }

    void Type() const override {
        cout << name << "�����." << endl;
    }
};

class Parrot : public Pet {
public:
    Parrot(string n) : Pet(n) {}

    void Sound() const override {
        cout << name << "����-����!" << endl;
    }

    void Type() const override {
        cout << name << "�������." << endl;
    }
};

class Hamster : public Pet {
public:
    Hamster(string n) : Pet(n) {}

    void Sound() const override {
        cout << name << "��-��!" << endl;
    }

    void Type() const override {
        cout << name << "�����." << endl;
    }
};

int main() {
    Pet* pets[] = {
        new Dog("�����"),
        new Cat("������"),
        new Parrot("����"),
        new Hamster("����")
    };

    for (int i = 0; i < 4; ++i) {
        pets[i]->Show();
        pets[i]->Sound();
        pets[i]->Type();
        cout << endl;
    }

    for (int i = 0; i < 4; ++i) {
        delete pets[i];
    }

    return 0;
}
