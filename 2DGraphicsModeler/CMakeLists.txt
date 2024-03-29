cmake_minimum_required(VERSION 3.5)

project(2DModelerApplication VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
	login.cpp
        login.h
        login.ui
	vector.h
        line.cpp
        line.h
        ellipse.cpp
        ellipse.h
        polygon.cpp
        polygon.h
        polyline.cpp
        polyline.h
        rectangle.cpp
        rectangle.h
        Shape.h
        text.h
        text.cpp
	shapes.txt
        parser2.cpp
        parser2.h
        Shape.cpp
	aboutus.h 
	aboutus.cpp 
	aboutus.ui
        canvas.h
        canvas.cpp
        storage.h
        storage.cpp
	serializer.h
	serializer.cpp

)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(2DModelerApplication
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET 2DModelerApplication APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(2DModelerApplication SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(2DModelerApplication
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(2DModelerApplication PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(2DModelerApplication PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(2DModelerApplication)
endif()
