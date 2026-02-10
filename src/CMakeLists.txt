add_subdirectory(gui)

add_executable(statmon main.cpp)

target_link_libraries(statmon
    PRIVATE
        statmon_gui
)

if(WIN32)
    find_program(WINDEPLOYQT_EXECUTABLE windeployqt HINTS "${Qt6_DIR}/../../../bin")
    if(WINDEPLOYQT_EXECUTABLE)
        add_custom_command(TARGET statmon POST_BUILD
            COMMAND "${WINDEPLOYQT_EXECUTABLE}"
                --no-translations
                --no-system-d3d-compiler
                --no-opengl-sw
                "$<TARGET_FILE:statmon>"
            COMMENT "Running windeployqt to copy Qt DLLs..."
        )
    endif()
endif()
