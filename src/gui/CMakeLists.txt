add_library(statmon_gui STATIC
    src/data_widget.cpp
    src/main_window.cpp
    src/pane_manager.cpp
    src/pane_widget.cpp
    src/settings_dialog.cpp
    include/gui/data_widget.hpp
    include/gui/main_window.hpp
    include/gui/pane_manager.hpp
    include/gui/pane_widget.hpp
    include/gui/settings_dialog.hpp
)

target_include_directories(statmon_gui
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(statmon_gui
    PUBLIC
        Qt6::Widgets
)
