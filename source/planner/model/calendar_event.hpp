#ifndef CALENDAR_EVENT_HPP
#define CALENDAR_EVENT_HPP

#include <time.h>

#include <string>

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

        bool check_valid();
        double get_time_remaining(time_t from);
        // getters
        std::string get_category();
        std::string get_name();
        int get_priority();
        time_t get_start();
        time_t get_end();
        bool get_done();
};

#endif