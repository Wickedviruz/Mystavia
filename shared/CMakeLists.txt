# shared/CMakeLists.txt
add_library(MystaviaShared STATIC
    src/SharedCode.cpp
)

target_include_directories(MystaviaShared PUBLIC include)
