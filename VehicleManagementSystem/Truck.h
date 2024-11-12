#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

namespace VDMS {

    class Truck : public Vehicle {
    private:
        double loadCapacity;

    public:
        // קונסטרוקטור למחלקת משאית
        Truck(const std::string& vin, const std::string& make, const std::string& model, int year, double capacity);
        // פונקציה להצגת מידע על המשאית, שמומש באמצעות override
        void displayInfo() const override;
        // פונקציה לשירות המשאית, שמומש באמצעות override
        void service(ServiceType service) override;
    };

} // namespace VDMS

#endif // TRUCK_H
