cmake_minimum_required(VERSION 3.10)

project(Planner)
add_executable(planner 	
	source/planner/planner.cpp
	source/planner/model/calendar_event.cpp)
target_compile_options(planner PRIVATE -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic)
