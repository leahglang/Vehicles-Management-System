//#ifndef SERVICE_STATION_H
//#define SERVICE_STATION_H
//
//#include <vector>
//#include <queue>
//#include <iostream>
//#include "Vehicle.h"
//
//namespace VDMS {
//
//    class ServiceStation {
//    private:
//        struct ServiceRequest {
//            Vehicle* vehicle;
//            ServiceType serviceType;
//
//            // ����� ������ ����� ����� �-priority_queue
//            bool operator<(const ServiceRequest& other) const {
//                // ���� �-OilChange ��� ����, Inspection �����, TireRotation �����
//                return serviceType < other.serviceType;
//            }
//        };
//
//        std::priority_queue<ServiceRequest> serviceQueue; // ��� ����� ��������
//
//    public:
//        void addToQueue(Vehicle* vehicle, ServiceType serviceType);
//        void processQueue();
//        void displayQueue() const; // ���� ���� ������
//    };
//
//} // namespace VDMS
//
//#endif // SERVICE_STATION_H


#ifndef SERVICE_STATION_H
#define SERVICE_STATION_H

#include <vector>
#include <queue>
#include <iostream>
#include "Vehicle.h"

namespace VDMS {

    class ServiceStation {
    private:
        struct ServiceRequest {
            Vehicle* vehicle;
            ServiceType serviceType;

            // ����� ������ ����� ����� �-priority_queue
            bool operator<(const ServiceRequest& other) const {
                // ���� �-OilChange (���� ���� �����) �� ������ ����� �����
                return serviceType < other.serviceType;
            }
        };

        std::priority_queue<ServiceRequest> serviceQueue; // ��� ����� ��������

    public:
        void addToQueue(Vehicle* vehicle, ServiceType serviceType);
        void processQueue();
        void displayQueue() const; // ���� ���� ������
        void printServicePriority() const; // ���� ��� ��������� �� �������� ����
    };

} // namespace VDMS

#endif // MOTORCYCLE_H