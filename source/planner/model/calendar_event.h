#ifndef CALENDAR_EVENT_HPP
#define CALENDAR_EVENT_HPP

#include <time.h>

#include <string>

#include "event_compare_key.h"

#define EVENT_MAX_NAME_LENGTH 32
#define EVENT_MIN_PRIORITY 1
#define EVENT_MAX_PRIORITY 10

class CalendarEvent {
    // Immutable container that stores the event data and checks validity.
    private:
        std::string category_;
        std::string name_;
        int priority_;
        time_t start_;
        time_t end_;
        bool done_;
    public:
        CalendarEvent(std::string name, std::string category, int priority, time_t start,
            time_t end, bool done);

        bool CompareGreater(CalendarEvent compared, EventCompareKey compare_on);
        bool CheckValid();
        double GetTimeRemaining(time_t from);
        // getters
        std::string GetCategory();
        std::string GetName();
        int GetPriority();
        time_t GetStart();
        time_t GetEnd();
        bool GetDone();
};

#endif
