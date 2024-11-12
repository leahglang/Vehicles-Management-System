#pragma once
#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

namespace VDMS {

    class Motorcycle : public Vehicle {
    private:
        bool hasSidecar;

    public:
        // ����������� ������ ������
        Motorcycle(const std::string& vin, const std::string& make, const std::string& model, int year, bool sidecar);
        // ������� ����� ���� �� �������, ����� ������� override
        void displayInfo() const override;
        // ������� ������ �������, ����� ������� override
        void service(ServiceType service) override;
    };

} // namespace VDMS

#endif // MOTORCYCLE_H
