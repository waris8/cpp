#include "Person.h"

class Student : public Person{

    private:
    std::string major;
    int gradYear;
    
    public:
    void print();
    void changeMajor(const std::string& newMajor);
};