#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

namespace VDMS {

    // ����� enum ����� �������
    enum class ServiceType {
        OilChange,
        Inspection,
        TireRotation
    };

    class Vehicle {
    private:
        std::string VIN;
        std::string make;
        std::string model;
        int year;
        static int vehicleCount; // ����� ����� �� ���� ������ ������

    public:
        // ����������� ������ Vehicle
        Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year);
        // ����������� ����� ������ Vehicle
        Vehicle(const Vehicle& other);
        // ��������� ������ Vehicle
        virtual ~Vehicle();

        // ������� ����� ������ ���� ������ ������
        static int getVehicleCount();
        virtual void displayInfo() const;
        virtual void service(ServiceType service) = 0;

        // ������� ������� ������ �� ���� ���� ���� ������
        friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);
        // ������� ������� ������ ����� �� ����
        friend void performService(Vehicle& vehicle, ServiceType service);

        // �������� Inline ������ ����� �� ���� ����
        inline void setMake(const std::string& m) { make = m; }
        inline std::string getMake() const { return make; }
    };

} // namespace VDMS

#endif // VEHICLE_H
