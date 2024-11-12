#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

namespace VDMS {

    // הגדרת enum לסוגי שירותים
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
        static int vehicleCount; // ספירה סטטית של מספר הרכבים שנוצרו

    public:
        // קונסטרוקטור למחלקת Vehicle
        Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year);
        // קונסטרוקטור העתקה למחלקת Vehicle
        Vehicle(const Vehicle& other);
        // דסטרוקטור למחלקת Vehicle
        virtual ~Vehicle();

        // פונקציה סטטית להחזרת מספר הרכבים שנוצרו
        static int getVehicleCount();
        virtual void displayInfo() const;
        virtual void service(ServiceType service) = 0;

        // פונקציה חברותית להדפסה של פרטי הרכב לזרם היציאה
        friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);
        // פונקציה חברותית לביצוע שירות על הרכב
        friend void performService(Vehicle& vehicle, ServiceType service);

        // פונקציות Inline להגדיר ולקבל את יצרן הרכב
        inline void setMake(const std::string& m) { make = m; }
        inline std::string getMake() const { return make; }
    };

} // namespace VDMS

#endif // VEHICLE_H
