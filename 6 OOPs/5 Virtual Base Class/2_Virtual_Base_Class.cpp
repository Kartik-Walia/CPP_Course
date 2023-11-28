/*
                 |---------> Class Test -------->|
Class Student ---                                 ---> Class Result
                 |--------> Class Sports ------->|
*/

// We solved the issue of getting roll no in result class twice (from both classes test and sports)

#include <iostream>
using namespace std;

class Student {
protected:
    int roll_no;

public:
    void set_number(int a) {
        roll_no = a;
    }
    void print_number(void) {
        cout << "Your roll no is " << roll_no << endl;
    }
};

// class Test : virtual public Student{};  // This is also same as below
class Test : public virtual Student {
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }
    void print_marks(void) {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student {
protected:
    float score;

public:
    void set_score(int sc) { 
        score = sc;
    }
    void print_score(void) {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports {
private:
    float total;

public:
    void display(void) {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main() {
    Result harry;
    harry.set_marks(78.9, 99.5);
    harry.set_number(4200);
    harry.set_score(9);
    harry.display();

    return 0;
}