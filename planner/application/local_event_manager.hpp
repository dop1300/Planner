// For the time values in the query:
        // If the time conditions are present, a condition for
        // returning true is that the event time overlaps with the time
        // in the query.
        // For name and category in the query:
        // If the value is in the query, then a condition for returning
        // true is that the value string is contained within the corresponding
        // attribute in the event.
        // If and only if all of the included conditions are true, then the
        // function returns true.
        // bool CheckQueryConditions(EventQuery query, CalendarEvent event);