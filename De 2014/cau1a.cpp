#include <iostream>
#include <string>
using namespace std;

class Bike {
private:
    string brand; // hiệu xe
public:
    Bike() : brand("Bike") {}
    Bike(const string& s) : brand(s) {}
    virtual ~Bike() {}
    virtual void move(int t1) { 
        cout << brand << ": " << t1 * 12 << " "; 
    }
};

class EBike : public Bike {
public: 
    EBike(const string& s) : Bike("EBike") {}
    void move(int t2) {
        Bike::move(t2 * 2);
    }
};

void display (Bike& a, EBike& b) { 
    a.move(2); 
    b.move(2);
}

int main() { 
    EBike b1("EBike"), b2("EBike"); 
    display(b1, b2); 
    return 0;
}
