#ifndef CALENDAR_QUERY_H
#define CALENDAR_QUERY_H

#include <string>

#include <time.h>

struct EventQuery {
    std::string name;
    std::string category;
    time_t start;
    time_t end;
};

#endif
