add_library(statmon_gui STATIC
    src/main_window.cpp
    include/gui/main_window.hpp
)

target_include_directories(statmon_gui
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(statmon_gui
    PUBLIC
        Qt6::Widgets
)
