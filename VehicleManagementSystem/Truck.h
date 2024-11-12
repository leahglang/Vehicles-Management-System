#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

namespace VDMS {

    class Truck : public Vehicle {
    private:
        double loadCapacity;

    public:
        // ����������� ������ �����
        Truck(const std::string& vin, const std::string& make, const std::string& model, int year, double capacity);
        // ������� ����� ���� �� ������, ����� ������� override
        void displayInfo() const override;
        // ������� ������ ������, ����� ������� override
        void service(ServiceType service) override;
    };

} // namespace VDMS

#endif // TRUCK_H
