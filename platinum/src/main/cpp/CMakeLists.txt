# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.
# by huzongyao

#指定需要CMAKE的最小版本
cmake_minimum_required(VERSION 3.4.1)

#C 的编译选项是 CMAKE_C_FLAGS
# 指定编译参数，可选
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNPT_CONFIG_HAVE_SYSTEM_LOG_CONFIG")

#设置生成的so动态库最后输出的路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../../jniLibs/${ANDROID_ABI})

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds it for you.
# Gradle automatically packages shared libraries with your APK.

# Neptune-1.2.3
# Platinum-1.2.0

#设置头文件搜索路径（和此txt同个路径的头文件无需设置），可选
include_directories(Platinum/Platinum
        Platinum/Core
        Platinum/Devices/MediaServer
        Platinum/Devices/MediaConnect
        Platinum/Devices/MediaRenderer
        Platinum/Extras
        Neptune/Core)

file(GLOB_RECURSE NATIVE_SRCS "*.cpp")

#生成so动态库
add_library(platinum-jni SHARED ${NATIVE_SRCS})

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in the
# build script, prebuilt third-party libraries, or system libraries.
target_link_libraries(platinum-jni log android)
