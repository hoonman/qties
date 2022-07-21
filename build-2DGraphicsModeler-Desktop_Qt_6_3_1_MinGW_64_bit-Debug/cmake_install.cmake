<<<<<<< HEAD
# Install script for directory: C:/Users/Brian/Documents/CS1C_Project/qties/2DGraphicsModeler
=======
# Install script for directory: C:/CS1C/QTPROJECT/qties/2DGraphicsModeler
>>>>>>> 9f109160e6a2f914cf749f7a48485852770f6fd8

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/2DGraphicsModeler")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/Qt/Tools/mingw1120_64/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "C:/Users/Brian/Documents/CS1C_Project/qties/build-2DGraphicsModeler-Desktop_Qt_6_3_1_MinGW_64_bit-Debug/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "C:/CS1C/QTPROJECT/qties/build-2DGraphicsModeler-Desktop_Qt_6_3_1_MinGW_64_bit-Debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 9f109160e6a2f914cf749f7a48485852770f6fd8
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
