#include "Vehicle.h"

namespace VDMS {

    // אתחול המשתנה הסטטי vehicleCount ל-0
    int Vehicle::vehicleCount = 0;

    Vehicle::Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year)
        : VIN(vin), make(make), model(model), year(year) {
        vehicleCount++; // הגדלת ספירת הרכבים

    }

    Vehicle::Vehicle(const Vehicle& other)
        : VIN(other.VIN), make(other.make), model(other.model), year(other.year) {
        vehicleCount++; // הגדלת ספירת הרכבים
    }

    Vehicle::~Vehicle() {
        vehicleCount--; // הפחתת ספירת הרכבים
    }

    int Vehicle::getVehicleCount() {
        return vehicleCount; // מחזירה את מספר הרכבים שנוצרו
    }

    void Vehicle::displayInfo() const {
        // מדפיסה את מספר הזיהוי, היצרן, הדגם ושנת הייצור של הרכב
        std::cout << "VIN: " << VIN << ", Make: " << make << ", Model: " << model << ", Year: " << year << std::endl; 
    }

    std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle) {
        os << "VIN: " << vehicle.VIN << ", Make: " << vehicle.make << ", Model: " << vehicle.model << ", Year: " << vehicle.year;
        return os;
    }

    // פונקציה לביצוע שירות על הרכב
    void performService(Vehicle& vehicle, ServiceType service) {
        vehicle.service(service);
    }

} // namespace VDMS
