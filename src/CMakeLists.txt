set(SRC
    main.cpp
)

add_executable(lsstudio WIN32 ${SRC})
qt5_use_modules(lsstudio Widgets Multimedia)

install(TARGETS lsstudio
    RUNTIME DESTINATION bin
)
