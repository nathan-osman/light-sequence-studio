configure_file(config.h.in "${CMAKE_CURRENT_BINARY_DIR}/config.h")

set(SRC
    ui/mainwindow.cpp
    main.cpp
)

add_executable(lsstudio WIN32 ${SRC})
qt5_use_modules(lsstudio Widgets Multimedia)

install(TARGETS lsstudio
    RUNTIME DESTINATION bin
)
