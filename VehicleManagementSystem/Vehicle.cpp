#include "Vehicle.h"

namespace VDMS {

    // ����� ������ ����� vehicleCount �-0
    int Vehicle::vehicleCount = 0;

    Vehicle::Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year)
        : VIN(vin), make(make), model(model), year(year) {
        vehicleCount++; // ����� ����� ������

    }

    Vehicle::Vehicle(const Vehicle& other)
        : VIN(other.VIN), make(other.make), model(other.model), year(other.year) {
        vehicleCount++; // ����� ����� ������
    }

    Vehicle::~Vehicle() {
        vehicleCount--; // ����� ����� ������
    }

    int Vehicle::getVehicleCount() {
        return vehicleCount; // ������ �� ���� ������ ������
    }

    void Vehicle::displayInfo() const {
        // ������ �� ���� ������, �����, ���� ���� ������ �� ����
        std::cout << "VIN: " << VIN << ", Make: " << make << ", Model: " << model << ", Year: " << year << std::endl; 
    }

    std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle) {
        os << "VIN: " << vehicle.VIN << ", Make: " << vehicle.make << ", Model: " << vehicle.model << ", Year: " << vehicle.year;
        return os;
    }

    // ������� ������ ����� �� ����
    void performService(Vehicle& vehicle, ServiceType service) {
        vehicle.service(service);
    }

} // namespace VDMS
