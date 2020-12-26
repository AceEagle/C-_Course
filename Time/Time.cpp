#include "Time.h"
#include <cmath>

using namespace std;

Time::Time(int hours, int minutes, int seconds) : m_hours(hours),
m_minutes(minutes), m_seconds(seconds) {
    if (seconds > 59) {
        m_minutes = minutes + floor(seconds/60);
        m_seconds = (seconds%60)*60;
    }
    if (minutes > 59) {
        m_hours = hours + floor(minutes/60);
        m_minutes = (minutes%60)*60;
    }

}

bool Time::isEqual(Time const& b) const{
    return (m_hours == b.m_hours && m_minutes == b.m_minutes && m_seconds == b.m_seconds);
}

void Time::showTime() const {
    cout << "Votre temps est : " << m_hours << " heures, " << m_minutes << " minutes" << " et " << m_seconds << "secondes" << endl;
}

bool operator==(Time const& a, Time const& b){
    return a.isEqual(b);
}

bool operator!=(Time const& a, Time const& b){
    return !(a == b);
}