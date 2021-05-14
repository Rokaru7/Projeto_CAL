#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
    int capacity;
    int duration = 0;
public:
    explicit Vehicle(int cap);
    void setDuration(int dur);
    int getCapacity();
    int getDuration();
};

Vehicle::Vehicle(int cap): capacity(cap) {}

void Vehicle::setDuration(int dur) {
    duration = dur;
}

int Vehicle::getCapacity() {
    return capacity;
}

int Vehicle::getDuration() {
    return duration;
}

#endif //VEHICLE_H
