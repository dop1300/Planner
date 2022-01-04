#include "calendar_event.hpp"
#include "event_compare_key.hpp"

CalendarEvent::CalendarEvent(std::string name, std::string category, int priority, 
        time_t start, time_t end, bool done) {
    category_ = category;
    name_ = name;
    priority_ = priority;
    start_ = start;
    end_ = end;
    done_ = done;
}

bool CalendarEvent::CompareGreater(CalendarEvent compared, EventCompareKey compare_on) {
    if (compare_on == EventCompareKey::kStart)
        return start_ > compared.GetStart();
    if (compare_on == EventCompareKey::kEnd)
        return end_ > compared.GetEnd();
    return false;
}

bool CalendarEvent::CheckValid() {
    int name_length = name_.length();
    int category_length = category_.length();

    // Names are in or between 1 and 32 characters.
    bool name_valid = name_length > 0 
                            && name_length <= EVENT_MAX_NAME_LENGTH;
    bool category_valid = category_length > 0 
                            && category_length <= EVENT_MAX_NAME_LENGTH;
    // Priority is within bounds.
    bool priority_valid = priority_ >= EVENT_MIN_PRIORITY 
                            && priority_ <= EVENT_MAX_PRIORITY;
    // Time has a nonzero and positive duration.
    bool time_valid = difftime(end_, start_) > 0;
    return name_valid && category_valid && priority_valid && time_valid;
}

double CalendarEvent::GetTimeRemaining(time_t from) {
    return difftime(end_, from);
}

//getters

std::string CalendarEvent::GetCategory() {
    return category_;
}
std::string CalendarEvent::GetName() {
    return name_;
}

int CalendarEvent::GetPriority() {
    return priority_;
}

time_t CalendarEvent::GetStart() {
    return start_;
}

time_t CalendarEvent::GetEnd() {
    return end_;
}
bool CalendarEvent::GetDone() {
    return done_;
}
