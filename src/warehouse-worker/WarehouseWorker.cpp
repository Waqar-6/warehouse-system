#include <iostream>
#include <string>

class WarehouseWorker {

    protected:
    long employeeNumber;
    std::string firstName;
    std::string lastName;
    double payPerHour;
    float shiftHours {};

    public:
    WarehouseWorker (long employeeNumber, std::string firstName, std::string lastName, double payPerHour) :
    employeeNumber(employeeNumber), firstName(firstName), lastName(lastName), payPerHour(payPerHour) {}

    virtual void clockIn() {
        std::cout << firstName << " " << lastName << " clocked in\n";
    }

    virtual void clockOut() {
        std::cout << firstName << " " << lastName << " clocked out\n";
    }

    void addHours(int hours) {shiftHours+=hours;}


    virtual void performTask () = 0;
    

};