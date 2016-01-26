cmake_minimum_required (VERSION 2.6)

set (PROJECT 
  Subscribers)

project (${PROJECT})

file(GLOB HEADERS
    "src/*.h")
    
file(GLOB SOURCES
    "src/*.cpp"
    "src/*.c")

set (EXTERNAL_LIBRARIES
  axutil
  axis2_parser
  axis2_engine
  axis2_http_sender
  axis2_http_receiver
  guththila)

if (NOT DEFINED ENV{AXIS2C_HOME})
  message (FATAL_ERROR "AXIS2C_HOME is not set")
endif (NOT DEFINED ENV{AXIS2C_HOME})

if (NOT DEFINED ENV{AXIS2C_INCLUDE})
  message (FATAL_ERROR "AXIS2C_INCLUDE is not set")
endif (NOT DEFINED ENV{AXIS2C_INCLUDE})

message("AXIS: $ENV{AXIS2C_INCLUDE}")

include_directories (src)
include_directories ($ENV{AXIS2C_INCLUDE})
include_directories ($ENV{AXIS2C_INCLUDE}/platforms)

link_directories ($ENV{AXIS2C_HOME}/lib)

if (MSVC)
	add_definitions (/W3)
        set (EXTERNAL_LIBRARIES ${EXTERNAL_LIBRARIES} axiom)
elseif (CMAKE_COMPILER_IS_GNUCXX)
        set (EXTERNAL_LIBRARIES ${EXTERNAL_LIBRARIES} axis2_axiom)
        add_definitions (-Wall -pedantic)
else ()
	message ("Unknown compiler")
endif ()

source_group ("Header Files" FILES ${HEADERS})
source_group ("Source Files" FILES ${SOURCES})

add_executable(main ${HEADERS} ${SOURCES})

target_link_libraries (main ${EXTERNAL_LIBRARIES})
