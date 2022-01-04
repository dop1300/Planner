#include "calendar_event.hpp"
#include "event_validation.hpp"

CalendarEvent::CalendarEvent(std::string name, std::string category, int priority, 
        time_t start, time_t end, bool done) {
    category_ = category;
    name_ = name;
    priority_ = priority;
    start_ = start;
    end_ = end;
    done_ = done;
}


bool CalendarEvent::check_valid() {
    
    return true;
}

double CalendarEvent::get_time_remaining(time_t from) {
    return difftime(end_, from);
}

//getters

std::string CalendarEvent::get_category() {
    return category_;
}
std::string CalendarEvent::get_name() {
    return name_;
}

int CalendarEvent::get_priority() {
    return priority_;
}

time_t CalendarEvent::get_start() {
    return start_;
}

time_t CalendarEvent::get_end() {
    return end_;
}
bool CalendarEvent::get_done() {
    return done_;
}
