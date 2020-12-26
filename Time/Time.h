#ifndef CPLUS_COURSE_TIME_H
#define CPLUS_COURSE_TIME_H

#include <iostream>


class Time {
public:

    Time(int hours = 0, int minutes = 0, int seconds = 0);
    void showTime() const;
    bool isEqual(Time const& b) const;


private:

    int m_hours;
    int m_minutes;
    int m_seconds;
};

bool operator==(Time const& a, Time const& b);
bool operator!=(Time const& a, Time const& b);

#endif
