#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

namespace VDMS {

    class Car : public Vehicle {
    private:
        int numDoors;

    public:
        // קונסטרוקטור למחלקת Car
        Car(const std::string& vin, const std::string& make, const std::string& model, int year, int doors);
        // פונקציה להצגת מידע על הרכב, שמומש באמצעות override
        void displayInfo() const override;
        // פונקציה לשירות הרכב, שמומש באמצעות override
        void service(ServiceType service) override;
    };

} // namespace VDMS

#endif // CAR_H
#pragma once
