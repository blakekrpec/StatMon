add_subdirectory(gui)

add_executable(statmon main.cpp)

target_link_libraries(statmon
    PRIVATE
        statmon_gui
)
